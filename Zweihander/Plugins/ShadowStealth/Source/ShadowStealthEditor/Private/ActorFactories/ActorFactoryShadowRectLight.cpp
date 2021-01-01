// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "ActorFactories/ActorFactoryShadowRectLight.h"
#include "Actors/ShadowRectLight.h"
#include "Components/RectLightComponent.h"

#define LOCTEXT_NAMESPACE "ShadowStealth"

UActorFactoryShadowRectLight::UActorFactoryShadowRectLight(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DisplayName = LOCTEXT("ShadowRectLightDisplayName", "Shadow Rect Light");
	NewActorClass = AShadowRectLight::StaticClass();
	SpawnPositionOffset = FVector(50, 0, 0);
	bUseSurfaceOrientation = true;
}

void UActorFactoryShadowRectLight::PostSpawnActor(UObject* Asset, AActor* NewActor)
{
	// Make all spawned actors use the candela units.
	TArray<URectLightComponent*> RectLightComponents;
	NewActor->GetComponents<URectLightComponent>(RectLightComponents);
	for (URectLightComponent* Component : RectLightComponents)
	{
		if (Component && Component->CreationMethod == EComponentCreationMethod::Native)
		{
			static const auto CVarDefaultLightUnits = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.DefaultFeature.LightUnits"));
			ELightUnits DefaultUnits = (ELightUnits)CVarDefaultLightUnits->GetValueOnAnyThread();

			Component->Intensity *= URectLightComponent::GetUnitsConversionFactor(Component->IntensityUnits, DefaultUnits);
			Component->IntensityUnits = DefaultUnits;
		}
	}
}

#undef LOCTEXT_NAMESPACE
