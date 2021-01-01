// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "ShaderParameterUtils.h"
#include "GlobalShader.h"

class SHADOWSTEALTHSHADERS_API IShadowStealthShaders : public IModuleInterface
{
public:
	virtual void GetLightIntensitiesFromVolumetricLightmap(FRHICommandListImmediate& RHICmdList, const class FSceneView& View, int PointsCount, FRHIUniformBuffer* UniformBufferRHI, FRHIShaderResourceView* PointsBufferSRV, FRHIUnorderedAccessView* IntensitiesBufferUAV) = 0;
};

/**
 * Uniform buffer parameters.
 */
#if ENGINE_VERSION_MINOR >= 22
	BEGIN_GLOBAL_SHADER_PARAMETER_STRUCT(FShadowStealthVolumetricLightmapParameters, SHADOWSTEALTHSHADERS_API)
		SHADER_PARAMETER(uint32, PointsCount)
	END_GLOBAL_SHADER_PARAMETER_STRUCT()
#else
	BEGIN_UNIFORM_BUFFER_STRUCT(FShadowStealthVolumetricLightmapParameters, SHADOWSTEALTHSHADERS_API)
		UNIFORM_MEMBER(uint32, PointsCount)
	END_UNIFORM_BUFFER_STRUCT(FShadowStealthVolumetricLightmapParameters)
#endif

typedef TUniformBufferRef<FShadowStealthVolumetricLightmapParameters> FShadowStealthVolumetricLightmapUniformBufferRef;
