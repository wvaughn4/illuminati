// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "Actors/ShadowSpotLight.h"
#include "Components/ShadowSpotLightComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/LightComponent.h"
#include "Components/SpotLightComponent.h"

FName AShadowSpotLight::ShadowLightComponentName(TEXT("ShadowLightComp"));

AShadowSpotLight::AShadowSpotLight(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer.SetDefaultSubobjectClass<USpotLightComponent>(TEXT("LightComponent0")))
{
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		FName ID_Lighting;
		FText NAME_Lighting;
		FConstructorStatics()
			: ID_Lighting(TEXT("Lighting"))
			, NAME_Lighting(NSLOCTEXT( "SpriteCategory", "Lighting", "Lighting" ))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	USpotLightComponent* SpotLightComponent = CastChecked<USpotLightComponent>(GetLightComponent());
	SpotLightComponent->Mobility = EComponentMobility::Stationary;
#if ENGINE_VERSION_MINOR >= 24
	SpotLightComponent->SetRelativeRotation(FRotator(-90, 0, 0));
#else
	SpotLightComponent->RelativeRotation = FRotator(-90, 0, 0);
#endif

	RootComponent = SpotLightComponent;

    ShadowLight = CreateOptionalDefaultSubobject<UShadowSpotLightComponent>(ShadowLightComponentName);
    if (ShadowLight)
    {
        ShadowLight->SetupAttachment(RootComponent);
    }

#if WITH_EDITORONLY_DATA
	ArrowComponent = CreateEditorOnlyDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent0"));
	if (ArrowComponent)
	{
		ArrowComponent->ArrowColor = GetLightColor().ToFColor(true);
		ArrowComponent->bTreatAsASprite = true;
		ArrowComponent->SpriteInfo.Category = ConstructorStatics.ID_Lighting;
		ArrowComponent->SpriteInfo.DisplayName = ConstructorStatics.NAME_Lighting;
		ArrowComponent->SetupAttachment(SpotLightComponent);
		ArrowComponent->bLightAttachment = true;
		ArrowComponent->bIsScreenSizeScaled = true;
	}
#endif // WITH_EDITORONLY_DATA
}

void AShadowSpotLight::PostLoad()
{
	Super::PostLoad();

	if (GetLightComponent()->Mobility == EComponentMobility::Static)
	{
		GetLightComponent()->LightFunctionMaterial = NULL;
	}

#if WITH_EDITORONLY_DATA
	if(ArrowComponent)
	{
		ArrowComponent->ArrowColor = GetLightColor().ToFColor(true);
	}
#endif
}

#if WITH_EDITOR
void AShadowSpotLight::EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	USpotLightComponent* SpotLightComponent = CastChecked<USpotLightComponent>(GetLightComponent());
	const FVector ModifiedScale = DeltaScale * ( AActor::bUsePercentageBasedScaling ? 10000.0f : 100.0f );

	if ( bCtrlDown )
	{
		FMath::ApplyScaleToFloat( SpotLightComponent->OuterConeAngle, ModifiedScale, 0.01f );
		SpotLightComponent->OuterConeAngle = FMath::Min( 89.0f, SpotLightComponent->OuterConeAngle );
		SpotLightComponent->InnerConeAngle = FMath::Min( SpotLightComponent->OuterConeAngle, SpotLightComponent->InnerConeAngle );
	}
	else if ( bAltDown )
	{
		FMath::ApplyScaleToFloat( SpotLightComponent->InnerConeAngle, ModifiedScale, 0.01f );
		SpotLightComponent->InnerConeAngle = FMath::Min( 89.0f, SpotLightComponent->InnerConeAngle );
		SpotLightComponent->OuterConeAngle = FMath::Max( SpotLightComponent->OuterConeAngle, SpotLightComponent->InnerConeAngle );
	}
	else
	{
		FMath::ApplyScaleToFloat( SpotLightComponent->AttenuationRadius, ModifiedScale );
	}

	PostEditChange();
}

void AShadowSpotLight::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if(ArrowComponent)
	{
		ArrowComponent->ArrowColor = GetLightColor().ToFColor(true);
	}
}
#endif
