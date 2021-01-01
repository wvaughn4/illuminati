// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "Perception/ShadowSightTargetBase.h"
#include "Components/ShadowStealthComponent.h"
#include "ShadowStealth.h"

bool UShadowSightTargetBase::CanBeSeenFrom_Implementation(UShadowStealthComponent* ShadowStealth, const class AActor* Observer, const FVector& ObserverLocation, bool bSightedByObserver, FVector& OutSeenLocation, float& OutSightStrength)
{
	return false;
}

void UShadowSightTargetBase::GetIntensityNotifiers(UShadowStealthComponent* ShadowStealth, FShadowIntensityNotifier::TLocalArray& Notifiers)
{
	NotifiersPtr = &Notifiers;
	GetIntensityNotifiers(ShadowStealth);
	NotifiersPtr = nullptr;
}

void UShadowSightTargetBase::AddIntensityNotifier(const FShadowIntensityNotifier& Notifier)
{
	if (NotifiersPtr)
	{
		NotifiersPtr->Add(Notifier);
	}
	else
	{
		UE_LOG(LogShadowStealth, Error, TEXT("Calling AddIntensityNotifier outside of GetIntensityNotifiers BP function!!!"));
	}
}

void UShadowSightTargetBase::GetIntensityNotifiers_Implementation(UShadowStealthComponent* ShadowStealth)
{
}
