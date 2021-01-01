// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "ShadowStealthShaders.h"
#include "Interfaces/IPluginManager.h"
#include "SceneView.h"

#if ENGINE_VERSION_MINOR >= 22
	IMPLEMENT_GLOBAL_SHADER_PARAMETER_STRUCT(FShadowStealthVolumetricLightmapParameters, "ShadowStealthVolumetricLightmap");
#else
	IMPLEMENT_UNIFORM_BUFFER_STRUCT(FShadowStealthVolumetricLightmapParameters, TEXT("ShadowStealthVolumetricLightmap"));
#endif

/**
 * Compute shader.
 */
class FShadowStealthVolumetricLightmapCS : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FShadowStealthVolumetricLightmapCS,Global);

public:
	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::SM5);
	}

	FShadowStealthVolumetricLightmapCS()
	{}

	explicit FShadowStealthVolumetricLightmapCS(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
		: FGlobalShader(Initializer)
	{
		InPoints.Bind(Initializer.ParameterMap, TEXT("InPoints"), SPF_Mandatory);
		OutIntensities.Bind(Initializer.ParameterMap, TEXT("OutIntensities"), SPF_Mandatory);
	}

#if ENGINE_VERSION_MINOR < 25
	virtual bool Serialize(FArchive& Ar) override
	{
		bool bShaderHasOutdatedParameters = FGlobalShader::Serialize(Ar);
		Ar << InPoints;
		Ar << OutIntensities;
		return bShaderHasOutdatedParameters;
	}
#endif

	void SetOutput(FRHICommandList& RHICmdList, FRHIUnorderedAccessView* OutIntensitiesUAV)
	{
#if ENGINE_VERSION_MINOR >= 25
		FRHIComputeShader* ComputeShaderRHI = RHICmdList.GetBoundComputeShader();
#else
		FRHIComputeShader* ComputeShaderRHI = GetComputeShader();
#endif
		if (OutIntensities.IsBound())
		{
			RHICmdList.SetUAVParameter(ComputeShaderRHI, OutIntensities.GetBaseIndex(), OutIntensitiesUAV);
		}
	}

	void SetParameters(FRHICommandList& RHICmdList, const FSceneView& View, FRHIUniformBuffer* UniformBuffer, FRHIShaderResourceView* InPointsSRV)
	{
#if ENGINE_VERSION_MINOR >= 25
		FRHIComputeShader* ComputeShaderRHI = RHICmdList.GetBoundComputeShader();
#else
		FRHIComputeShader* ComputeShaderRHI = GetComputeShader();
#endif
		FGlobalShader::SetParameters<FViewUniformShaderParameters>(RHICmdList, ComputeShaderRHI, View.ViewUniformBuffer);
		FGlobalShader::SetParameters<FShadowStealthVolumetricLightmapParameters>(RHICmdList, ComputeShaderRHI, UniformBuffer);

		if (InPoints.IsBound())
		{
			RHICmdList.SetShaderResourceViewParameter(ComputeShaderRHI, InPoints.GetBaseIndex(), InPointsSRV);
		}
	}

	void UnbindBuffers(FRHICommandList& RHICmdList)
	{
#if ENGINE_VERSION_MINOR >= 25
		FRHIComputeShader* ComputeShaderRHI = RHICmdList.GetBoundComputeShader();
#else
		FRHIComputeShader* ComputeShaderRHI = GetComputeShader();
#endif
		if (InPoints.IsBound())
		{
			RHICmdList.SetShaderResourceViewParameter(ComputeShaderRHI, InPoints.GetBaseIndex(), nullptr);
		}
		if (OutIntensities.IsBound())
		{
			RHICmdList.SetUAVParameter(ComputeShaderRHI, OutIntensities.GetBaseIndex(), nullptr);
		}
	}

private:
#if ENGINE_VERSION_MINOR >= 25
	LAYOUT_FIELD(FShaderResourceParameter, InPoints);
	LAYOUT_FIELD(FShaderResourceParameter, OutIntensities);
#else
	FShaderResourceParameter InPoints;
	FShaderResourceParameter OutIntensities;
#endif
};

IMPLEMENT_SHADER_TYPE(, FShadowStealthVolumetricLightmapCS, TEXT("/Plugin/ShadowStealth/Private/VolumetricLightmap.usf"), TEXT("Main"), SF_Compute)

/**
 * Module
 */
class FShadowStealthShaders : public IShadowStealthShaders
{
    virtual void StartupModule() override
    {
		TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("ShadowStealth"));
		FString PluginBaseDir = Plugin->GetBaseDir();
		FString PluginShaderDir = FPaths::Combine(PluginBaseDir, TEXT("Shaders"));
		AddShaderSourceDirectoryMapping("/Plugin/ShadowStealth", PluginShaderDir);
	}

    virtual void ShutdownModule() override
    {}

	virtual void GetLightIntensitiesFromVolumetricLightmap(FRHICommandListImmediate& RHICmdList, const class FSceneView& View, int PointsCount, FRHIUniformBuffer* UniformBufferRHI, FRHIShaderResourceView* PointsBufferSRV, FRHIUnorderedAccessView* IntensitiesBufferUAV) override
	{
		if (GMaxRHIFeatureLevel == ERHIFeatureLevel::SM5)
		{
			TShaderMapRef<FShadowStealthVolumetricLightmapCS> VolumetricLightmapCS(GetGlobalShaderMap(GMaxRHIFeatureLevel));
#if ENGINE_VERSION_MINOR >= 25
			RHICmdList.SetComputeShader(VolumetricLightmapCS.GetComputeShader());
#else
			RHICmdList.SetComputeShader(VolumetricLightmapCS->GetComputeShader());
#endif

			VolumetricLightmapCS->SetParameters(RHICmdList, View, UniformBufferRHI, PointsBufferSRV);
			VolumetricLightmapCS->SetOutput(RHICmdList, IntensitiesBufferUAV);
#if ENGINE_VERSION_MINOR >= 25
			DispatchComputeShader(RHICmdList, VolumetricLightmapCS, PointsCount, 1, 1);
#else
			DispatchComputeShader(RHICmdList, *VolumetricLightmapCS, PointsCount, 1, 1);
#endif
			VolumetricLightmapCS->UnbindBuffers(RHICmdList);
		}
	}
};

IMPLEMENT_MODULE(FShadowStealthShaders, ShadowStealthShaders);
