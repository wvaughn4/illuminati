// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ShadowStealthSettings.generated.h"

UCLASS(config=Engine, defaultconfig)
class UShadowStealthSettings : public UObject
{
    GENERATED_BODY()

public:
    UShadowStealthSettings();

    UPROPERTY(Category=Settings, config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(Category=Settings, config, EditAnywhere)
    bool bUseStaticLighting;

    UPROPERTY(Category=Settings, config, EditAnywhere)
    bool bUseInvisibleLights;
    
    UPROPERTY(Category=Settings, config, EditAnywhere)
    bool bUseHiddenInGameLights;
    
    UPROPERTY(Category=AISight, config, EditAnywhere)
    float AISightIntensityHiddenLowerBound;
    
    UPROPERTY(Category=AISight, config, EditAnywhere)
    float AISightIntensitySightedLowerBound;

    UPROPERTY(Category=AISight, config, EditAnywhere)
    float AISightIntensityUpperBound;
};
