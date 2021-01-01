// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "ShadowStealth.h"
#include "Engine/Light.h"
#include "ShadowRectLight.generated.h"

class UShadowRectLightComponent;

UCLASS()
class SHADOWSTEALTH_API AShadowRectLight : public ALight
{
	GENERATED_BODY()
		
    UPROPERTY(Category=ShadowStealth, VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
    UShadowRectLightComponent* ShadowLight;

public:
	AShadowRectLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

#if WITH_EDITOR
	//~ Begin AActor Interface.
	virtual void EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown) override;
	//~ End AActor Interface.
#endif

	//~ Begin UObject Interface.
	virtual void PostLoad() override;
	//~ End UObject Interface.

public:
	static FName ShadowLightComponentName;
	FORCEINLINE UShadowRectLightComponent* GetShadowLight() const { return ShadowLight; }
};
