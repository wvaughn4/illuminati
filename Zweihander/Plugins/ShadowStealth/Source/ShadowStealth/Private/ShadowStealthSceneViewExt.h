// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "SceneViewExtension.h"
#include "ShadowStealthShaders.h"

class FShadowStealthSceneViewExt : public FSceneViewExtensionBase
{
public:
	FShadowStealthSceneViewExt(const FAutoRegister& AutoRegister, class UShadowStealthComponent* InShadowStealth);

	void Finalize();
	void FetchIntensities();

	virtual void SetupViewFamily(FSceneViewFamily& InViewFamily) override;
	virtual void PostRenderViewFamily_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneViewFamily& InViewFamily) override;
	virtual bool IsActiveThisFrame(FViewport* InViewport) const override;

	virtual void SetupView(FSceneViewFamily& InViewFamily, FSceneView& InView) override {}
	virtual void BeginRenderViewFamily(FSceneViewFamily& InViewFamily) override {}
	virtual void PreRenderViewFamily_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneViewFamily& InViewFamily) override {}
	virtual void PreRenderView_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneView& InView) override {}

private:
	void Initialize_RenderThread();
	void Finalize_RenderThread();
	void ReadbackIntensities_RenderThread(FRHICommandList& RHICmdList);

private:
	class UShadowStealthComponent* ShadowStealth;

	TArray<FVector4> Points;
	TArray<FLinearColor> Intensities;

	bool bInitialized;
	bool bFinalized;

	FShadowStealthVolumetricLightmapUniformBufferRef UniformBufferRHI;

	FVertexBufferRHIRef PointsBufferRHI;
	FShaderResourceViewRHIRef PointsBufferSRV;

	FVertexBufferRHIRef IntensitiesBufferRHI;
	FUnorderedAccessViewRHIRef IntensitiesBufferUAV;

	class FRHIGPUMemoryReadback* IntensitiesReadback;
};

typedef TSharedPtr<FShadowStealthSceneViewExt, ESPMode::ThreadSafe> FShadowStealthSceneViewExtRef;
