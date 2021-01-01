// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IShadowLight.h"
#include "ShadowDirectionalLightComponent.generated.h"

class UDirectionalLightComponent;
class UShadowStealthSettings;

UCLASS(HideCategories = (Mobility), meta = (BlueprintSpawnableComponent))
class SHADOWSTEALTH_API UShadowDirectionalLightComponent : public USceneComponent, public IShadowLight
{
    GENERATED_BODY()

    UDirectionalLightComponent* DirectionalLightComponent;
    const UShadowStealthSettings* Settings;
    
public:
    UPROPERTY(Category="ShadowStealth", EditAnywhere, BlueprintReadWrite)
    bool bEnabled;

public:
    UShadowDirectionalLightComponent();

    virtual void OnAttachmentChanged() override;

    virtual FLinearColor GetLightIntensity(const FVector& Point, ECollisionChannel TraceChannel, bool Debug) const override;
    virtual bool IsGlobalLight() const override;
};