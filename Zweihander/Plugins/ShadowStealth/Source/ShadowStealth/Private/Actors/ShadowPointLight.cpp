// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "Actors/ShadowPointLight.h"
#include "Components/ShadowPointLightComponent.h"
#include "Components/PointLightComponent.h"

FName AShadowPointLight::ShadowLightComponentName(TEXT("ShadowLightComp"));

AShadowPointLight::AShadowPointLight(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer.SetDefaultSubobjectClass<UPointLightComponent>(TEXT("LightComponent0")))
{
	UPointLightComponent* PointLightComponent = CastChecked<UPointLightComponent>(GetLightComponent());
	PointLightComponent->Mobility = EComponentMobility::Stationary;

	RootComponent = PointLightComponent;

    ShadowLight = CreateOptionalDefaultSubobject<UShadowPointLightComponent>(ShadowLightComponentName);
    if (ShadowLight)
    {
        ShadowLight->SetupAttachment(PointLightComponent);
    }
}

void AShadowPointLight::PostLoad()
{
	Super::PostLoad();

	if (GetLightComponent()->Mobility == EComponentMobility::Static)
	{
		GetLightComponent()->LightFunctionMaterial = NULL;
	}
}

#if WITH_EDITOR
void AShadowPointLight::EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	UPointLightComponent* PointLightComponent = CastChecked<UPointLightComponent>(GetLightComponent());
	const FVector ModifiedScale = DeltaScale * ( AActor::bUsePercentageBasedScaling ? 10000.0f : 100.0f );

	FMath::ApplyScaleToFloat( PointLightComponent->AttenuationRadius, ModifiedScale, 1.0f );
	PostEditChange();
}
#endif
