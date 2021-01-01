// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ShadowStealthSettings.h"

class ULocalLightComponent;
class UPointLightComponent;
class USpotLightComponent;
class URectLightComponent;

struct FShadowLightLibrary
{
    static float GetPointLightAttenuation(UPointLightComponent* Light, const FVector& Point);
    static float GetSpotLightAttenuation(USpotLightComponent* Light, const FVector& Point);
	static float GetRectLightAttenuation(URectLightComponent* Light, const FVector& Point);
    static float GetCapsuleIrradiance(const FVector& ToLight, float CapsuleLength, const FVector& CapsuleTangent);

    static bool LightRayTrace(UWorld* World, const FVector& Start, const FVector& End, ECollisionChannel TraceChannel, bool Debug);

    static bool IsLightValid(USceneComponent* LightComponent, const UShadowStealthSettings* Settings)
    {
        bool bValidLight = LightComponent != nullptr;
        bValidLight = bValidLight && LightComponent->Mobility != EComponentMobility::Static;
#if ENGINE_VERSION_MINOR >= 24
        bValidLight = bValidLight && (Settings->bUseInvisibleLights || LightComponent->IsVisible());
#else
		bValidLight = bValidLight && (Settings->bUseInvisibleLights || LightComponent->bVisible);
#endif
        bValidLight = bValidLight && (Settings->bUseHiddenInGameLights || !LightComponent->bHiddenInGame);
        return bValidLight;
    }
};
