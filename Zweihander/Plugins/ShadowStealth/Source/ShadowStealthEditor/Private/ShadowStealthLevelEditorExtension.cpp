// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "ShadowStealthLevelEditorExtensions.h"
#include "Modules/ModuleManager.h"
#include "Engine/Selection.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Kismet2/ComponentEditorUtils.h"
#include "ScopedTransaction.h"
#include "LevelEditor.h"
#include "Editor.h"

#include "Components/DirectionalLightComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/RectLightComponent.h"

#include "Components/ShadowDirectionalLightComponent.h"
#include "Components/ShadowPointLightComponent.h"
#include "Components/ShadowSpotLightComponent.h"
#include "Components/ShadowRectLightComponent.h"

#define LOCTEXT_NAMESPACE "ShadowStealth"

class FShadowStealthLevelEditorExtensions_Impl
{
public:
    static TSharedRef<FExtender> OnExtendLevelEditorMenu(const TSharedRef<FUICommandList> CommandList, TArray<AActor*> SelectedActors)
    {
        TSharedRef<FExtender> Extender(new FExtender());

        bool bNeedsShadowLight = false;
        for (AActor* Actor : SelectedActors)
        {
            for (UActorComponent* Comp : Actor->GetComponents())
            {
                if (USceneComponent* SceneComp = Cast<USceneComponent>(Comp))
                {
                    CheckShadowLightComponent(bNeedsShadowLight, SceneComp, UDirectionalLightComponent::StaticClass(), UShadowDirectionalLightComponent::StaticClass())
                        || CheckShadowLightComponent(bNeedsShadowLight, SceneComp, UPointLightComponent::StaticClass(), UShadowPointLightComponent::StaticClass())
                        || CheckShadowLightComponent(bNeedsShadowLight, SceneComp, USpotLightComponent::StaticClass(), UShadowSpotLightComponent::StaticClass())
						|| CheckShadowLightComponent(bNeedsShadowLight, SceneComp, URectLightComponent::StaticClass(), UShadowRectLightComponent::StaticClass());
                }
            }
        }

        if (bNeedsShadowLight)
        {
            Extender->AddMenuExtension("ActorControl", EExtensionHook::After, nullptr,
                FMenuExtensionDelegate::CreateLambda([](FMenuBuilder& MenuBuilder)
                {
                    MenuBuilder.BeginSection("ShadowStealth", LOCTEXT("LevelEditorMenuHeading", "Shadow Stealth"));
                    MenuBuilder.AddMenuEntry(
                        LOCTEXT("LevelEditorExtensionAddShadowLightComponents", "Add Shadow Lights"),
                        LOCTEXT("LevelEditorExtensionAddShadowLightComponents_Tooltip", "Adds shadow light components to all directional/point/spot light components in selected actors that don't have one."),
                        FSlateIcon(),
                        FExecuteAction::CreateStatic(&AddShadowLightComponents),
                        NAME_None,
                        EUserInterfaceActionType::Button);
                    MenuBuilder.EndSection();
                }));
        }

        return Extender;
    }
    
    static bool CheckShadowLightComponent(bool& bNeedsShadowLight, USceneComponent* SceneComp, UClass* LightCompClass, UClass* ShadowLightCompClass)
    {
        if (SceneComp->Mobility != EComponentMobility::Static && SceneComp->GetClass() == LightCompClass)
        {
            bool bHasShadowLight = false;
            for (USceneComponent* ChildComp : SceneComp->GetAttachChildren())
            {
                if (ChildComp && ChildComp->GetClass() == ShadowLightCompClass)
                {
                    bHasShadowLight = true;
                }
            }
            if (!bHasShadowLight)
            {
                bNeedsShadowLight = true;
            }
            return true;
        }
        return false;
    }
    
    static void AddShadowLightComponent(AActor* Actor, USceneComponent* SceneComp, UClass* ShadowLightCompClass)
    {
        Actor->Modify();
                    
		// Create an appropriate name for the new component
        FName ShadowLightCompName = *FComponentEditorUtils::GenerateValidVariableName(ShadowLightCompClass, Actor);
                    
		// Construct the new component and attach it
        USceneComponent* ShadowLightComp = NewObject<USceneComponent>(Actor, ShadowLightCompClass, ShadowLightCompName, RF_Transactional);
        ShadowLightComp->AttachToComponent(SceneComp, FAttachmentTransformRules::KeepRelativeTransform);
                    
		// Add to SerializedComponents array so it gets saved
		Actor->AddInstanceComponent(ShadowLightComp);
		ShadowLightComp->OnComponentCreated();
		ShadowLightComp->RegisterComponent();
                    
		// Rerun construction scripts
		Actor->RerunConstructionScripts();
    }

    static void AddShadowLightComponents()
    {
    	const FScopedTransaction Transaction(LOCTEXT("AddShadowLightComponents", "Add Shadow Lights"));

        TArray<AActor*> SelectedActors;
        GEditor->GetSelectedActors()->GetSelectedObjects<AActor>(SelectedActors);

        for (AActor* Actor : SelectedActors)
        {
            TSet<UActorComponent*> ActorComps = Actor->GetComponents();
            for (UActorComponent* Comp : ActorComps)
            {
                if (USceneComponent* SceneComp = Cast<USceneComponent>(Comp))
                {
                    bool bNeedsShadowLight = false;
                    if (CheckShadowLightComponent(bNeedsShadowLight, SceneComp, UDirectionalLightComponent::StaticClass(), UShadowDirectionalLightComponent::StaticClass()))
                    {
                        if (bNeedsShadowLight)
                        {
                            AddShadowLightComponent(Actor, SceneComp, UShadowDirectionalLightComponent::StaticClass());
                        }
                    }
                    else if (CheckShadowLightComponent(bNeedsShadowLight, SceneComp, UPointLightComponent::StaticClass(), UShadowPointLightComponent::StaticClass()))
                    {
                        if (bNeedsShadowLight)
                        {
                            AddShadowLightComponent(Actor, SceneComp, UShadowPointLightComponent::StaticClass());
                        }
                    }
                    else if (CheckShadowLightComponent(bNeedsShadowLight, SceneComp, USpotLightComponent::StaticClass(), UShadowSpotLightComponent::StaticClass()))
                    {
                        if (bNeedsShadowLight)
                        {
                            AddShadowLightComponent(Actor, SceneComp, UShadowSpotLightComponent::StaticClass());
                        }
                    }
					else if (CheckShadowLightComponent(bNeedsShadowLight, SceneComp, URectLightComponent::StaticClass(), UShadowRectLightComponent::StaticClass()))
					{
						if (bNeedsShadowLight)
						{
							AddShadowLightComponent(Actor, SceneComp, UShadowRectLightComponent::StaticClass());
						}
					}
                }
            }
        }
    }
};

using FLevelViewportMenuExtender_SelectedActors = FLevelEditorModule::FLevelViewportMenuExtender_SelectedActors;

FDelegateHandle LevelEditorExtenderDelegateHandle;

void FShadowStealthLevelEditorExtensions::InstallHooks()
{
	FLevelEditorModule& LevelEditorModule = FModuleManager::Get().LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	TArray<FLevelViewportMenuExtender_SelectedActors>& LevelEditorExtenders = LevelEditorModule.GetAllLevelViewportContextMenuExtenders();
	LevelEditorExtenders.Add(FLevelViewportMenuExtender_SelectedActors::CreateStatic(&FShadowStealthLevelEditorExtensions_Impl::OnExtendLevelEditorMenu));
	LevelEditorExtenderDelegateHandle = LevelEditorExtenders.Last().GetHandle();
}

void FShadowStealthLevelEditorExtensions::RemoveHooks()
{
	if (FModuleManager::Get().IsModuleLoaded("LevelEditor"))
	{
		FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	    TArray<FLevelViewportMenuExtender_SelectedActors>& LevelEditorExtenders = LevelEditorModule.GetAllLevelViewportContextMenuExtenders();
		LevelEditorExtenders.RemoveAll([&](const FLevelViewportMenuExtender_SelectedActors& Delegate) {
			return Delegate.GetHandle() == LevelEditorExtenderDelegateHandle;
		});
	}
}
