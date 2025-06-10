// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Geo/Public/MyPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GEO_API UClass* Z_Construct_UClass_AMyPlayerController();
GEO_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();
GEO_API UClass* Z_Construct_UClass_AShowModels_NoRegister();
GEO_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Geo();
// End Cross Module References

// Begin Class AMyPlayerController Function CreateGeoUI
struct Z_Construct_UFunction_AMyPlayerController_CreateGeoUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//void InteractComplete(const FInputActionValue& Value);\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "void InteractComplete(const FInputActionValue& Value);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_CreateGeoUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "CreateGeoUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_CreateGeoUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayerController_CreateGeoUI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyPlayerController_CreateGeoUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerController_CreateGeoUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayerController::execCreateGeoUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateGeoUI();
	P_NATIVE_END;
}
// End Class AMyPlayerController Function CreateGeoUI

// Begin Class AMyPlayerController Function SetUIInputMode
struct Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics
{
	struct MyPlayerController_eventSetUIInputMode_Parms
	{
		bool bEnableUI;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableUI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics::NewProp_bEnableUI_SetBit(void* Obj)
{
	((MyPlayerController_eventSetUIInputMode_Parms*)Obj)->bEnableUI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics::NewProp_bEnableUI = { "bEnableUI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyPlayerController_eventSetUIInputMode_Parms), &Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics::NewProp_bEnableUI_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics::NewProp_bEnableUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "SetUIInputMode", nullptr, nullptr, Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics::MyPlayerController_eventSetUIInputMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics::MyPlayerController_eventSetUIInputMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPlayerController_SetUIInputMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerController_SetUIInputMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayerController::execSetUIInputMode)
{
	P_GET_UBOOL(Z_Param_bEnableUI);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUIInputMode(Z_Param_bEnableUI);
	P_NATIVE_END;
}
// End Class AMyPlayerController Function SetUIInputMode

// Begin Class AMyPlayerController
void AMyPlayerController::StaticRegisterNativesAMyPlayerController()
{
	UClass* Class = AMyPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateGeoUI", &AMyPlayerController::execCreateGeoUI },
		{ "SetUIInputMode", &AMyPlayerController::execSetUIInputMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerController);
UClass* Z_Construct_UClass_AMyPlayerController_NoRegister()
{
	return AMyPlayerController::StaticClass();
}
struct Z_Construct_UClass_AMyPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyPlayerController.h" },
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChooseModelAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_xWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_openWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY()\n//UClass* xWidget;\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY()\nUClass* xWidget;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pM_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCamera_MetaData[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "Public/MyPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChooseModelAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_xWidget;
	static void NewProp_openWidget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_openWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pM;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayerController_CreateGeoUI, "CreateGeoUI" }, // 1199911240
		{ &Z_Construct_UFunction_AMyPlayerController_SetUIInputMode, "SetUIInputMode" }, // 737698635
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerController, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ChooseModelAction = { "ChooseModelAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerController, ChooseModelAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChooseModelAction_MetaData), NewProp_ChooseModelAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MyWidget = { "MyWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerController, MyWidget), Z_Construct_UClass_UMyUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyWidget_MetaData), NewProp_MyWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_xWidget = { "xWidget", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerController, xWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UMyUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_xWidget_MetaData), NewProp_xWidget_MetaData) };
void Z_Construct_UClass_AMyPlayerController_Statics::NewProp_openWidget_SetBit(void* Obj)
{
	((AMyPlayerController*)Obj)->openWidget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_openWidget = { "openWidget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPlayerController), &Z_Construct_UClass_AMyPlayerController_Statics::NewProp_openWidget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_openWidget_MetaData), NewProp_openWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_pM = { "pM", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerController, pM), Z_Construct_UClass_AShowModels_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pM_MetaData), NewProp_pM_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerController, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_CurrentCamera = { "CurrentCamera", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerController, CurrentCamera), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCamera_MetaData), NewProp_CurrentCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ChooseModelAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MyWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_xWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_openWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_pM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_CurrentCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Geo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerController_Statics::ClassParams = {
	&AMyPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPlayerController()
{
	if (!Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton, Z_Construct_UClass_AMyPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton;
}
template<> GEO_API UClass* StaticClass<AMyPlayerController>()
{
	return AMyPlayerController::StaticClass();
}
AMyPlayerController::AMyPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerController);
AMyPlayerController::~AMyPlayerController() {}
// End Class AMyPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerController, AMyPlayerController::StaticClass, TEXT("AMyPlayerController"), &Z_Registration_Info_UClass_AMyPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerController), 1434159265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyPlayerController_h_340338360(TEXT("/Script/Geo"),
	Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
