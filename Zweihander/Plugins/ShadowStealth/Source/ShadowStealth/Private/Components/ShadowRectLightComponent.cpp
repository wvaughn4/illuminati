// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "Components/ShadowRectLightComponent.h"
#include "Components/RectLightComponent.h"
#include "PropertyNames.h"
#include "ShadowLightLibrary.h"
#include "ShadowStealthSettings.h"

using namespace PropertyAccessHelpers;

UShadowRectLightComponent::UShadowRectLightComponent()
	: bEnabled(true)
{
	bCanEverAffectNavigation = false;
}

void UShadowRectLightComponent::OnAttachmentChanged()
{
	Super::OnAttachmentChanged();

	RectLightComponent = Cast<URectLightComponent>(GetAttachParent());
	if (RectLightComponent)
	{
		// Sphere radius
		float AttenuationRadius = GetPropertyValue<float, PNAME(AttenuationRadius)>(RectLightComponent);
		if (AttenuationRadius != SphereRadius)
		{
			SetSphereRadius(AttenuationRadius);
		}

		// Disable collision for static lights (this component shouldn't be here in the first place)
		SetMobility(RectLightComponent->Mobility);
		if (Mobility == EComponentMobility::Static)
		{
			SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}

	Settings = GetDefault<UShadowStealthSettings>();
}

FLinearColor UShadowRectLightComponent::GetLightIntensity(const FVector& Point, ECollisionChannel TraceChannel, bool Debug) const
{
	FLinearColor LightIntensity = FLinearColor(0.0f, 0.0f, 0.0f, 0.0f);

	bool bValidLight = bEnabled && FShadowLightLibrary::IsLightValid(RectLightComponent, Settings);
	if ( bValidLight )
	{
		const float Attenuation = FShadowLightLibrary::GetRectLightAttenuation(RectLightComponent, Point);
		bool bInLight = Attenuation > 0.0f;

		// Check if point is not in the shadows
		if (bInLight && GetPropertyValue<bool, PNAME(CastShadows)>(RectLightComponent))
		{
			if (UWorld* World = GetWorld())
			{
				const FVector LightLocation = RectLightComponent->GetComponentLocation();
				bInLight = FShadowLightLibrary::LightRayTrace(World, LightLocation, Point, TraceChannel, Debug);
			}
		}

		if (bInLight)
		{
			FLinearColor Color = FLinearColor::FromSRGBColor(GetPropertyValue<FColor, PNAME(LightColor)>(RectLightComponent));
			Color.A = Color.GetLuminance();
			LightIntensity = Attenuation * RectLightComponent->ComputeLightBrightness() * Color;
		}
	}

	return LightIntensity;
}
