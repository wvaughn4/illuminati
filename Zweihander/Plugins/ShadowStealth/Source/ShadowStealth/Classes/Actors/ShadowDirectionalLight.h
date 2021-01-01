// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "ShadowStealth.h"
#include "Engine/Light.h"
#include "ShadowDirectionalLight.generated.h"

class UShadowDirectionalLightComponent;
class UArrowComponent;

UCLASS()
class SHADOWSTEALTH_API AShadowDirectionalLight : public ALight
{
    GENERATED_BODY()

    UPROPERTY(Category=ShadowStealth, VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
    UShadowDirectionalLightComponent* ShadowLight;

#if WITH_EDITORONLY_DATA
	// Reference to editor visualization arrow
	UPROPERTY()
	UArrowComponent* ArrowComponent;
#endif

public:
    AShadowDirectionalLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// UObject Interface
	virtual void PostLoad() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

    static FName ShadowLightComponentName;    
    FORCEINLINE UShadowDirectionalLightComponent* GetShadowLight() const { return ShadowLight; }

#if WITH_EDITORONLY_DATA
	/** Returns ArrowComponent subobject **/
	FORCEINLINE UArrowComponent* GetArrowComponent() const { return ArrowComponent; }
#endif
};
