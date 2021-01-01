// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "Engine/EngineTypes.h"
#include "UObject/Interface.h"
#include "IShadowLight.generated.h"

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UShadowLight : public UInterface
{
    GENERATED_BODY()
};

class IShadowLight
{
    GENERATED_BODY()

public:
	UFUNCTION()
	virtual FLinearColor GetLightIntensity(const FVector& Point, ECollisionChannel TraceChannel, bool Debug) const = 0;

    UFUNCTION()
    virtual bool IsGlobalLight() const { return false; }
};
