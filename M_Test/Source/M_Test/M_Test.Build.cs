// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class M_Test : ModuleRules
{
	public M_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" });


	}
}
