// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "ActorFactories/ActorFactory.h"
#include "ActorFactoryShadowPointLight.generated.h"

UCLASS()
class UActorFactoryShadowPointLight : public UActorFactory
{
	GENERATED_BODY()

public:
    UActorFactoryShadowPointLight(const FObjectInitializer& ObjectInitializer);

protected:
	void PostSpawnActor(UObject* Asset, AActor* NewActor) override;
};
