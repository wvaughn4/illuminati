// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "ActorFactories/ActorFactory.h"
#include "ActorFactoryShadowStealthCharacter.generated.h"

struct FAssetData;

UCLASS()
class UActorFactoryShadowStealthCharacter : public UActorFactory
{
	GENERATED_BODY()

public:
    UActorFactoryShadowStealthCharacter(const FObjectInitializer& ObjectInitializer);

	virtual bool CanCreateActorFrom( const FAssetData& AssetData, FText& OutErrorMsg ) override;
};
