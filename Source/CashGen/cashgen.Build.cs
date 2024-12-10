// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class CashGen : ModuleRules
{
	public CashGen(ReadOnlyTargetRules Target) : base(Target)
    {
        
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "RenderCore", "RHI", "UnrealFastNoisePlugin", "ProceduralMeshComponent" });

        PrivateDependencyModuleNames.AddRange(new string[] { });
      
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
    }
}
