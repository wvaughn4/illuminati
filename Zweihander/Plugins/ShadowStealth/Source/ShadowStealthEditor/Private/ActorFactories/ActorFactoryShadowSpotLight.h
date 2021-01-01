// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "ActorFactories/ActorFactory.h"
#include "ActorFactoryShadowSpotLight.generated.h"

UCLASS()
class UActorFactoryShadowSpotLight : public UActorFactory
{
	GENERATED_BODY()

public:
    UActorFactoryShadowSpotLight(const FObjectInitializer& ObjectInitializer);

protected:
	void PostSpawnActor(UObject* Asset, AActor* NewActor) override;
};
