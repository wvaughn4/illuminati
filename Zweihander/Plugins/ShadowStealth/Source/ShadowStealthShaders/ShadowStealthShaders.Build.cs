// Copyright 2019 Marcin Swiderski. All Rights Reserved.

using System.IO;

namespace UnrealBuildTool.Rules
{
	public class ShadowStealthShaders : ModuleRules
	{
		public ShadowStealthShaders(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

			PublicIncludePaths.AddRange(new string[] {
				Path.Combine(ModuleDirectory, "Public") });

			PublicDependencyModuleNames.AddRange(new string[] {
				"Core",
				"CoreUObject",
				"Engine",
                "RenderCore",
                "RHI" });

            PrivateDependencyModuleNames.AddRange(new string[] {
                "Projects" });

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
