// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "Perception/ShadowSightTargetIntensityBoundsWithDistanceMultiplier.h"
#include "Components/ShadowStealthComponent.h"

UShadowSightTargetIntensityBoundsWithDistanceMultiplier::UShadowSightTargetIntensityBoundsWithDistanceMultiplier()
{
	FRichCurve* DistanceMultCurve = DistanceMultiplier.GetRichCurve();
	DistanceMultCurve->AddKey(0.0f, 1.0f);
	DistanceMultCurve->AddKey(400.0f, 1.0f);
	DistanceMultCurve->AddKey(800.0f, 0.0f);
}

bool UShadowSightTargetIntensityBoundsWithDistanceMultiplier::CanBeSeenFrom_Implementation(class UShadowStealthComponent* ShadowStealth, const class AActor* Observer, const FVector& ObserverLocation, bool bSeenLastTime, FVector& OutSeenLocation, float& OutSightStrength)
{
	bool bCanBeSeen = false;

	const float LowerBound = bSeenLastTime
		? IntensitySightedLowerBound.IntensityBound
		: IntensityHiddenLowerBound.IntensityBound;
	const float UpperBound = IntensityUpperBound.IntensityBound;

	float MaxIntensity = LowerBound;

	const FRichCurve* DistanceMultCurve = DistanceMultiplier.GetRichCurveConst();

	for (int SocketI = 0, SocketNum = ShadowStealth->GetSocketsNum(); SocketI < SocketNum; ++SocketI)
	{
		float Intensity = ShadowStealth->GetLightIntensityAtSocketIndex(SocketI);

		FVector Point = ShadowStealth->GetLocationAtSocketIndex(SocketI);
		float Distance = FVector::Dist(Point, ObserverLocation);
		Intensity *= FMath::Max(DistanceMultCurve->Eval(Distance), 0.0f);

		if (Intensity > MaxIntensity)
		{
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
