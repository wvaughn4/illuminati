// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "ShadowStealth.h"
#include "Engine/Light.h"
#include "ShadowSpotLight.generated.h"

class UShadowSpotLightComponent;
class UArrowComponent;

UCLASS()
class SHADOWSTEALTH_API AShadowSpotLight : public ALight
{
    GENERATED_BODY()
    
    UPROPERTY(Category=ShadowStealth, VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
    UShadowSpotLightComponent* ShadowLight;
    
#if WITH_EDITORONLY_DATA
	// Reference to editor arrow component visualization 
	UPROPERTY()
	class UArrowComponent* ArrowComponent;
#endif

public:
    AShadowSpotLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
    
#if WITH_EDITOR
	//~ Begin AActor Interface.
	virtual void EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown) override;
	//~ End AActor Interface.
#endif

	//~ Begin UObject Interface
	virtual void PostLoad() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	//~ End UObject Interface

    static FName ShadowLightComponentName;
    FORCEINLINE UShadowSpotLightComponent* GetShadowLight() const { return ShadowLight; }
    
#if WITH_EDITORONLY_DATA
	/** Returns ArrowComponent subobject **/
	FORCEINLINE UArrowComponent* GetArrowComponent() const { return ArrowComponent; }
#endif
};
