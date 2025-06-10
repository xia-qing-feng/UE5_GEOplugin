// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Geo/Public/ProMeshTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProMeshTest() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GEO_API UClass* Z_Construct_UClass_AProMeshTest();
GEO_API UClass* Z_Construct_UClass_AProMeshTest_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Geo();
// End Cross Module References

// Begin Class AProMeshTest
void AProMeshTest::StaticRegisterNativesAProMeshTest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProMeshTest);
UClass* Z_Construct_UClass_AProMeshTest_NoRegister()
{
	return AProMeshTest::StaticClass();
}
struct Z_Construct_UClass_AProMeshTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProMeshTest.h" },
		{ "ModuleRelativePath", "Public/ProMeshTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__smComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProMeshTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PMC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProMeshTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__smComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PMC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProMeshTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProMeshTest_Statics::NewProp__smComp = { "_smComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProMeshTest, _smComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__smComp_MetaData), NewProp__smComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProMeshTest_Statics::NewProp_PMC = { "PMC", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProMeshTest, PMC), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PMC_MetaData), NewProp_PMC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProMeshTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProMeshTest_Statics::NewProp__smComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProMeshTest_Statics::NewProp_PMC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProMeshTest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProMeshTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Geo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProMeshTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProMeshTest_Statics::ClassParams = {
	&AProMeshTest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProMeshTest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProMeshTest_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProMeshTest_Statics::Class_MetaDataParams), Z_Construct_UClass_AProMeshTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProMeshTest()
{
	if (!Z_Registration_Info_UClass_AProMeshTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProMeshTest.OuterSingleton, Z_Construct_UClass_AProMeshTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProMeshTest.OuterSingleton;
}
template<> GEO_API UClass* StaticClass<AProMeshTest>()
{
	return AProMeshTest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProMeshTest);
AProMeshTest::~AProMeshTest() {}
// End Class AProMeshTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ProMeshTest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProMeshTest, AProMeshTest::StaticClass, TEXT("AProMeshTest"), &Z_Registration_Info_UClass_AProMeshTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProMeshTest), 536010882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ProMeshTest_h_3540904187(TEXT("/Script/Geo"),
	Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ProMeshTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ProMeshTest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
