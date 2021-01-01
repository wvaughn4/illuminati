// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "Components/ShadowStealthComponent.h"
#include "ShadowStealth.h"
#include "ShadowStealthSettings.h"
#include "ShadowStealthCustomVersion.h"
#include "IShadowLight.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/Level.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "PrecomputedLightVolume.h"
#include "Math/SHMath.h"
#include "AISystem.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AIPerceptionComponent.h"
#include "TimerManager.h"

#if !UE_BUILD_SHIPPING
#include "DrawDebugHelpers.h"
#endif

DECLARE_CYCLE_STAT(TEXT("ComputeLightIntensity"), STAT_ComputeLightIntensity, STATGROUP_ShadowStealth);
DECLARE_CYCLE_STAT(TEXT("ComputeDynamicLightIntensity"), STAT_ComputeDynamicLightIntensity, STATGROUP_ShadowStealth);
DECLARE_CYCLE_STAT(TEXT("ComputePrecomputedLightIntensity"), STAT_ComputePrecomputedLightIntensity, STATGROUP_ShadowStealth);

static TAutoConsoleVariable<int32> CVarShadowStealthDebugDraw(
    TEXT("ShadowStealth.DebugDraw"),
    0,
    TEXT("Draw debug information for Shadow Stealth plugin\n")
    TEXT("<=0: disabled\n")
    TEXT(">=1: enabled"),
    ECVF_Cheat);

static TAutoConsoleVariable<int32> CVarShadowStealthAISightHide(
    TEXT("ShadowStealth.AISightHide"),
    0,
    TEXT("Hide Shadow Stealth components from AISight\n")
    TEXT("<=0: disabled\n")
    TEXT(">=1: enabled"),
    ECVF_Cheat);

UShadowStealthComponent::UShadowStealthComponent()
    : TestSelfLocation(false)
    , ShadowMethod(EShadowMethod::Max)
    , AISightShadowSenseEnabled(true)
    , AISightIntensityHiddenLowerBoundOverride(0.0f)
    , AISightIntensitySightedLowerBoundOverride(0.0f)
    , AISightIntensityUpperBoundOverride(0.0f)
	, NumberOfLoSChecksPerformedPtr(nullptr)
    , LastIntensity(0.0f)
{
    OverlappingShadowLights.Reserve(16);

	bWantsInitializeComponent = true;

    PrimaryComponentTick.bCanEverTick = true;
#if UE_BUILD_SHIPPING
    PrimaryComponentTick.bStartWithTickEnabled = false;
#endif

    Settings = GetDefault<UShadowStealthSettings>();
	DefaultSightCollisionChannel = GET_AI_CONFIG_VAR(DefaultSightCollisionChannel);
}

USceneComponent* UShadowStealthComponent::GetTestComponent() const
{
    return GetAttachParent();
}

void UShadowStealthComponent::InitializeComponent()
{
	Super::InitializeComponent();

	if (SightTargetClass)
	{
		static const FName SightTargetName = TEXT("SightTarget");
		SightTarget = NewObject<UShadowSightTargetBase>(this, SightTargetClass, SightTargetName);
	}
}

void UShadowStealthComponent::BeginPlay()
{
	Super::BeginPlay();

	static const auto AllowStaticLightingVar = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.AllowStaticLighting"));
	bUseStaticLighting = AllowStaticLightingVar->GetValueOnGameThread() && Settings->bUseStaticLighting;

	VolumeLightingMethod = VLM_VolumetricLightmap;
	if (UWorld* World = GetWorld())
	{
		for (ULevel* Level : World->GetLevels())
		{
			if (Level && !Level->IsPendingKill() && Level->PrecomputedLightVolume && Level->PrecomputedLightVolume->Data)
			{
				VolumeLightingMethod = VLM_SparseVolumeLightingSamples;
			}
		}
	}

#if UE_BUILD_SHIPPING
    if (ShouldNotifyOnIntensity())
    {
        SetComponentTickEnabled(true);
    }
#endif

    int SocketsNum = GetSocketsNum();

    DynamicLightIntensity = FLinearColor(0.0f, 0.0f, 0.0f, 0.0f);
    DynamicLightIntensityAtSockets.SetNumZeroed(SocketsNum);

    PrecomputedLightIntensity = FLinearColor(0.0f, 0.0f, 0.0f, 0.0f);
    PrecomputedLightIntensityAtSockets.SetNumZeroed(SocketsNum);

    InitGlobalShadowLights();
    InitOverlappingShadowLights();

    AActor* Owner = GetOwner();
    Owner->OnActorBeginOverlap.AddDynamic(this, &UShadowStealthComponent::OnActorBeginOverlap);
    Owner->OnActorEndOverlap.AddDynamic(this, &UShadowStealthComponent::OnActorEndOverlap);

	if (GMaxRHIFeatureLevel == ERHIFeatureLevel::SM5 && bUseStaticLighting && VolumeLightingMethod == VLM_VolumetricLightmap && SocketsNum > 0)
	{
		SceneViewExt = FSceneViewExtensions::NewExtension<FShadowStealthSceneViewExt>(this);
	}

#if ENGINE_VERSION_MINOR == 24
	// Workaround for InitOverlappingShadowLights() not working in 4.24 (bug report UE-86045)
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimerForNextTick([this]()
		{
			for (UActorComponent* OwnedComp : GetOwner()->GetComponents())
			{
				if (UPrimitiveComponent* PrimComp = Cast<UPrimitiveComponent>(OwnedComp))
				{
					for (const FOverlapInfo& OtherOverlap : PrimComp->GetOverlapInfos())
					{
						UActorComponent* Component = OtherOverlap.OverlapInfo.Component.Get();
						if (Cast<IShadowLight>(Component))
						{
							OverlappingShadowLights.AddUnique(Component);
						}
					}
				}
			}
		});
	}
#endif
}

void UShadowStealthComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    OverlappingShadowLights.Reset();

    AActor* Owner = GetOwner();
    Owner->OnActorBeginOverlap.RemoveDynamic(this, &UShadowStealthComponent::OnActorBeginOverlap);
    Owner->OnActorEndOverlap.RemoveDynamic(this, &UShadowStealthComponent::OnActorEndOverlap);

	if (SceneViewExt.IsValid())
	{
		SceneViewExt->Finalize();
		SceneViewExt.Reset();
	}
}

void UShadowStealthComponent::InitGlobalShadowLights()
{
    if (UWorld* World = GetWorld())
    {
        for (AActor* Actor : FActorRange(World))
        {
            for (UActorComponent* Component : Actor->GetComponents())
            {
                IShadowLight* ShadowLight = Cast<IShadowLight>(Component);
                if (ShadowLight && ShadowLight->IsGlobalLight())
                {
                    AddOverlappingShadowLight(Component);
                }
            }
        }
    }
}

void UShadowStealthComponent::InitOverlappingShadowLights()
{
    for (UActorComponent* OwnedComp : GetOwner()->GetComponents())
    {
        if (UPrimitiveComponent* PrimComp = Cast<UPrimitiveComponent>(OwnedComp))
        {
            for (const FOverlapInfo& OtherOverlap : PrimComp->GetOverlapInfos())
            {
                AddOverlappingShadowLight(OtherOverlap.OverlapInfo.Component.Get());
            }
        }
    }
}

void UShadowStealthComponent::OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
    for (UActorComponent* Component : OtherActor->GetComponents())
    {
        AddOverlappingShadowLight(Component);
    }
}

void UShadowStealthComponent::OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
    for (UActorComponent* Component : OtherActor->GetComponents())
    {
        RemoveOverlappingShadowLight(Component);
    }
}

void UShadowStealthComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UpdateNotifyOnIntensity();

#if !UE_BUILD_SHIPPING
    if (CVarShadowStealthDebugDraw.GetValueOnGameThread() > 0 && (TestSockets.Num() > 0 || TestSelfLocation))
    {
        if (UWorld* World = GetWorld())
        {
            // Overlapping shadow lights count
            {
                FVector Location = FVector(0.0f, 0.0f, 90.0f);
                FString Text = FString::FromInt(OverlappingShadowLights.Num());
                ::DrawDebugString(World, Location, Text, GetOwner(), FColor::Yellow, 0.0f, true);
            }
            // Light intensity
            {
                FVector Location = FVector(0.0f, 0.0f, 85.0f);
                FString Text = FString::SanitizeFloat(GetLightIntensity());
                ::DrawDebugString(World, Location, Text, GetOwner(), FColor::Yellow, 0.0f, true);
            }
            // Test sockets
            for (int I = 0, Num = GetSocketsNum(); I < Num; ++I)
            {
                FVector Location = GetLocationAtSocketIndex(I);
                float LightIntensityAtSocket = GetLightIntensityAtSocketIndex(I);
                FColor Color = LightIntensityAtSocket > 0.0f ? FColor::Yellow : FColor::Blue;
                ::DrawDebugSphere(World, Location, 10.0f, 12, Color, false, -1.0f, SDPG_Foreground);
            }
        }
    }
#endif
}

void UShadowStealthComponent::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	Ar.UsingCustomVersion(FShadowStealthCustomVersion::GUID);

	const int32 CustomVersion = Ar.CustomVer(FShadowStealthCustomVersion::GUID);
	if (CustomVersion < FShadowStealthCustomVersion::ShadowSightTarget)
	{
		for (float ExceededIntensity : NotifyOnExceedIntensities_DEPRECATED)
		{
			FShadowIntensityNotifier& Notify = NotifyOnIntensities.Emplace_GetRef();
			Notify.Intensity = ExceededIntensity;
			Notify.bExeeded = true;
			Notify.bFellBelow = false;
		}
		NotifyOnExceedIntensities_DEPRECATED.Empty();

		for (float FellBelowIntensity : NotifyOnFallBelowIntensities_DEPRECATED)
		{
			FShadowIntensityNotifier* Notify = NotifyOnIntensities.FindByPredicate([FellBelowIntensity](FShadowIntensityNotifier& Item)
			{
				return Item.Intensity == FellBelowIntensity;
			});
			if (Notify == nullptr)
			{
				Notify = &NotifyOnIntensities.Emplace_GetRef();
				Notify->Intensity = FellBelowIntensity;
				Notify->bExeeded = false;
			}
			Notify->bFellBelow = true;
		}
		NotifyOnFallBelowIntensities_DEPRECATED.Empty();

		for (int I = 0; I < NotifyOnIntensities.Num(); ++I)
		{
			NotifyOnIntensities[I].Name = FName(*FString::Printf(TEXT("Intensity_%d"), I));
		}
	}
}

void UShadowStealthComponent::AddOverlappingShadowLight(UActorComponent* Component)
{
    if (Cast<IShadowLight>(Component))
    {
        OverlappingShadowLights.Add(Component);
    }
}

void UShadowStealthComponent::RemoveOverlappingShadowLight(UActorComponent* Component)
{
    if (Cast<IShadowLight>(Component))
    {
        OverlappingShadowLights.RemoveSingleSwap(Component, false);
    }
}

float UShadowStealthComponent::GetLightIntensity()
{
    ComputeLightIntensity();
    return FMath::Sqrt(DynamicLightIntensity.A + PrecomputedLightIntensity.A);
}

float UShadowStealthComponent::GetLightIntensityAtSocket(FName SocketName)
{
    int32 SocketIndex;
    if (TestSockets.Find(FParentSocket(SocketName), SocketIndex))
    {
        return GetLightIntensityAtSocketIndex(SocketIndex);
    }
    return 0.0f;
}

float UShadowStealthComponent::GetLightIntensityAtSelf()
{
    if (TestSelfLocation)
    {
        return GetLightIntensityAtSocketIndex(TestSockets.Num());
    }
    return 0.0f;
}

float UShadowStealthComponent::GetLightIntensityAtSocketIndex(int SocketIndex)
{
    ComputeLightIntensity();
    return FMath::Sqrt(DynamicLightIntensityAtSockets[SocketIndex].A + PrecomputedLightIntensityAtSockets[SocketIndex].A);
}

static FLinearColor Sqrt(const FLinearColor& Color)
{
    return FLinearColor(FMath::Sqrt(Color.R), FMath::Sqrt(Color.G), FMath::Sqrt(Color.B), FMath::Sqrt(Color.A));
}

FLinearColor UShadowStealthComponent::GetLightIntensityRGB()
{
    ComputeLightIntensity();
    return Sqrt(DynamicLightIntensity + PrecomputedLightIntensity);
}

FLinearColor UShadowStealthComponent::GetLightIntensityRGBAtSocket(FName SocketName)
{
    int32 SocketIndex;
    if (TestSockets.Find(FParentSocket(SocketName), SocketIndex))
    {
        return GetLightIntensityRGBAtSocketIndex(SocketIndex);
    }
    return FLinearColor(0.0f, 0.0f, 0.0f, 0.0f);
}

FLinearColor UShadowStealthComponent::GetLightIntensityRGBAtSelf()
{
    if (TestSelfLocation)
    {
        return GetLightIntensityRGBAtSocketIndex(TestSockets.Num());
    }
    return FLinearColor(0.0f, 0.0f, 0.0f, 0.0f);
}

FLinearColor UShadowStealthComponent::GetLightIntensityRGBAtSocketIndex(int SocketIndex)
{
    ComputeLightIntensity();
    return Sqrt(DynamicLightIntensityAtSockets[SocketIndex] + PrecomputedLightIntensityAtSockets[SocketIndex]);
}

void UShadowStealthComponent::ComputeLightIntensity()
{
    USceneComponent* TestComponent = GetTestComponent();
    UWorld* World = GetWorld();
    if ((TestComponent || TestSockets.Num() == 0) && World && ComputeTime != World->GetTimeSeconds())
    {
        ComputeTime = World->GetTimeSeconds();

	    SCOPE_CYCLE_COUNTER(STAT_ComputeLightIntensity);

        ComputeDynamicLightIntensity();

        if (bUseStaticLighting)
        {
            ComputePrecomputedLightIntensity(World);
        }
    }
}

FLinearColor UShadowStealthComponent::GetIntensityWithShadowMethod(const TArray<FLinearColor>& Intensities)
{
    FLinearColor ResultIntensity = FLinearColor(0.0f, 0.0f, 0.0f, 0.0f);
    if (Intensities.Num() > 0)
    {
        switch (ShadowMethod)
        {
        case EShadowMethod::Max:
            ResultIntensity = Intensities[0];
            for (int I = 1, Num = Intensities.Num(); I < Num; ++I)
            {
                ResultIntensity.R = FMath::Max(ResultIntensity.R, Intensities[I].R);
                ResultIntensity.G = FMath::Max(ResultIntensity.G, Intensities[I].G);
                ResultIntensity.B = FMath::Max(ResultIntensity.B, Intensities[I].B);
                ResultIntensity.A = FMath::Max(ResultIntensity.A, Intensities[I].A);
            }
            break;

        case EShadowMethod::Min:
            ResultIntensity = Intensities[0];
            for (int I = 1, Num = Intensities.Num(); I < Num; ++I)
            {
                ResultIntensity.R = FMath::Min(ResultIntensity.R, Intensities[I].R);
                ResultIntensity.G = FMath::Min(ResultIntensity.G, Intensities[I].G);
                ResultIntensity.B = FMath::Min(ResultIntensity.B, Intensities[I].B);
                ResultIntensity.A = FMath::Min(ResultIntensity.A, Intensities[I].A);
            }
            break;

        case EShadowMethod::Mean:
            for (int I = 0, Num = Intensities.Num(); I < Num; ++I)
            {
                ResultIntensity += Intensities[I];
            }
            ResultIntensity /= Intensities.Num();
            break;

        case EShadowMethod::Median:
        {
            int MeanIdx = Intensities.Num() / 2;
            TArray<FLinearColor, TInlineAllocator<16>> SortedIntensities(Intensities);

            SortedIntensities.Sort([](const FLinearColor& Lhs, const FLinearColor& Rhs) { return Lhs.R < Rhs.R; });
            ResultIntensity.R = SortedIntensities[MeanIdx].R;

            SortedIntensities.Sort([](const FLinearColor& Lhs, const FLinearColor& Rhs) { return Lhs.G < Rhs.G; });
            ResultIntensity.G = SortedIntensities[MeanIdx].G;

            SortedIntensities.Sort([](const FLinearColor& Lhs, const FLinearColor& Rhs) { return Lhs.B < Rhs.B; });
            ResultIntensity.B = SortedIntensities[MeanIdx].B;

            SortedIntensities.Sort([](const FLinearColor& Lhs, const FLinearColor& Rhs) { return Lhs.A < Rhs.A; });
            ResultIntensity.A = SortedIntensities[MeanIdx].A;
            break;
        }
        }
    }
    return ResultIntensity;
}

void UShadowStealthComponent::ComputeDynamicLightIntensity()
{
    SCOPE_CYCLE_COUNTER(STAT_ComputeDynamicLightIntensity);

    const bool TraceDebug = CVarShadowStealthDebugDraw.GetValueOnGameThread() > 0;
    const ECollisionChannel TraceChannel = Settings->TraceChannel;

    for (int SocketI = 0, SocketNum = GetSocketsNum(); SocketI < SocketNum; ++SocketI)
    {
        FLinearColor SocketLightIntesity = FLinearColor(0.0f, 0.0f, 0.0f, 0.0f);
        FVector Point = GetLocationAtSocketIndex(SocketI);

        for (int LightI = 0, LightNum = OverlappingShadowLights.Num(); LightI < LightNum; ++LightI)
        {
            TWeakObjectPtr<UActorComponent> ShadowLightComponent = OverlappingShadowLights[LightI];
            if (ShadowLightComponent.IsValid())
            {
                IShadowLight* ShadowLight = Cast<IShadowLight>(ShadowLightComponent);
                SocketLightIntesity += ShadowLight->GetLightIntensity(Point, TraceChannel, TraceDebug);
            }
            else
            {
                OverlappingShadowLights.RemoveAtSwap(LightI, 1, false);
                --LightI;
                --LightNum;
            }
        }

        DynamicLightIntensityAtSockets[SocketI] = SocketLightIntesity;
    }

    DynamicLightIntensity = GetIntensityWithShadowMethod(DynamicLightIntensityAtSockets);
}

static float GetIntensityInMaximumDirection(const FSHVector3& Radiance)
{
    FSHVector3 MaxDirSHBasis = FSHVector3::SHBasisFunction(Radiance.GetMaximumDirection());
    return Dot(Radiance, MaxDirSHBasis);
}

void UShadowStealthComponent::ComputePrecomputedLightIntensity(UWorld* World)
{
    SCOPE_CYCLE_COUNTER(STAT_ComputePrecomputedLightIntensity);

	if (VolumeLightingMethod == VLM_SparseVolumeLightingSamples)
	{
		for (int SocketI = 0, SocketNum = GetSocketsNum(); SocketI < SocketNum; ++SocketI)
		{
			FVector Point = GetLocationAtSocketIndex(SocketI);

			float AccumulatedWeight = 0.0f;
			float AccumulatedDirectionalShadowing = 0.0f;
			FSHVectorRGB3 AccumulatedIncidentRadiance;
			FVector AccumulatedSkyBentNormal(0.0f, 0.0f, 0.0f);

			for (ULevel* Level : World->GetLevels())
			{
				if (Level && !Level->IsPendingKill() && Level->PrecomputedLightVolume && Level->PrecomputedLightVolume->Data)
				{
					Level->PrecomputedLightVolume->InterpolateIncidentRadiancePoint(Point, AccumulatedWeight, AccumulatedDirectionalShadowing, AccumulatedIncidentRadiance, AccumulatedSkyBentNormal);
				}
			}

			FSHVectorRGB3 IncidentRadiance;
			if (AccumulatedWeight > 0.0f)
			{
				IncidentRadiance = AccumulatedIncidentRadiance / AccumulatedWeight;
			}

			FLinearColor LightIntensity;
			LightIntensity.R = GetIntensityInMaximumDirection(IncidentRadiance.R);
			LightIntensity.G = GetIntensityInMaximumDirection(IncidentRadiance.G);
			LightIntensity.B = GetIntensityInMaximumDirection(IncidentRadiance.B);
			LightIntensity.A = GetIntensityInMaximumDirection(IncidentRadiance.GetLuminance());
			PrecomputedLightIntensityAtSockets[SocketI] = LightIntensity;
		}
	}
	else if (SceneViewExt.IsValid())
	{
		SceneViewExt->FetchIntensities();
	}

	PrecomputedLightIntensity = GetIntensityWithShadowMethod(PrecomputedLightIntensityAtSockets);
}

float UShadowStealthComponent::GetAISightIntensityHiddenLowerBound() const
{
    return AISightIntensityHiddenLowerBoundOverride > 0.0f
            ? AISightIntensityHiddenLowerBoundOverride
            : Settings->AISightIntensityHiddenLowerBound;
}

float UShadowStealthComponent::GetAISightIntensitySightedLowerBound() const
{
    return AISightIntensitySightedLowerBoundOverride > 0.0f
            ? AISightIntensitySightedLowerBoundOverride
            : Settings->AISightIntensitySightedLowerBound;
}

float UShadowStealthComponent::GetAISightIntensityUpperBound() const
{
    return AISightIntensityUpperBoundOverride > 0.0f
            ? AISightIntensityUpperBoundOverride
            : Settings->AISightIntensityUpperBound;
}

int UShadowStealthComponent::GetSocketsNum() const
{
	return TestSockets.Num() + (TestSelfLocation ? 1 : 0);
}

FVector UShadowStealthComponent::GetLocationAtSocketIndex(int SocketIndex) const
{
	USceneComponent* TestComponent = GetTestComponent();
	if (TestComponent || TestSockets.Num() == 0)
	{
		return SocketIndex < TestSockets.Num()
			? TestComponent->GetSocketLocation(TestSockets[SocketIndex].Name)
			: GetComponentLocation();
	}
	return FVector::ZeroVector;
}

bool UShadowStealthComponent::ShouldNotifyOnIntensity()
{
    bool bNotify = NotifyOnIntensities.Num() > 0;
	if (!bNotify && SightTarget)
	{
		FShadowIntensityNotifier::TLocalArray Notifies;
		SightTarget->GetIntensityNotifiers(this, Notifies);
		bNotify = Notifies.Num() > 0;
	}
    return bNotify;
}

void UShadowStealthComponent::UpdateNotifyOnIntensity()
{
    float CurrentIntensity = GetLightIntensity();

	// This is somehow overly complicated, but I wanted to ensure that all delegates will be fired in a logically sane order.
	FShadowIntensityNotifier::TLocalArray AllNotifies;
	AllNotifies.Append(NotifyOnIntensities);
	if (SightTarget)
	{
		SightTarget->GetIntensityNotifiers(this, AllNotifies);
	}

	FShadowIntensityNotifier::TLocalArray NotifiesToBroadcast;
    if (CurrentIntensity > LastIntensity)
    {
        // Exceeds.
        for (const FShadowIntensityNotifier& Notify : AllNotifies)
        {
			if (Notify.bExeeded && CurrentIntensity >= Notify.Intensity && LastIntensity < Notify.Intensity)
			{
				NotifiesToBroadcast.Add(Notify);
			}
        }

		NotifiesToBroadcast.StableSort([](const FShadowIntensityNotifier& Lhs, const FShadowIntensityNotifier& Rhs)
		{
			return Lhs.Intensity < Rhs.Intensity;
		});

        for (const FShadowIntensityNotifier& Notify : NotifiesToBroadcast)
        {
			OnNotifyExceedIntensity.Broadcast(Notify.Name, Notify.Intensity);
        }
    }
    else
    {
		// Fell belows.
		for (const FShadowIntensityNotifier& Notify : AllNotifies)
		{
			if (Notify.bFellBelow && CurrentIntensity < Notify.Intensity && LastIntensity >= Notify.Intensity)
			{
				NotifiesToBroadcast.Add(Notify);
			}
		}

		NotifiesToBroadcast.StableSort([](const FShadowIntensityNotifier& Lhs, const FShadowIntensityNotifier& Rhs)
		{
			return Lhs.Intensity > Rhs.Intensity;
		});

		for (const FShadowIntensityNotifier& Notify : NotifiesToBroadcast)
		{
			OnNotifyFallBelowIntensity.Broadcast(Notify.Name, Notify.Intensity);
		}
    }

    LastIntensity = CurrentIntensity;
}

bool UShadowStealthComponent::CheckLineOfSight(const AActor* Observer, const FVector& ObserverLocation, const FVector& SightTargetLocation) const
{
	bool bInLineOfSight = false;

	if (UWorld* World = GetWorld())
	{
		FHitResult HitResult;
		const bool bHit = World->LineTraceSingleByChannel(HitResult, ObserverLocation, SightTargetLocation, DefaultSightCollisionChannel,
			FCollisionQueryParams(SCENE_QUERY_STAT(AIShadowStealthLineOfSight), true, Observer));

		AActor* Owner = GetOwner();
		bInLineOfSight = !bHit || (HitResult.Actor.IsValid() && HitResult.Actor->IsOwnedBy(Owner));

		if (NumberOfLoSChecksPerformedPtr)
		{
			(*NumberOfLoSChecksPerformedPtr)++;
		}
	}

	return bInLineOfSight;
}

bool UShadowStealthComponent::HasBeenSightedBy(const AActor* ObserverBody) const
{
    UAIPerceptionComponent* ObserverPerception = nullptr;
    if (ObserverBody)
    {
        if (const APawn* ObserverPawn = Cast<APawn>(ObserverBody))
        {
            if (AController* ObserverController = ObserverPawn->GetController())
            {
                ObserverPerception = ObserverController->FindComponentByClass<UAIPerceptionComponent>();
            }
        }
        if (ObserverPerception == nullptr)
        {
            ObserverPerception = ObserverBody->FindComponentByClass<UAIPerceptionComponent>();
        }
    }
    if (ObserverPerception)
    {
        if (const FActorPerceptionInfo* PerceptionInfo = ObserverPerception->GetActorInfo(*GetOwner()))
        {
            return PerceptionInfo->IsSenseActive(UAISense::GetSenseID<UAISense_Sight>());
        }
    }
    return false;
}

bool UShadowStealthComponent::CanBeSeenFrom(const FVector& ObserverLocation, FVector& OutSeenLocation, int32& NumberOfLoSChecksPerformed, float& OutSightStrength, const AActor* IgnoreActor)
{
#if !UE_BUILD_SHIPPING
    if (CVarShadowStealthAISightHide.GetValueOnGameThread() > 0)
    {
        return false;
    }
#endif
    bool bCanBeSeen = false;
    if (GetWorld() && GetOwner())
    {
		NumberOfLoSChecksPerformedPtr = &NumberOfLoSChecksPerformed;

		if (SightTarget)
		{
			bCanBeSeen = CanBeSeenFrom_SightTarget(ObserverLocation, OutSeenLocation, OutSightStrength, IgnoreActor);
		}
		else if (AISightShadowSenseEnabled)
		{
			bCanBeSeen = CanBeSeenFrom_Original(ObserverLocation, OutSeenLocation, OutSightStrength, IgnoreActor);
		}
		else
		{
			bCanBeSeen = CanBeSeenFrom_Engine(ObserverLocation, OutSeenLocation, NumberOfLoSChecksPerformed, OutSightStrength, IgnoreActor);
		}

		NumberOfLoSChecksPerformedPtr = nullptr;
    }
    return bCanBeSeen;
}

bool UShadowStealthComponent::CanBeSeenFrom_SightTarget(const FVector& ObserverLocation, FVector& OutSeenLocation, float& OutSightStrength, const AActor* IgnoreActor)
{
	const bool bSeenLastTime = HasBeenSightedBy(IgnoreActor);
	return SightTarget->CanBeSeenFrom(this, IgnoreActor, ObserverLocation, bSeenLastTime, OutSeenLocation, OutSightStrength);
}

bool UShadowStealthComponent::CanBeSeenFrom_Original(const FVector& ObserverLocation, FVector& OutSeenLocation, float& OutSightStrength, const AActor* IgnoreActor)
{
	bool bCanBeSeen = false;

	const float IntensityHiddenLowerBound = GetAISightIntensityHiddenLowerBound();
	const float IntensitySightedLowerBound = GetAISightIntensitySightedLowerBound();

	const bool bUseIntensitySighted = IntensityHiddenLowerBound != IntensitySightedLowerBound
		&& HasBeenSightedBy(IgnoreActor);
	const float IntensityLowerBound = bUseIntensitySighted
		? IntensitySightedLowerBound
		: IntensityHiddenLowerBound;

	const float IntensityUpperBound = GetAISightIntensityUpperBound();

	float MaxIntensity = IntensityLowerBound;

	for (int SocketI = 0, SocketNum = GetSocketsNum(); SocketI < SocketNum; ++SocketI)
	{
		float Intensity = GetLightIntensityAtSocketIndex(SocketI);
		if (Intensity > MaxIntensity)
		{
			FVector Point = GetLocationAtSocketIndex(SocketI);
			if (CheckLineOfSight(IgnoreActor, ObserverLocation, Point))
			{
				bCanBeSeen = true;
				MaxIntensity = Intensity;

				OutSeenLocation = Point;
				OutSightStrength = (Intensity - IntensityLowerBound) / (IntensityUpperBound - IntensityLowerBound);
			}
		}
	}

	return bCanBeSeen;
}

bool UShadowStealthComponent::CanBeSeenFrom_Engine(const FVector& ObserverLocation, FVector& OutSeenLocation, int32& NumberOfLoSChecksPerformed, float& OutSightStrength, const AActor* IgnoreActor)
{
	UWorld* World = GetWorld();
	AActor* Owner = GetOwner();

	const FVector OwnerLocation = Owner->GetActorLocation();

	FHitResult HitResult;
	const bool bHit = World->LineTraceSingleByChannel(HitResult, ObserverLocation, OwnerLocation, DefaultSightCollisionChannel,
		FCollisionQueryParams(SCENE_QUERY_STAT(AILineOfSight), true, IgnoreActor));

	bool bCanBeSeen = !bHit || (HitResult.Actor.IsValid() && HitResult.Actor->IsOwnedBy(Owner));
	OutSightStrength = 1.0f;
	OutSeenLocation = OwnerLocation;

	++NumberOfLoSChecksPerformed;

	return bCanBeSeen;
}
