// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "ActorFactories/ActorFactoryShadowStealthCharacter.h"
#include "Actors/ShadowStealthCharacter.h"
#include "AssetData.h"

#define LOCTEXT_NAMESPACE "ShadowStealth"

UActorFactoryShadowStealthCharacter::UActorFactoryShadowStealthCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DisplayName = LOCTEXT("ActorFactoryCharacterShadowStealthDisplayName", "Shadow Stealth Character");
	NewActorClass = AShadowStealthCharacter::StaticClass();
}

bool UActorFactoryShadowStealthCharacter::CanCreateActorFrom(const FAssetData& AssetData, FText& OutErrorMsg)
{
	return AssetData.ObjectPath == FName(*AShadowStealthCharacter::StaticClass()->GetPathName());
}

#undef LOCTEXT_NAMESPACE
