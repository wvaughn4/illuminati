// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "Components/ShadowSpotLightComponent.h"
#include "Components/SpotLightComponent.h"
#include "PropertyNames.h"
#include "ShadowLightLibrary.h"
#include "ShadowStealthSettings.h"

using namespace PropertyAccessHelpers;

UShadowSpotLightComponent::UShadowSpotLightComponent()
    : bEnabled(true)
{
#if ENGINE_VERSION_MINOR >= 24
	SetUsingAbsoluteScale(true);
#else
	bAbsoluteScale = true;
#endif
    bCanEverAffectNavigation = false;
}

void UShadowSpotLightComponent::OnAttachmentChanged()
{
    Super::OnAttachmentChanged();

    SpotLightComponent = Cast<USpotLightComponent>(GetAttachParent());
    if (SpotLightComponent)
    {
        // Capsule size
        const float AttenuationRadius = GetPropertyValue<float, PNAME(AttenuationRadius)>(SpotLightComponent);
        const float OuterConeAngle = FMath::DegreesToRadians(GetPropertyValue<float, PNAME(OuterConeAngle)>(SpotLightComponent));
        const float OuterConeHeight = AttenuationRadius * FMath::Cos(OuterConeAngle);
        
        const float NewCapsuleRadius = AttenuationRadius * FMath::Sin(OuterConeAngle);
        const float NewCapsuleHalfHeight = FMath::Max((OuterConeHeight + NewCapsuleRadius) * 0.5f, NewCapsuleRadius);
        if (CapsuleRadius != NewCapsuleRadius || CapsuleHalfHeight != NewCapsuleHalfHeight)
        {
            SetCapsuleSize(NewCapsuleRadius, NewCapsuleHalfHeight);
        }

        // Capsule location
        const FVector ParentScale = SpotLightComponent->GetComponentScale();
        const FVector Location = FVector(FMath::Min(NewCapsuleHalfHeight, OuterConeHeight) / ParentScale.X, 0.0f, 0.0f);
        const FRotator Rotation = FRotator(90.0f, 0.0f, 0.0f);
#if ENGINE_VERSION_MINOR >= 24
        if (GetRelativeLocation() != Location || GetRelativeRotation() != Rotation)
#else
		if (RelativeLocation != Location || RelativeRotation != Rotation)
#endif
        {
            SetRelativeLocationAndRotation(Location, Rotation);
        }
        
        // Disable collision for static lights (this component shouldn't be here in the first place)
        SetMobility(SpotLightComponent->Mobility);
        if (Mobility == EComponentMobility::Static)
        {
            SetCollisionEnabled(ECollisionEnabled::NoCollision);
        }
    }

    Settings = GetDefault<UShadowStealthSettings>();
}

FLinearColor UShadowSpotLightComponent::GetLightIntensity(const FVector& Point, ECollisionChannel TraceChannel, bool Debug) const
{
    FLinearColor LightIntensity = FLinearColor(0.0f, 0.0f, 0.0f, 0.0f);
    
    bool bValidLight = bEnabled && FShadowLightLibrary::IsLightValid(SpotLightComponent, Settings);
    if ( bValidLight )
    {
        const float Attenuation = FShadowLightLibrary::GetSpotLightAttenuation(SpotLightComponent, Point);
        bool bInLight = Attenuation > 0.0f;

        // Check if point is not in the shadows
        if (bInLight && GetPropertyValue<bool, PNAME(CastShadows)>(SpotLightComponent))
        {
            if (UWorld* World = GetWorld())
            {
                const FVector LightLocation = SpotLightComponent->GetComponentLocation();
                bInLight = FShadowLightLibrary::LightRayTrace(World, LightLocation, Point, TraceChannel, Debug);
            }
        }

        if (bInLight)
        {
            FLinearColor Color = FLinearColor::FromSRGBColor(GetPropertyValue<FColor, PNAME(LightColor)>(SpotLightComponent));
            Color.A = Color.GetLuminance();
            LightIntensity = Attenuation * SpotLightComponent->ComputeLightBrightness() * Color;
        }
    }

    return LightIntensity;
}
