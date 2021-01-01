// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "Components/ShadowDirectionalLightComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "PropertyNames.h"
#include "ShadowLightLibrary.h"
#include "ShadowStealthSettings.h"

using namespace PropertyAccessHelpers;

UShadowDirectionalLightComponent::UShadowDirectionalLightComponent()
    : bEnabled(true)
{}

void UShadowDirectionalLightComponent::OnAttachmentChanged()
{
    Super::OnAttachmentChanged();

    DirectionalLightComponent = Cast<UDirectionalLightComponent>(GetAttachParent());
    if (DirectionalLightComponent)
    {
        SetMobility(DirectionalLightComponent->Mobility);
    }
    
    Settings = GetDefault<UShadowStealthSettings>();
}

FLinearColor UShadowDirectionalLightComponent::GetLightIntensity(const FVector& Point, ECollisionChannel TraceChannel, bool Debug) const
{
    FLinearColor LightIntensity = FLinearColor(0.0f, 0.0f, 0.0f, 0.0f);
    
    bool bValidLight = bEnabled && FShadowLightLibrary::IsLightValid(DirectionalLightComponent, Settings);
    if (bValidLight)
    {
        const float Intensity = GetPropertyValue<float, PNAME(Intensity)>(DirectionalLightComponent);
        bool bInLight = Intensity > 0.0f;

        // Check if point is not in the shadows
        if (bInLight && GetPropertyValue<bool, PNAME(CastShadows)>(DirectionalLightComponent))
        {
            if (UWorld* World = GetWorld())
            {
                const FVector TraceStart = Point - DirectionalLightComponent->GetForwardVector() * 10000.0f;
                bInLight = FShadowLightLibrary::LightRayTrace(World, TraceStart, Point, TraceChannel, Debug);
            }
        }

        if (bInLight)
        {
            FLinearColor Color = FLinearColor::FromSRGBColor(GetPropertyValue<FColor, PNAME(LightColor)>(DirectionalLightComponent));
            Color.A = Color.GetLuminance();
            LightIntensity = Intensity * Color;
        }
    }

    return LightIntensity;
}

bool UShadowDirectionalLightComponent::IsGlobalLight() const
{
    return DirectionalLightComponent->Mobility != EComponentMobility::Static;
}
