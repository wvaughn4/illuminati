// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "Actors/ShadowDirectionalLight.h"
#include "Components/ShadowDirectionalLightComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/DirectionalLightComponent.h"

FName AShadowDirectionalLight::ShadowLightComponentName(TEXT("ShadowLightComp"));

AShadowDirectionalLight::AShadowDirectionalLight(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer.SetDefaultSubobjectClass<UDirectionalLightComponent>(TEXT("LightComponent0")))
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

	UDirectionalLightComponent* DirectionalLightComponent = CastChecked<UDirectionalLightComponent>(GetLightComponent());
	DirectionalLightComponent->Mobility = EComponentMobility::Stationary;
#if ENGINE_VERSION_MINOR >= 24
	DirectionalLightComponent->SetRelativeRotation(FRotator(-46.0f, 0.0f, 0.0f));
#else
	DirectionalLightComponent->RelativeRotation = FRotator(-46.0f, 0.0f, 0.0f);
#endif
	// Make directional light icons big since they tend to be important
	// This is the root component so its scale affects all other components
	DirectionalLightComponent->SetRelativeScale3D(FVector(2.5f, 2.5f, 2.5f));

	RootComponent = DirectionalLightComponent;
    
    ShadowLight = CreateOptionalDefaultSubobject<UShadowDirectionalLightComponent>(ShadowLightComponentName);
    if (ShadowLight)
    {
        ShadowLight->SetupAttachment(DirectionalLightComponent);
    }

#if WITH_EDITORONLY_DATA
	ArrowComponent = CreateEditorOnlyDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent0"));
	if (ArrowComponent)
	{
		ArrowComponent->ArrowColor = FColor(150, 200, 255);

		ArrowComponent->bTreatAsASprite = true;
		ArrowComponent->SpriteInfo.Category = ConstructorStatics.ID_Lighting;
		ArrowComponent->SpriteInfo.DisplayName = ConstructorStatics.NAME_Lighting;
		ArrowComponent->SetupAttachment(DirectionalLightComponent);
		ArrowComponent->bLightAttachment = true;
		ArrowComponent->bIsScreenSizeScaled = true;
	}
#endif // WITH_EDITORONLY_DATA
}

void AShadowDirectionalLight::PostLoad()
{
	Super::PostLoad();

	if (GetLightComponent()->Mobility == EComponentMobility::Static)
	{
		GetLightComponent()->LightFunctionMaterial = NULL;
	}
#if WITH_EDITORONLY_DATA
	if(ArrowComponent != nullptr)
	{
		ArrowComponent->ArrowColor = GetLightColor().ToFColor(true);
	}
#endif
}

#if WITH_EDITOR
void AShadowDirectionalLight::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if(ArrowComponent != nullptr)
	{
		ArrowComponent->ArrowColor = GetLightColor().ToFColor(true);
	}
}
#endif // WITH_EDITOR
