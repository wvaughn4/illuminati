// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "ShadowSightTargetBase.h"
#include "ShadowSightTargetIntensityBounds.generated.h"

USTRUCT()
struct SHADOWSTEALTH_API FShadowIntensityBound
{
	GENERATED_BODY()

	UPROPERTY(Category = "ShadowStealth", EditAnywhere)
	float IntensityBound;

	UPROPERTY(Category = "ShadowStealth", EditAnywhere)
	bool bNotifyOnExceed;
	
	UPROPERTY(Category = "ShadowStealth", EditAnywhere)
	bool bNotifyOnFallBelow;

	UPROPERTY(Category = "ShadowStealth", EditAnywhere)
	FName NotifyName;
};

UCLASS()
class SHADOWSTEALTH_API UShadowSightTargetIntensityBounds : public UShadowSightTargetBase
{
	GENERATED_BODY()
	
public:
    UPROPERTY(Category = "ShadowStealth", EditAnywhere)
    FShadowIntensityBound IntensityHiddenLowerBound;

    UPROPERTY(Category = "ShadowStealth", EditAnywhere)
    FShadowIntensityBound IntensitySightedLowerBound;

    UPROPERTY(Category = "ShadowStealth", EditAnywhere)
    FShadowIntensityBound IntensityUpperBound;

public:
	UShadowSightTargetIntensityBounds();

	virtual bool CanBeSeenFrom_Implementation(class UShadowStealthComponent* ShadowStealth, const class AActor* Observer, const FVector& ObserverLocation, bool bSeenLastTime, FVector& OutSeenLocation, float& OutSightStrength) override;
	virtual void GetIntensityNotifiers(class UShadowStealthComponent* ShadowStealth, FShadowIntensityNotifier::TLocalArray& Notifiers) override;

private:
	void AppendNotifier(FShadowIntensityNotifier::TLocalArray& Notifiers, const FShadowIntensityBound& Bound);
};
