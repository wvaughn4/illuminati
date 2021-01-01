// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "ActorFactories/ActorFactoryShadowPointLight.h"
#include "Actors/ShadowPointLight.h"
#include "Components/PointLightComponent.h"

#define LOCTEXT_NAMESPACE "ShadowStealth"

UActorFactoryShadowPointLight::UActorFactoryShadowPointLight(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DisplayName = LOCTEXT("ShadowPointLightDisplayName", "Shadow Point Light");
	NewActorClass = AShadowPointLight::StaticClass();
	SpawnPositionOffset = FVector(50, 0, 0);
	bUseSurfaceOrientation = true;
}

void UActorFactoryShadowPointLight::PostSpawnActor(UObject* Asset, AActor* NewActor)
{
	// Make all spawned actors use the candela units.
	TArray<UPointLightComponent*> PointLightComponents;
	NewActor->GetComponents<UPointLightComponent>(PointLightComponents);
	for (UPointLightComponent* Component : PointLightComponents)
	{
		if (Component && Component->CreationMethod == EComponentCreationMethod::Native)
		{
			static const auto CVarDefaultLightUnits = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.DefaultFeature.LightUnits"));
			ELightUnits DefaultUnits = (ELightUnits)CVarDefaultLightUnits->GetValueOnAnyThread();

			Component->Intensity *= UPointLightComponent::GetUnitsConversionFactor(Component->IntensityUnits, DefaultUnits);
			Component->IntensityUnits = DefaultUnits;
		}
	}
}

#undef LOCTEXT_NAMESPACE
