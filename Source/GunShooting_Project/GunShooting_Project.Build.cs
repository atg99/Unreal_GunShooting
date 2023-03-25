// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GunShooting_Project : ModuleRules
{
	public GunShooting_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
