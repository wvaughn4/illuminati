// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "Actors/ShadowRectLight.h"
#include "Components/ShadowRectLightComponent.h"
#include "Components/RectLightComponent.h"

FName AShadowRectLight::ShadowLightComponentName(TEXT("ShadowLightComp"));

AShadowRectLight::AShadowRectLight(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<URectLightComponent>(TEXT("LightComponent0")))
{
	URectLightComponent* RectLightComponent = CastChecked<URectLightComponent>(GetLightComponent());
	RectLightComponent->Mobility = EComponentMobility::Stationary;

	RootComponent = RectLightComponent;

	ShadowLight = CreateOptionalDefaultSubobject<UShadowRectLightComponent>(ShadowLightComponentName);
	if (ShadowLight)
	{
		ShadowLight->SetupAttachment(RectLightComponent);
	}
}

void AShadowRectLight::PostLoad()
{
	Super::PostLoad();

	if (GetLightComponent()->Mobility == EComponentMobility::Static)
	{
		GetLightComponent()->LightFunctionMaterial = NULL;
	}
}

#if WITH_EDITOR
void AShadowRectLight::EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	URectLightComponent* RectLightComponent = CastChecked<URectLightComponent>(GetLightComponent());
	const FVector ModifiedScale = DeltaScale * ( AActor::bUsePercentageBasedScaling ? 10000.0f : 100.0f );

	FMath::ApplyScaleToFloat( RectLightComponent->AttenuationRadius, ModifiedScale, 1.0f );
	PostEditChange();
}
#endif
