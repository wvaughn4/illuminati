// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "IShadowLight.h"
#include "ShadowRectLightComponent.generated.h"

class URectLightComponent;
class UShadowStealthSettings;

UCLASS(HideCategories = (Mobility, Physics, Navigation, Shape), meta = (BlueprintSpawnableComponent))
class SHADOWSTEALTH_API UShadowRectLightComponent : public USphereComponent, public IShadowLight
{
	GENERATED_BODY()

    URectLightComponent* RectLightComponent;
    const UShadowStealthSettings* Settings;
    
public:
    UPROPERTY(Category="ShadowStealth", EditAnywhere, BlueprintReadWrite)
    bool bEnabled;

public:
	UShadowRectLightComponent();

    virtual void OnAttachmentChanged() override;

    virtual FLinearColor GetLightIntensity(const FVector& Point, ECollisionChannel TraceChannel, bool Debug) const override;
};
