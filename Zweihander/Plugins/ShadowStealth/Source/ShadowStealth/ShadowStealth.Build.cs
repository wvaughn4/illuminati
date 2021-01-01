// Copyright 2019 Marcin Swiderski. All Rights Reserved.

using System.IO;

namespace UnrealBuildTool.Rules
{
	public class ShadowStealth : ModuleRules
	{
		public ShadowStealth(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

			PublicIncludePaths.AddRange(new string[] {
				Path.Combine(ModuleDirectory, "Public"),
				Path.Combine(ModuleDirectory, "Classes") });

			PublicDependencyModuleNames.AddRange(new string[] {
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"NavigationSystem",
				"AIModule",
				"GameplayTasks",
                "ShadowStealthShaders",
                "RenderCore",
                "RHI",
				"CompleteRPG"	});

            if (Target.Version.MinorVersion <= 21)
            {
                PublicDependencyModuleNames.AddRange(new string[] {
                    "ShaderCore" });
            }

            PrivateDefinitions.Add(string.Format("ENGINE_VERSION_MAJOR={0}", Target.Version.MajorVersion));
            PrivateDefinitions.Add(string.Format("ENGINE_VERSION_MINOR={0}", Target.Version.MinorVersion));
            PrivateDefinitions.Add(string.Format("ENGINE_VERSION_HOTFIX={0}", Target.Version.PatchVersion));
        }
	}
}
