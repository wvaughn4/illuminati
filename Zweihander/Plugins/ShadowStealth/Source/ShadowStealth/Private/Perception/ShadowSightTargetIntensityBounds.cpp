// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "Perception/ShadowSightTargetIntensityBounds.h"
#include "Components/ShadowStealthComponent.h"

UShadowSightTargetIntensityBounds::UShadowSightTargetIntensityBounds()
{
	static const FName NotifyHiddenLowerBoundName = TEXT("HiddenLowerBound");
	static const FName NotifySightedLowerBoundName = TEXT("SightedLowerBound");
	static const FName NotifyUpperBoundName = TEXT("UpperBound");

	IntensityHiddenLowerBound.IntensityBound = 1.0f;
	IntensityHiddenLowerBound.NotifyName = NotifyHiddenLowerBoundName;

	IntensitySightedLowerBound.IntensityBound = 0.5f;
	IntensitySightedLowerBound.NotifyName = NotifySightedLowerBoundName;

	IntensityUpperBound.IntensityBound = 2.0f;
	IntensityUpperBound.NotifyName = NotifyUpperBoundName;
}

bool UShadowSightTargetIntensityBounds::CanBeSeenFrom_Implementation(UShadowStealthComponent* ShadowStealth, const class AActor* Observer, const FVector& ObserverLocation, bool bSeenLastTime, FVector& OutSeenLocation, float& OutSightStrength)
{
	bool bCanBeSeen = false;

	const float LowerBound = bSeenLastTime
		? IntensitySightedLowerBound.IntensityBound
		: IntensityHiddenLowerBound.IntensityBound;
	const float UpperBound = IntensityUpperBound.IntensityBound;

	float MaxIntensity = LowerBound;

	for (int SocketI = 0, SocketNum = ShadowStealth->GetSocketsNum(); SocketI < SocketNum; ++SocketI)
	{
		float Intensity = ShadowStealth->GetLightIntensityAtSocketIndex(SocketI);
		if (Intensity > MaxIntensity)
		{
			FVector Point = ShadowStealth->GetLocationAtSocketIndex(SocketI);
			if (ShadowStealth->CheckLineOfSight(Observer, ObserverLocation, Point))
			{
				bCanBeSeen = true;
				MaxIntensity = Intensity;

				OutSeenLocation = Point;
				OutSightStrength = (Intensity - LowerBound) / (UpperBound - LowerBound);
			}
		}
	}
	return bCanBeSeen;
}

void UShadowSightTargetIntensityBounds::GetIntensityNotifiers(UShadowStealthComponent* Owner, FShadowIntensityNotifier::TLocalArray& Notifiers)
{
	AppendNotifier(Notifiers, IntensityHiddenLowerBound);
	AppendNotifier(Notifiers, IntensitySightedLowerBound);
	AppendNotifier(Notifiers, IntensityUpperBound);
}

void UShadowSightTargetIntensityBounds::AppendNotifier(FShadowIntensityNotifier::TLocalArray& Notifiers, const FShadowIntensityBound& Bound)
{
	if (Bound.bNotifyOnExceed || Bound.bNotifyOnFallBelow)
	{
		FShadowIntensityNotifier& Notify = Notifiers.Emplace_GetRef();
		Notify.Name = Bound.NotifyName;
		Notify.Intensity = Bound.IntensityBound;
		Notify.bExeeded = Bound.bNotifyOnExceed;
		Notify.bFellBelow = Bound.bNotifyOnFallBelow;
	}
}
