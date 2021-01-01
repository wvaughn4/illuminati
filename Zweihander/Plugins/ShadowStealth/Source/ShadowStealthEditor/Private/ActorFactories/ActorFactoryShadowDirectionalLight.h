// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "ActorFactories/ActorFactory.h"
#include "ActorFactoryShadowDirectionalLight.generated.h"

UCLASS()
class UActorFactoryShadowDirectionalLight : public UActorFactory
{
	GENERATED_BODY()

public:
    UActorFactoryShadowDirectionalLight(const FObjectInitializer& ObjectInitializer);
};
