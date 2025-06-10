// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Geo/Public/ChangeableMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangeableMesh() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GEO_API UClass* Z_Construct_UClass_AChangeableMesh();
GEO_API UClass* Z_Construct_UClass_AChangeableMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_Geo();
// End Cross Module References

// Begin Class AChangeableMesh
void AChangeableMesh::StaticRegisterNativesAChangeableMesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChangeableMesh);
UClass* Z_Construct_UClass_AChangeableMesh_NoRegister()
{
	return AChangeableMesh::StaticClass();
}
struct Z_Construct_UClass_AChangeableMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ChangeableMesh.h" },
		{ "ModuleRelativePath", "Public/ChangeableMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualMesh_MetaData[] = {
		{ "Category", "ChangeableMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChangeableMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChangeableMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChangeableMesh_Statics::NewProp_VisualMesh = { "VisualMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChangeableMesh, VisualMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualMesh_MetaData), NewProp_VisualMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChangeableMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChangeableMesh_Statics::NewProp_VisualMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChangeableMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChangeableMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Geo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChangeableMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChangeableMesh_Statics::ClassParams = {
	&AChangeableMesh::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AChangeableMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AChangeableMesh_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChangeableMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_AChangeableMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChangeableMesh()
{
	if (!Z_Registration_Info_UClass_AChangeableMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChangeableMesh.OuterSingleton, Z_Construct_UClass_AChangeableMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChangeableMesh.OuterSingleton;
}
template<> GEO_API UClass* StaticClass<AChangeableMesh>()
{
	return AChangeableMesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChangeableMesh);
AChangeableMesh::~AChangeableMesh() {}
// End Class AChangeableMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ChangeableMesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChangeableMesh, AChangeableMesh::StaticClass, TEXT("AChangeableMesh"), &Z_Registration_Info_UClass_AChangeableMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChangeableMesh), 1684366421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ChangeableMesh_h_2920159886(TEXT("/Script/Geo"),
	Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ChangeableMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ChangeableMesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
