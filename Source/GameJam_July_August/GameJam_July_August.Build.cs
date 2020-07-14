// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GameJam_July_August : ModuleRules
{
	public GameJam_July_August(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
