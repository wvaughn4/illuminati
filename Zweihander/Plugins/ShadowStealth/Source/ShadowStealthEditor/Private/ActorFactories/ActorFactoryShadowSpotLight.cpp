// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "ActorFactories/ActorFactoryShadowSpotLight.h"
#include "Actors/ShadowSpotLight.h"
#include "Components/SpotLightComponent.h"

#define LOCTEXT_NAMESPACE "ShadowStealth"

UActorFactoryShadowSpotLight::UActorFactoryShadowSpotLight(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    DisplayName = LOCTEXT("ShadowSpotLightDisplayName", "Shadow Spot Light");
    NewActorClass = AShadowSpotLight::StaticClass();
    SpawnPositionOffset = FVector(50, 0, 0);
    bUseSurfaceOrientation = true;
}

void UActorFactoryShadowSpotLight::PostSpawnActor(UObject* Asset, AActor* NewActor)
{
	// Make all spawned actors use the candela units.
	TArray<USpotLightComponent*> SpotLightComponents;
	NewActor->GetComponents<USpotLightComponent>(SpotLightComponents);
	for (USpotLightComponent* Component : SpotLightComponents)
	{
		if (Component && Component->CreationMethod == EComponentCreationMethod::Native)
		{
			static const auto CVarDefaultLightUnits = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.DefaultFeature.LightUnits"));
			ELightUnits DefaultUnits = (ELightUnits)CVarDefaultLightUnits->GetValueOnAnyThread();

			Component->Intensity *= USpotLightComponent::GetUnitsConversionFactor(Component->IntensityUnits, DefaultUnits, Component->GetCosHalfConeAngle());
			Component->IntensityUnits = DefaultUnits;
		}
	}
}

#undef LOCTEXT_NAMESPACE
