// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "ShadowStealthSettings.h"

UShadowStealthSettings::UShadowStealthSettings()
    : TraceChannel(ECC_Visibility)
    , bUseStaticLighting(true)
    , bUseInvisibleLights(false)
    , bUseHiddenInGameLights(false)
    , AISightIntensityHiddenLowerBound(1.0f)
    , AISightIntensitySightedLowerBound(0.5f)
    , AISightIntensityUpperBound(2.0f)
{}
