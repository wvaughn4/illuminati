// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "ActorFactories/ActorFactory.h"
#include "ActorFactoryShadowRectLight.generated.h"

UCLASS()
class UActorFactoryShadowRectLight : public UActorFactory
{
	GENERATED_BODY()

public:
    UActorFactoryShadowRectLight(const FObjectInitializer& ObjectInitializer);

protected:
	void PostSpawnActor(UObject* Asset, AActor* NewActor) override;
};
