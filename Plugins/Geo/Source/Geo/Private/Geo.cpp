// Copyright Epic Games, Inc. All Rights Reserved.

#include "Geo.h"

#include "Misc/MessageDialog.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"

#include "GeoLibrary/ExampleLibrary.h"

#define LOCTEXT_NAMESPACE "FGeoModule"

bool FileExists(const FString& FilePath) {
	return FPaths::FileExists(FilePath);
}


	void FGeoModule::StartupModule()
	{
		// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

		// Get the base directory of this plugin
		FString BaseDir = IPluginManager::Get().FindPlugin("Geo")->GetBaseDir();

		// Add on the relative location of the third party dll and load it
		FString LibraryPath;

		#if PLATFORM_64BITS
			FString platform = TEXT("assimp-vc143-mt.dll");
		#endif
		FString dllpath = BaseDir+"/Source/ThirdParty/assimp/bin/Release/"+platform;

		FString DllDir = FPaths::Combine(IPluginManager::Get().FindPlugin("Geo")->GetBaseDir(), TEXT("Binaries/Win64"));

		if (FileExists(dllpath)) {
			UE_LOG(LogTemp, Warning, TEXT("WenJianCunZai!"));
			//FPlatformProcess::PushDllDirectory(*DllDir);
			//FPlatformProcess::GetDllHandle(*dllpath);

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("No!"));
		}

	

}

void FGeoModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	// Free the dll handle
	FPlatformProcess::FreeDllHandle(ExampleLibraryHandle);
	ExampleLibraryHandle = nullptr;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FGeoModule, Geo)
