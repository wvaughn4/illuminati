// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "ShadowStealthSceneViewExt.h"
#include "ShadowStealth.h"
#include "Components/ShadowStealthComponent.h"
#include "EngineUtils.h"
#include "PrecomputedVolumetricLightmap.h"
#include "SceneView.h"
#include "RHIGPUReadback.h"

DECLARE_CYCLE_STAT(TEXT("VolumetricLightmapAllocateReadback_RT"), STAT_VolumetricLightmapAllocateReadback_RT, STATGROUP_ShadowStealth);
DECLARE_CYCLE_STAT(TEXT("VolumetricLightmapReadback_RT"), STAT_VolumetricLightmapReadback_RT, STATGROUP_ShadowStealth);

FShadowStealthSceneViewExt::FShadowStealthSceneViewExt(const FAutoRegister& AutoRegister, UShadowStealthComponent* InShadowStealth)
	: FSceneViewExtensionBase(AutoRegister)
	, ShadowStealth(InShadowStealth)
	, bInitialized(false)
	, bFinalized(false)
	, IntensitiesReadback(nullptr)
{
	const int SocketsNum = ShadowStealth->GetSocketsNum();

	Points.SetNumZeroed(SocketsNum);
	Intensities.SetNumZeroed(SocketsNum);
}

void FShadowStealthSceneViewExt::Finalize()
{
	ShadowStealth = nullptr;
	
	// Make sure that the SceneViewExt is finalized on the render thread.
	FShadowStealthSceneViewExtRef SceneViewExt = StaticCastSharedRef<FShadowStealthSceneViewExt>(AsShared());
#if ENGINE_VERSION_MINOR >= 22
	ENQUEUE_RENDER_COMMAND(ShadowStealthCleanupSceneViewExt)
		([SceneViewExt](FRHICommandListImmediate& RHICmdList)
		{
			SceneViewExt->Finalize_RenderThread();
		});
#else
	ENQUEUE_UNIQUE_RENDER_COMMAND_ONEPARAMETER(FShadowStealthCleanupSceneViewExt,
		FShadowStealthSceneViewExtRef, RTSceneViewExt, SceneViewExt,
		{
			RTSceneViewExt->Finalize_RenderThread();
		});
#endif
}

void FShadowStealthSceneViewExt::FetchIntensities()
{
	for (int I = 0; I < Intensities.Num(); ++I)
	{
		ShadowStealth->PrecomputedLightIntensityAtSockets[I] = Intensities[I];
	}
}

void FShadowStealthSceneViewExt::Initialize_RenderThread()
{
	const int PointsCount = Points.Num();

	FShadowStealthVolumetricLightmapParameters Parameters;
	Parameters.PointsCount = PointsCount;
	UniformBufferRHI = FShadowStealthVolumetricLightmapUniformBufferRef::CreateUniformBufferImmediate(Parameters, UniformBuffer_MultiFrame);

	const uint32 PointsBufferSize = PointsCount * sizeof(FVector4);
	FRHIResourceCreateInfo PointsBufferCreateInfo;
	PointsBufferRHI = RHICreateVertexBuffer(PointsBufferSize, BUF_Dynamic | BUF_ShaderResource, PointsBufferCreateInfo);
	PointsBufferSRV = RHICreateShaderResourceView(PointsBufferRHI, sizeof(FVector4), PF_A32B32G32R32F);

	const uint32 IntensitiesBufferSize = PointsCount * sizeof(FLinearColor);
	FRHIResourceCreateInfo IntensitiesBufferCreateInfo;
#if ENGINE_VERSION_MINOR >= 25
	IntensitiesBufferRHI = RHICreateVertexBuffer(IntensitiesBufferSize, BUF_UnorderedAccess | BUF_SourceCopy, IntensitiesBufferCreateInfo);
#else
	IntensitiesBufferRHI = RHICreateVertexBuffer(IntensitiesBufferSize, BUF_UnorderedAccess, IntensitiesBufferCreateInfo);
#endif
	IntensitiesBufferUAV = RHICreateUnorderedAccessView(IntensitiesBufferRHI, PF_A32B32G32R32F);
}

void FShadowStealthSceneViewExt::Finalize_RenderThread()
{
	if (bInitialized && !bFinalized)
	{
		bFinalized = true;

		UniformBufferRHI.SafeRelease();

		PointsBufferRHI.SafeRelease();
		PointsBufferSRV.SafeRelease();

		IntensitiesBufferRHI.SafeRelease();
		IntensitiesBufferUAV.SafeRelease();

		if (IntensitiesReadback)
		{
			delete IntensitiesReadback;
			IntensitiesReadback = nullptr;
		}
	}
}

void FShadowStealthSceneViewExt::SetupViewFamily(FSceneViewFamily& InViewFamily)
{
	if (ShadowStealth)
	{
		USceneComponent* TestComponent = ShadowStealth->GetTestComponent();
		for (int SocketI = 0, SocketsNum = ShadowStealth->GetSocketsNum(); SocketI < SocketsNum; ++SocketI)
		{
			Points[SocketI] = SocketI < ShadowStealth->TestSockets.Num()
				? TestComponent->GetSocketLocation(ShadowStealth->TestSockets[SocketI].Name)
				: ShadowStealth->GetComponentLocation();
		}
	}
}

void FShadowStealthSceneViewExt::PostRenderViewFamily_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneViewFamily& InViewFamily)
{
	if (bFinalized)
	{
		return;
	}

	if (!bInitialized)
	{
		bInitialized = true;
		Initialize_RenderThread();
	}

	if (InViewFamily.Views.IsValidIndex(0))
	{
		const int PointsCount = Points.Num();

		const uint32 PointsBufferSize = PointsCount * sizeof(FVector4);
		void* PointsBufferData = RHICmdList.LockVertexBuffer(PointsBufferRHI, 0, PointsBufferSize, RLM_WriteOnly);
		FMemory::Memcpy(PointsBufferData, Points.GetData(), PointsBufferSize);
		RHICmdList.UnlockVertexBuffer(PointsBufferRHI);

		const FSceneView& MainView = *InViewFamily.Views[0];

		IShadowStealthShaders& ShadersModule = FModuleManager::GetModuleChecked<IShadowStealthShaders>(TEXT("ShadowStealthShaders"));
		ShadersModule.GetLightIntensitiesFromVolumetricLightmap(RHICmdList, MainView, PointsCount, UniformBufferRHI, PointsBufferSRV, IntensitiesBufferUAV);

		ReadbackIntensities_RenderThread(RHICmdList);
	}
}

void FShadowStealthSceneViewExt::ReadbackIntensities_RenderThread(FRHICommandList& RHICmdList)
{
#if ENGINE_VERSION_MINOR >= 22
	bool bSuccessfullyRead = false;

	if (IntensitiesReadback && IntensitiesReadback->IsReady())
	{
		SCOPE_CYCLE_COUNTER(STAT_VolumetricLightmapReadback_RT);

		const uint32 IntensitiesDataSize = Intensities.Num() * sizeof(FLinearColor);
		if (FLinearColor* IntensitiesData = static_cast<FLinearColor*>(IntensitiesReadback->Lock(IntensitiesDataSize)))
		{
			for (int I = 0; I < Intensities.Num(); ++I)
			{
				Intensities[I] = IntensitiesData[I];
			}
			bSuccessfullyRead = true;
		}
		IntensitiesReadback->Unlock();
	}

	if (bSuccessfullyRead || IntensitiesReadback == nullptr)
	{
		SCOPE_CYCLE_COUNTER(STAT_VolumetricLightmapAllocateReadback_RT);

		if (IntensitiesReadback == nullptr)
		{
#if ENGINE_VERSION_MINOR >= 23
			IntensitiesReadback = new FRHIGPUBufferReadback(TEXT("Shadow Stealth GPU Volumetric Lightmap Readback"));
#else
			IntensitiesReadback = new FRHIGPUMemoryReadback(TEXT("Shadow Stealth GPU Volumetric Lightmap Readback"));
#endif
		}
		IntensitiesReadback->EnqueueCopy(RHICmdList, IntensitiesBufferRHI);
	}
#else
	if (IntensitiesReadback && IntensitiesReadback->IsReady())
	{
		SCOPE_CYCLE_COUNTER(STAT_VolumetricLightmapReadback_RT);

		bool bSuccessfullyRead = false;

		const uint32 IntensitiesDataSize = Intensities.Num() * sizeof(FLinearColor);
		if (FLinearColor* IntensitiesData = static_cast<FLinearColor*>(IntensitiesReadback->RetrieveData(IntensitiesDataSize)))
		{
			for (int I = 0; I < Intensities.Num(); ++I)
			{
				Intensities[I] = IntensitiesData[I];
			}
			bSuccessfullyRead = true;
		}
		IntensitiesReadback->Finish();

		if (bSuccessfullyRead)
		{
			delete IntensitiesReadback;
			IntensitiesReadback = nullptr;
		}
	}

	if (IntensitiesReadback == nullptr)
	{
		SCOPE_CYCLE_COUNTER(STAT_VolumetricLightmapAllocateReadback_RT);

		IntensitiesReadback = new FRHIGPUMemoryReadback(IntensitiesBufferRHI, TEXT("Shadow Stealth GPU Volumetric Lightmap Readback"));
		IntensitiesReadback->Insert(RHICmdList);
	}
#endif
}

bool FShadowStealthSceneViewExt::IsActiveThisFrame(FViewport* InViewport) const
{
	if (ShadowStealth == nullptr || ShadowStealth->IsPendingKill())
	{
		return false;
	}
	return true;
}
