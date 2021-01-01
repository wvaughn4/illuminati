// Copyright 2019 Marcin Swiderski. All Rights Reserved.

#include "ShadowStealth.h"
#include "Modules/ModuleManager.h"
#include "HAL/IConsoleManager.h"
#include "ShadowStealthSettings.h"

#if WITH_EDITOR
#include "ISettingsModule.h"
#endif

DEFINE_LOG_CATEGORY(LogShadowStealth);

#define LOCTEXT_NAMESPACE "ShadowStealth"

class FShadowStealth : public FDefaultModuleImpl
{
public:
    virtual void StartupModule() override
    {
#if WITH_EDITOR
		if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
		{
			SettingsModule->RegisterSettings("Project", "Plugins", "Shadow Stealth",
				LOCTEXT("SettingsName", "Shadow Stealth"),
				LOCTEXT("SettingsDescription", "Configure the Shadow Stealth plugin"),
				GetMutableDefault<UShadowStealthSettings>());
        }
#endif
    }

    virtual void ShutdownModule() override
    {
#if WITH_EDITOR
		if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
		{
			SettingsModule->UnregisterSettings("Project", "Plugins", "Shadow Stealth");
		}
#endif
    }
};

IMPLEMENT_MODULE(FShadowStealth, ShadowStealth);
