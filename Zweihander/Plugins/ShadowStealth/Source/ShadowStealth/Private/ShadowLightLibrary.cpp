// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "ShadowLightLibrary.h"
#include "CollisionQueryParams.h"
#include "Components/PointLightComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/RectLightComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "PropertyNames.h"

using namespace PropertyAccessHelpers;

float FShadowLightLibrary::GetPointLightAttenuation(UPointLightComponent* Light, const FVector& Point)
{
    float Attenuation = 0.0f;
    
    const FVector ToLight = Light->GetComponentLocation() - Point;
    const float AttenuationRadius = GetPropertyValue<float, PNAME(AttenuationRadius)>(Light);

    if (GetPropertyValue<bool, PNAME(bUseInverseSquaredFalloff)>(Light))
    {
        // Inverse squared falloff
        Attenuation = FMath::Square(FMath::Clamp(1.0f - FMath::Square(ToLight.SizeSquared() / FMath::Square(AttenuationRadius)), 0.0f, 1.0f));

        // Capsule irradiance
        const float SourceLength = GetPropertyValue<float, PNAME(SourceLength)>(Light);
        Attenuation *= GetCapsuleIrradiance(ToLight, SourceLength, Light->GetUpVector());
    }
    else
    {
        // Expotentional falloff
        const float FalloffExp = GetPropertyValue<float, PNAME(LightFalloffExponent)>(Light);
        Attenuation = FMath::Pow(1.0f - FMath::Clamp((ToLight / AttenuationRadius).SizeSquared(), 0.0f, 1.0f), FalloffExp);
    }

    return Attenuation;
}

float FShadowLightLibrary::GetSpotLightAttenuation(USpotLightComponent* Light, const FVector& Point)
{
    float Attenuation = GetPointLightAttenuation(Light, Point);

    const FVector LVector = (Light->GetComponentLocation() - Point).GetSafeNormal();
    const FVector LightDirection = Light->GetForwardVector();
    
    const float InnerConeAngle = GetPropertyValue<float, PNAME(InnerConeAngle)>(Light);
    const float OuterConeAngle = GetPropertyValue<float, PNAME(OuterConeAngle)>(Light);
	const float ClampedInnerConeAngle = FMath::Clamp(InnerConeAngle, 0.0f, 89.0f) * PI / 180.0f;
	const float ClampedOuterConeAngle = FMath::Clamp(OuterConeAngle * PI / 180.0f, ClampedInnerConeAngle + 0.001f, 89.0f * PI / 180.0f + 0.001f);
	const float CosOuterCone = FMath::Cos(ClampedOuterConeAngle);
	const float CosInnerCone = FMath::Cos(ClampedInnerConeAngle);
	const float CosConeDifference = CosInnerCone - CosOuterCone;
    Attenuation *= FMath::Square(FMath::Clamp((FVector::DotProduct(LVector, -LightDirection) - CosOuterCone) / CosConeDifference, 0.0f, 1.0f));

    return Attenuation;
}

float FShadowLightLibrary::GetRectLightAttenuation(URectLightComponent* Light, const FVector& Point)
{
	float Attenuation = 0.0f;

	const FVector LVector = (Light->GetComponentLocation() - Point).GetSafeNormal();
	const FVector LightDirection = Light->GetForwardVector();

	if (FVector::DotProduct(LVector, -LightDirection) >= 0)
	{
		const FVector ToLight = Light->GetComponentLocation() - Point;
		const float AttenuationRadius = GetPropertyValue<float, PNAME(AttenuationRadius)>(Light);

		// Inverse squared falloff
		Attenuation = FMath::Square(FMath::Clamp(1.0f - FMath::Square(ToLight.SizeSquared() / FMath::Square(AttenuationRadius)), 0.0f, 1.0f));

		// Capsule irradiance
		Attenuation *= GetCapsuleIrradiance(ToLight, 0.0f, Light->GetUpVector());
	}

	return Attenuation;
}

float FShadowLightLibrary::GetCapsuleIrradiance(const FVector& ToLight, float CapsuleLength, const FVector& CapsuleTangent)
{
    float Irradiance = 0.0f;

    if (CapsuleLength == 0.0f)
    {
        Irradiance = 1.0f / (ToLight.SizeSquared() + 1.0f);
    }
    else
    {
        const FVector HalfCapsuleTangent = CapsuleTangent * CapsuleLength * 0.5f;
        const FVector CapsulePointA = ToLight + HalfCapsuleTangent;
        const FVector CapsulePointB = ToLight - HalfCapsuleTangent;
        const float InvLengthAB = 1.0f / (CapsulePointA.Size() * CapsulePointB.Size());
        const float CosSubtended = FVector::DotProduct(CapsulePointA, CapsulePointB) * InvLengthAB;
        Irradiance = InvLengthAB / (CosSubtended * 0.5f + InvLengthAB + 0.5f);
    }

    return Irradiance;
}

bool FShadowLightLibrary::LightRayTrace(UWorld* World, const FVector& Start, const FVector& End, ECollisionChannel TraceChannel, bool Debug)
{
    bool bInLight = false;

	FCollisionQueryParams TraceParams;
	TraceParams.bTraceComplex = true;
#if ENABLE_DRAW_DEBUG
    if (Debug)
    {
        FHitResult HitResult;
        bInLight = !World->LineTraceSingleByChannel(HitResult, Start, End, TraceChannel, TraceParams);
        
        const FColor TraceColor = FColor::Yellow;
        const FColor TraceHitColor = FColor::Blue;
	    if (!bInLight && HitResult.bBlockingHit)
	    {
		    ::DrawDebugLine(World, Start, HitResult.ImpactPoint, TraceColor);
		    ::DrawDebugLine(World, HitResult.ImpactPoint, End, TraceHitColor);
	    }
	    else
	    {
		    ::DrawDebugLine(World, Start, End, TraceColor);
	    }
    }
    else
#endif
    {
        bInLight = !World->LineTraceTestByChannel(Start, End, TraceChannel, TraceParams);
    }

    return bInLight;
}
