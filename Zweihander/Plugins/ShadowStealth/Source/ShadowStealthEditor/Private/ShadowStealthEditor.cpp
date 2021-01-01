// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "ShadowStealthEditor.h"
#include "Modules/ModuleManager.h"
#include "IPlacementModeModule.h"
#include "ParentSocketCustomization.h"
#include "ShadowStealthLevelEditorExtensions.h"
#include "ActorFactories/ActorFactoryShadowDirectionalLight.h"
#include "ActorFactories/ActorFactoryShadowPointLight.h"
#include "ActorFactories/ActorFactoryShadowSpotLight.h"
#include "ActorFactories/ActorFactoryShadowRectLight.h"
#include "ActorFactories/ActorFactoryShadowStealthCharacter.h"

#define LOCTEXT_NAMESPACE "ShadowStealth"

class FShadowStealthEditor : public IModuleInterface
{
    virtual void StartupModule() override
    {
        FParentSocketCustomization::Register();
        if (!IsRunningCommandlet())
        {
            FShadowStealthLevelEditorExtensions::InstallHooks();
        }

        FModuleManager::Get().OnModulesChanged().AddRaw(this, &FShadowStealthEditor::OnModulesChanged);
        if (IPlacementModeModule::IsAvailable())
        {
            OnModulesChanged("PlacementMode", EModuleChangeReason::ModuleLoaded);
        }

    }

    void OnModulesChanged(FName Module, EModuleChangeReason Reason)
    {
        if (Module == TEXT("PlacementMode") && Reason == EModuleChangeReason::ModuleLoaded)
        {
            int32 SortOrder = 0;
            FName CategoryName = TEXT("ShadowStealth");
            IPlacementModeModule::Get().RegisterPlacementCategory(
                FPlacementCategoryInfo(
                    LOCTEXT("ShadowStealth", "Shadow Stealth"),
                    CategoryName,
                    TEXT("PMShadowStealth"),
                    21
                )
            );
            IPlacementModeModule::Get().RegisterPlaceableItem(CategoryName, MakeShareable(new FPlaceableItem(*UActorFactoryShadowDirectionalLight::StaticClass(), SortOrder += 10)));
            IPlacementModeModule::Get().RegisterPlaceableItem(CategoryName, MakeShareable(new FPlaceableItem(*UActorFactoryShadowPointLight::StaticClass(), SortOrder += 10)));
            IPlacementModeModule::Get().RegisterPlaceableItem(CategoryName, MakeShareable(new FPlaceableItem(*UActorFactoryShadowSpotLight::StaticClass(), SortOrder += 10)));
			IPlacementModeModule::Get().RegisterPlaceableItem(CategoryName, MakeShareable(new FPlaceableItem(*UActorFactoryShadowRectLight::StaticClass(), SortOrder += 10)));
            IPlacementModeModule::Get().RegisterPlaceableItem(CategoryName, MakeShareable(new FPlaceableItem(*UActorFactoryShadowStealthCharacter::StaticClass(), SortOrder += 10)));
        }
    }

    virtual void ShutdownModule() override
    {
        if (UObjectInitialized())
        {
            FParentSocketCustomization::Unregister();
            FShadowStealthLevelEditorExtensions::RemoveHooks();
        }

        FModuleManager::Get().OnModulesChanged().RemoveAll(this);
        if (IPlacementModeModule::IsAvailable())
        {
            IPlacementModeModule::Get().UnregisterPlacementCategory(TEXT("ShadowStealth"));
        }
    }
};

IMPLEMENT_MODULE(FShadowStealthEditor, ShadowStealthEditor);

#undef LOCTEXT_NAMESPACE
