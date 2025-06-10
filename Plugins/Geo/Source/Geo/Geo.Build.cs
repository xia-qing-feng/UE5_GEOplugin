// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class Geo : ModuleRules
{
	public Geo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        bEnableExceptions = true;
        bUseRTTI = true;

        PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		// Core module dependencies
        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "EnhancedInput",
            "Projects"
        });
        
        // Geometry processing dependencies
        PublicDependencyModuleNames.AddRange(new string[]
        {
            "GeoLibrary",
            "MeshDescription",
            "StaticMeshDescription",
            "MeshConversion",
            "ProceduralMeshComponent",
            "DynamicMesh",
            "GeometryCore",
            "GeometryScriptingCore",
            "GeometryFramework"
        });
        
        // UI dependencies
        PublicDependencyModuleNames.AddRange(new string[]
        {
            "UMG",
            "AdvancedWidgets",
            "DesktopPlatform",
            "Slate",
            "SlateCore",
        });

        PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
        
        string assimpPath = Path.Combine(ModuleDirectory, "../ThirdParty/assimp");

        string includePathAss = Path.Combine(assimpPath, "include");
        string includePathEigen = Path.Combine(ModuleDirectory, "../ThirdParty/Eigen", "include");
        string includePathlibigl = Path.Combine(ModuleDirectory, "../ThirdParty/libigl1", "include");

        PublicIncludePaths.AddRange(
            new string[] {
                includePathAss,
                includePathEigen,
                includePathlibigl
				// ... add public include paths required here ...
			}
            );

        string libPath = Path.Combine(assimpPath, "lib/Release/assimp-vc143-mt.lib");
        PublicAdditionalLibraries.Add(libPath);

        PublicDelayLoadDLLs.Add("assimp-vc143-mt.dll");
        string dllPath = Path.Combine(assimpPath, "bin/Release/assimp-vc143-mt.dll");
        RuntimeDependencies.Add("$(TargetOutputDir)/assimp-vc143-mt.dll", dllPath);
        //if (Target.Type == TargetType.Editor || Target.Type == TargetType.Game)
        //{
        //    string dllOutputPath = "../Binaries/Win64/assimp-vc143-mt.dll";
        //    if (!File.Exists(dllOutputPath))
        //    {
        //        File.Copy(dllPath, dllOutputPath);
        //    }
        //    RuntimeDependencies.Add(dllOutputPath);
        //}
    }
}
