// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "Components/ShadowPointLightComponent.h"
#include "Components/PointLightComponent.h"
#include "PropertyNames.h"
#include "ShadowLightLibrary.h"
#include "ShadowStealthSettings.h"

using namespace PropertyAccessHelpers;

UShadowPointLightComponent::UShadowPointLightComponent()
    : bEnabled(true)
{
    bCanEverAffectNavigation = false;
}

void UShadowPointLightComponent::OnAttachmentChanged()
{
    Super::OnAttachmentChanged();

    PointLightComponent = Cast<UPointLightComponent>(GetAttachParent());
    if (PointLightComponent)
    {
        // Sphere radius
        float AttenuationRadius = GetPropertyValue<float, PNAME(AttenuationRadius)>(PointLightComponent);
        if (AttenuationRadius != SphereRadius)
        {
            SetSphereRadius(AttenuationRadius);
        }
        
        // Disable collision for static lights (this component shouldn't be here in the first place)
        SetMobility(PointLightComponent->Mobility);
        if (Mobility == EComponentMobility::Static)
        {
            SetCollisionEnabled(ECollisionEnabled::NoCollision);
        }
    }
    
    Settings = GetDefault<UShadowStealthSettings>();
}

FLinearColor UShadowPointLightComponent::GetLightIntensity(const FVector& Point, ECollisionChannel TraceChannel, bool Debug) const
{
    FLinearColor LightIntensity = FLinearColor(0.0f, 0.0f, 0.0f, 0.0f);
    
    bool bValidLight = bEnabled && FShadowLightLibrary::IsLightValid(PointLightComponent, Settings);
    if ( bValidLight )
    {
        const float Attenuation = FShadowLightLibrary::GetPointLightAttenuation(PointLightComponent, Point);
        bool bInLight = Attenuation > 0.0f;

        // Check if point is not in the shadows
        if (bInLight && GetPropertyValue<bool, PNAME(CastShadows)>(PointLightComponent))
        {
            if (UWorld* World = GetWorld())
            {
                const FVector LightLocation = PointLightComponent->GetComponentLocation();
                bInLight = FShadowLightLibrary::LightRayTrace(World, LightLocation, Point, TraceChannel, Debug);
            }
        }

        if (bInLight)
        {
            FLinearColor Color = FLinearColor::FromSRGBColor(GetPropertyValue<FColor, PNAME(LightColor)>(PointLightComponent));
            Color.A = Color.GetLuminance();
            LightIntensity = Attenuation * PointLightComponent->ComputeLightBrightness() * Color;
        }
    }

    return LightIntensity;
}
