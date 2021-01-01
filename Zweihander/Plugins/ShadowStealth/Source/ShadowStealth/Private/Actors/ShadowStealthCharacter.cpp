// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "Actors/ShadowStealthCharacter.h"
#include "Components/ShadowStealthComponent.h"
#include "Components/SkeletalMeshComponent.h"

FName AShadowStealthCharacter::ShadowStealthComponentName(TEXT("ShadowStealthComp"));

AShadowStealthCharacter::AShadowStealthCharacter(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    ShadowStealth = CreateOptionalDefaultSubobject<UShadowStealthComponent>(ShadowStealthComponentName);
    if (ShadowStealth)
    {
        if (USkeletalMeshComponent* SkelMesh = GetMesh())
        {
            ShadowStealth->SetupAttachment(SkelMesh);
        }
    }
}

bool AShadowStealthCharacter::CanBeSeenFrom(const FVector& ObserverLocation, FVector& OutSeenLocation, int32& NumberOfLoSChecksPerformed, float& OutSightStrength, const AActor* IgnoreActor) const
{
    if (ShadowStealth)
    {
        return ShadowStealth->CanBeSeenFrom(ObserverLocation, OutSeenLocation, NumberOfLoSChecksPerformed, OutSightStrength, IgnoreActor);
    }
    return false;
}
