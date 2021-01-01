// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "IShadowLight.h"
#include "ShadowPointLightComponent.generated.h"

class UPointLightComponent;
class UShadowStealthSettings;

UCLASS(HideCategories = (Mobility, Physics, Navigation, Shape), meta = (BlueprintSpawnableComponent))
class SHADOWSTEALTH_API UShadowPointLightComponent : public USphereComponent, public IShadowLight
{
	GENERATED_BODY()

    UPointLightComponent* PointLightComponent;
    const UShadowStealthSettings* Settings;
    
public:
    UPROPERTY(Category="ShadowStealth", EditAnywhere, BlueprintReadWrite)
    bool bEnabled;

public:
    UShadowPointLightComponent();

    virtual void OnAttachmentChanged() override;

    virtual FLinearColor GetLightIntensity(const FVector& Point, ECollisionChannel TraceChannel, bool Debug) const override;
};
