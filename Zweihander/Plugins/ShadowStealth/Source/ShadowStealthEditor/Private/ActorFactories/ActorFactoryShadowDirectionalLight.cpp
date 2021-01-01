// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "ActorFactories/ActorFactoryShadowDirectionalLight.h"
#include "Actors/ShadowDirectionalLight.h"

#define LOCTEXT_NAMESPACE "ShadowStealth"

UActorFactoryShadowDirectionalLight::UActorFactoryShadowDirectionalLight(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DisplayName = LOCTEXT("ShadowDirectionalLightDisplayName", "Shadow Directional Light");
	NewActorClass = AShadowDirectionalLight::StaticClass();
	SpawnPositionOffset = FVector(50, 0, 0);
	bUseSurfaceOrientation = true;
}

#undef LOCTEXT_NAMESPACE
