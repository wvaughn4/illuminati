// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "IShadowLight.h"
#include "ShadowSpotLightComponent.generated.h"

class USpotLightComponent;
class UShadowStealthSettings;

UCLASS(HideCategories = (Mobility, Physics, Navigation, Shape), meta = (BlueprintSpawnableComponent))
class SHADOWSTEALTH_API UShadowSpotLightComponent : public UCapsuleComponent, public IShadowLight
{
    GENERATED_BODY()

    USpotLightComponent* SpotLightComponent;
    const UShadowStealthSettings* Settings;
    
public:
    UPROPERTY(Category="ShadowStealth", EditAnywhere, BlueprintReadWrite)
    bool bEnabled;

public:
    UShadowSpotLightComponent();

    virtual void OnAttachmentChanged() override;

    virtual FLinearColor GetLightIntensity(const FVector& Point, ECollisionChannel TraceChannel, bool Debug) const override;
};