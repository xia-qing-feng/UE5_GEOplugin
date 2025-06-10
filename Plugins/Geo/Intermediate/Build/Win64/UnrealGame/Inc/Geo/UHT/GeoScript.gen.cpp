// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Geo/Public/GeoScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoScript() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GEO_API UClass* Z_Construct_UClass_AGeoScript();
GEO_API UClass* Z_Construct_UClass_AGeoScript_NoRegister();
UPackage* Z_Construct_UPackage__Script_Geo();
// End Cross Module References

// Begin Class AGeoScript
void AGeoScript::StaticRegisterNativesAGeoScript()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeoScript);
UClass* Z_Construct_UClass_AGeoScript_NoRegister()
{
	return AGeoScript::StaticClass();
}
struct Z_Construct_UClass_AGeoScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GeoScript.h" },
		{ "ModuleRelativePath", "Public/GeoScript.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoScript>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGeoScript_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Geo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoScript_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoScript_Statics::ClassParams = {
	&AGeoScript::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoScript_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeoScript_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGeoScript()
{
	if (!Z_Registration_Info_UClass_AGeoScript.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeoScript.OuterSingleton, Z_Construct_UClass_AGeoScript_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGeoScript.OuterSingleton;
}
template<> GEO_API UClass* StaticClass<AGeoScript>()
{
	return AGeoScript::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGeoScript);
AGeoScript::~AGeoScript() {}
// End Class AGeoScript

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_GeoScript_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGeoScript, AGeoScript::StaticClass, TEXT("AGeoScript"), &Z_Registration_Info_UClass_AGeoScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoScript), 2324875688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_GeoScript_h_944432966(TEXT("/Script/Geo"),
	Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_GeoScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_GeoScript_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
