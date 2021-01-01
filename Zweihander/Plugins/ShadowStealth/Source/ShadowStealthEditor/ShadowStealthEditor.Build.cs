// Copyright 2019 Marcin Swiderski. All Rights Reserved.

using System.IO;

namespace UnrealBuildTool.Rules
{
	public class ShadowStealthEditor : ModuleRules
	{
		public ShadowStealthEditor(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
			
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));

			DynamicallyLoadedModuleNames.AddRange(new string[] {
				"PlacementMode" });

			PrivateIncludePathModuleNames.AddRange(new string[] {
				"PlacementMode" });

			PublicDependencyModuleNames.AddRange(new string[] {
				"Core",
				"CoreUObject",
				"Engine" });

			PrivateDependencyModuleNames.AddRange(new string[] {
				"InputCore",
				"PropertyEditor",
				"UnrealEd",
				"ShadowStealth",
				"Slate",
				"SlateCore",
				"Kismet" });

            PrivateDefinitions.Add(string.Format("ENGINE_VERSION_MAJOR={0}", Target.Version.MajorVersion));
            PrivateDefinitions.Add(string.Format("ENGINE_VERSION_MINOR={0}", Target.Version.MinorVersion));
            PrivateDefinitions.Add(string.Format("ENGINE_VERSION_HOTFIX={0}", Target.Version.PatchVersion));
		}
	}
}
