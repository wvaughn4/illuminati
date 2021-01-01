// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ShadowIntensityNotifier.h"
#include "ShadowSightTargetBase.generated.h"

UCLASS(Abstract, Blueprintable, Within=ShadowStealthComponent)
class SHADOWSTEALTH_API UShadowSightTargetBase : public UObject
{
	GENERATED_BODY()

protected:
	/** C++ implementation of CanBeSeenFrom method */
	virtual bool CanBeSeenFrom_Implementation(class UShadowStealthComponent* ShadowStealth, const class AActor* Observer, const FVector& ObserverLocation, bool bSeenLastTime, FVector& OutSeenLocation, float& OutSightStrength);

public:
	/** C++ impplementation of GetIntensityNotifiers method */
	virtual void GetIntensityNotifiers(class UShadowStealthComponent* ShadowStealth, FShadowIntensityNotifier::TLocalArray& Notifiers);

	/** Blueprint implementation of CanBeSeenFrom method */
	UFUNCTION(Category = "ShadowStealth", BlueprintNativeEvent)
	bool CanBeSeenFrom(class UShadowStealthComponent* ShadowStealth, const class AActor* Observer, const FVector& ObserverLocation, bool bSeenLastTime, FVector& OutSeenLocation, float& OutSightStrength);

protected:
	/** Blueprint implementation of GetIntensityNotifiers method */
	UFUNCTION(Category = "ShadowStealth", BlueprintNativeEvent)
	void GetIntensityNotifiers(class UShadowStealthComponent* ShadowStealth);
	
	/** Add intensity notifier from Blueprint implementation of GetIntensityNotifiers */
	UFUNCTION(Category = "ShadowStealth", BlueprintCallable)
	void AddIntensityNotifier(const FShadowIntensityNotifier& Notifier);

private:
	void GetIntensityNotifiers_Implementation(class UShadowStealthComponent* ShadowStealth);

	FShadowIntensityNotifier::TLocalArray* NotifiersPtr;
};
