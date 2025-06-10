// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeo_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Geo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Geo()
	{
		if (!Z_Registration_Info_UPackage__Script_Geo.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Geo",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xBC20CE41,
				0xA24F238F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Geo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Geo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Geo(Z_Construct_UPackage__Script_Geo, TEXT("/Script/Geo"), Z_Registration_Info_UPackage__Script_Geo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBC20CE41, 0xA24F238F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
