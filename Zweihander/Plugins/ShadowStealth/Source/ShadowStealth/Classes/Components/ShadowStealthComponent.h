// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ShadowStealthSceneViewExt.h"
#include "ShadowIntensityNotifier.h"
#include "Perception/ShadowSightTargetBase.h"
#include "Delegates/Delegate.h"
#include "Components/SceneComponent.h"
#include "GameFramework/WorldSettings.h"
#include "ParentSocket.h"
#include "ShadowStealthComponent.generated.h"

class UShadowStealthSettings;
class FShadowStealthSceneViewExt;

UENUM(BlueprintType)
enum class EShadowMethod : uint8
{
    Max,
    Min,
    Mean,
    Median
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SHADOWSTEALTH_API UShadowStealthComponent : public USceneComponent
{
    GENERATED_BODY()

    UPROPERTY()
    TArray<TWeakObjectPtr<UActorComponent>> OverlappingShadowLights;

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNotifyIntensityDelegate, FName, Name, float, Intensity);

    UPROPERTY(Category = "ShadowStealth", EditAnywhere)
    TArray<FParentSocket> TestSockets;

    UPROPERTY(Category = "ShadowStealth", EditAnywhere)
    bool TestSelfLocation;

    UPROPERTY(Category = "ShadowStealth", EditAnywhere, BlueprintReadWrite)
    EShadowMethod ShadowMethod;

	UPROPERTY(Category = "ShadowStealth", EditAnywhere, BlueprintReadWrite)
    bool AISightShadowSenseEnabled;

    UPROPERTY(Category = "ShadowStealth", EditAnywhere, AdvancedDisplay)
    float AISightIntensityHiddenLowerBoundOverride;

    UPROPERTY(Category = "ShadowStealth", EditAnywhere, AdvancedDisplay)
    float AISightIntensitySightedLowerBoundOverride;

    UPROPERTY(Category = "ShadowStealth", EditAnywhere, AdvancedDisplay)
    float AISightIntensityUpperBoundOverride;
	
	UPROPERTY(Category = "ShadowStealth", EditAnywhere)
	TArray<FShadowIntensityNotifier> NotifyOnIntensities;
	
    UPROPERTY(Category = "ShadowStealth", BlueprintAssignable)
    FNotifyIntensityDelegate OnNotifyExceedIntensity;
    
    UPROPERTY(Category = "ShadowStealth", BlueprintAssignable)
    FNotifyIntensityDelegate OnNotifyFallBelowIntensity;
 
	UPROPERTY(Category = "ShadowStealth", EditAnywhere)
	TSubclassOf<UShadowSightTargetBase> SightTargetClass;

private:
	UPROPERTY()
	UShadowSightTargetBase* SightTarget;

	int32* NumberOfLoSChecksPerformedPtr;

    FLinearColor DynamicLightIntensity;
    TArray<FLinearColor> DynamicLightIntensityAtSockets;

    FLinearColor PrecomputedLightIntensity;
    TArray<FLinearColor> PrecomputedLightIntensityAtSockets;

    float ComputeTime;
    float LastIntensity;
    
	bool bUseStaticLighting;
	EVolumeLightingMethod VolumeLightingMethod;

    const UShadowStealthSettings* Settings;
	ECollisionChannel DefaultSightCollisionChannel;

	friend class FShadowStealthSceneViewExt;
	FShadowStealthSceneViewExtRef SceneViewExt;

public:
	UShadowStealthComponent();

    USceneComponent* GetTestComponent() const;
	
    UFUNCTION(Category = "ShadowStealth", BlueprintPure)
    float GetLightIntensity();
    
    UFUNCTION(Category = "ShadowStealth", BlueprintPure)
    float GetLightIntensityAtSocket(FName SocketName);
    
    UFUNCTION(Category = "ShadowStealth", BlueprintPure)
    float GetLightIntensityAtSelf();

    UFUNCTION(Category = "ShadowStealth", BlueprintPure)
    FLinearColor GetLightIntensityRGB();
    
    UFUNCTION(Category = "ShadowStealth", BlueprintPure)
    FLinearColor GetLightIntensityRGBAtSocket(FName SocketName);
    
    UFUNCTION(Category = "ShadowStealth", BlueprintPure)
    FLinearColor GetLightIntensityRGBAtSelf();

    UFUNCTION(Category = "ShadowStealth", BlueprintPure)
    float GetAISightIntensityHiddenLowerBound() const;

    UFUNCTION(Category = "ShadowStealth", BlueprintPure)
    float GetAISightIntensitySightedLowerBound() const;

    UFUNCTION(Category = "ShadowStealth", BlueprintPure)
    float GetAISightIntensityUpperBound() const;

	UFUNCTION(Category = "ShadowStealth", BlueprintPure)
	int GetSocketsNum() const;

	UFUNCTION(Category = "ShadowStealth", BlueprintPure)
	FVector GetLocationAtSocketIndex(int SocketIndex) const;

	UFUNCTION(Category = "ShadowStealth", BlueprintPure)
	float GetLightIntensityAtSocketIndex(int SocketIndex);

	UFUNCTION(Category = "ShadowStealth", BlueprintPure)
	FLinearColor GetLightIntensityRGBAtSocketIndex(int SocketIndex);

	UFUNCTION(Category = "ShadowStealth", BlueprintPure)
	bool CheckLineOfSight(const AActor* Observer, const FVector& ObserverLocation, const FVector& SightTargetLocation) const;

    bool CanBeSeenFrom(const FVector& ObserverLocation, FVector& OutSeenLocation, int32& NumberOfLoSChecksPerformed, float& OutSightStrength, const AActor* IgnoreActor = nullptr);

protected:
	virtual void InitializeComponent() override;
	virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void Serialize(FArchive& Ar) override;

private:
    void InitGlobalShadowLights();
    void InitOverlappingShadowLights();

    void AddOverlappingShadowLight(UActorComponent* Component);
    void RemoveOverlappingShadowLight(UActorComponent* Component);

    UFUNCTION()
    void OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    UFUNCTION()
    void OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

    void ComputeLightIntensity();
    void ComputeDynamicLightIntensity();
    void ComputePrecomputedLightIntensity(UWorld* World);

    FLinearColor GetIntensityWithShadowMethod(const TArray<FLinearColor>& Intensities);

    bool ShouldNotifyOnIntensity();
    void UpdateNotifyOnIntensity();

    bool HasBeenSightedBy(const AActor* Observer) const;

	bool CanBeSeenFrom_SightTarget(const FVector& ObserverLocation, FVector& OutSeenLocation, float& OutSightStrength, const AActor* IgnoreActor);
	bool CanBeSeenFrom_Original(const FVector& ObserverLocation, FVector& OutSeenLocation, float& OutSightStrength, const AActor* IgnoreActor);
	bool CanBeSeenFrom_Engine(const FVector& ObserverLocation, FVector& OutSeenLocation, int32& NumberOfLoSChecksPerformed, float& OutSightStrength, const AActor* IgnoreActor);
//
// DEPRECATED BEGIN
//
private:
    UPROPERTY()
    TArray<float> NotifyOnExceedIntensities_DEPRECATED;
    
    UPROPERTY()
    TArray<float> NotifyOnFallBelowIntensities_DEPRECATED;
//
// DEPRECATED END
//
};
