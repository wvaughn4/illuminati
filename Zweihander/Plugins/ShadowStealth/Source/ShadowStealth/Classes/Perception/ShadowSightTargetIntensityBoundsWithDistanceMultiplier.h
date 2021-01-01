// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "Curves/CurveFloat.h"
#include "ShadowSightTargetIntensityBounds.h"
#include "ShadowSightTargetIntensityBoundsWithDistanceMultiplier.generated.h"

UCLASS()
class SHADOWSTEALTH_API UShadowSightTargetIntensityBoundsWithDistanceMultiplier : public UShadowSightTargetIntensityBounds
{
	GENERATED_BODY()

public:
	UPROPERTY(Category = "ShadowStealth", EditAnywhere)
	FRuntimeFloatCurve DistanceMultiplier;

public:
	UShadowSightTargetIntensityBoundsWithDistanceMultiplier();
	
	virtual bool CanBeSeenFrom_Implementation(class UShadowStealthComponent* ShadowStealth, const class AActor* Observer, const FVector& ObserverLocation, bool bSeenLastTime, FVector& OutSeenLocation, float& OutSightStrength) override;
};