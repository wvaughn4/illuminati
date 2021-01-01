// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#pragma once

#include "ShadowStealth.h"
#include "GameFramework/Character.h"
#include "Perception/AISightTargetInterface.h"
#include "ShadowStealthCharacter.generated.h"

class UShadowStealthComponent;

UCLASS()
class SHADOWSTEALTH_API AShadowStealthCharacter : public ACharacter, public IAISightTargetInterface
{
    GENERATED_BODY()
public:
    AShadowStealthCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

private:
    UPROPERTY(Category=ShadowStealth, VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
    UShadowStealthComponent* ShadowStealth;

public:
    static FName ShadowStealthComponentName;
    FORCEINLINE UShadowStealthComponent* GetShadowStealth() const { return ShadowStealth; }

	virtual bool CanBeSeenFrom(const FVector& ObserverLocation, FVector& OutSeenLocation, int32& NumberOfLoSChecksPerformed, float& OutSightStrength, const AActor* IgnoreActor = NULL) const override;
};
