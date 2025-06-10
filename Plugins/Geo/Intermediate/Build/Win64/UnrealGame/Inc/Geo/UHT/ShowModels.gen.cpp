// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Geo/Public/ShowModels.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShowModels() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
GEO_API UClass* Z_Construct_UClass_AShowModels();
GEO_API UClass* Z_Construct_UClass_AShowModels_NoRegister();
GEO_API UEnum* Z_Construct_UEnum_Geo_EMyRotate();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Geo();
// End Cross Module References

// Begin Enum EMyRotate
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMyRotate;
static UEnum* EMyRotate_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMyRotate.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMyRotate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Geo_EMyRotate, (UObject*)Z_Construct_UPackage__Script_Geo(), TEXT("EMyRotate"));
	}
	return Z_Registration_Info_UEnum_EMyRotate.OuterSingleton;
}
template<> GEO_API UEnum* StaticEnum<EMyRotate>()
{
	return EMyRotate_StaticEnum();
}
struct Z_Construct_UEnum_Geo_EMyRotate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShowModels.h" },
		{ "pitch.Name", "EMyRotate::pitch" },
		{ "roll.Name", "EMyRotate::roll" },
		{ "yaw.Name", "EMyRotate::yaw" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMyRotate::pitch", (int64)EMyRotate::pitch },
		{ "EMyRotate::yaw", (int64)EMyRotate::yaw },
		{ "EMyRotate::roll", (int64)EMyRotate::roll },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Geo_EMyRotate_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Geo,
	nullptr,
	"EMyRotate",
	"EMyRotate",
	Z_Construct_UEnum_Geo_EMyRotate_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Geo_EMyRotate_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Geo_EMyRotate_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Geo_EMyRotate_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Geo_EMyRotate()
{
	if (!Z_Registration_Info_UEnum_EMyRotate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMyRotate.InnerSingleton, Z_Construct_UEnum_Geo_EMyRotate_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMyRotate.InnerSingleton;
}
// End Enum EMyRotate

// Begin Class AShowModels Function BindOnclick
struct Z_Construct_UFunction_AShowModels_BindOnclick_Statics
{
	struct ShowModels_eventBindOnclick_Parms
	{
		UPrimitiveComponent* ClickedComp;
		FKey ButtonPressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShowModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShowModels_BindOnclick_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShowModels_eventBindOnclick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedComp_MetaData), NewProp_ClickedComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShowModels_BindOnclick_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShowModels_eventBindOnclick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShowModels_BindOnclick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShowModels_BindOnclick_Statics::NewProp_ClickedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShowModels_BindOnclick_Statics::NewProp_ButtonPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_BindOnclick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShowModels_BindOnclick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShowModels, nullptr, "BindOnclick", nullptr, nullptr, Z_Construct_UFunction_AShowModels_BindOnclick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_BindOnclick_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShowModels_BindOnclick_Statics::ShowModels_eventBindOnclick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_BindOnclick_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShowModels_BindOnclick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AShowModels_BindOnclick_Statics::ShowModels_eventBindOnclick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShowModels_BindOnclick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShowModels_BindOnclick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShowModels::execBindOnclick)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp);
	P_GET_STRUCT(FKey,Z_Param_ButtonPressed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindOnclick(Z_Param_ClickedComp,Z_Param_ButtonPressed);
	P_NATIVE_END;
}
// End Class AShowModels Function BindOnclick

// Begin Class AShowModels Function SetMeshRotate
struct Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics
{
	struct ShowModels_eventSetMeshRotate_Parms
	{
		float ModelSize;
		EMyRotate curRot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShowModels.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModelSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_curRot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_curRot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::NewProp_ModelSize = { "ModelSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShowModels_eventSetMeshRotate_Parms, ModelSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::NewProp_curRot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::NewProp_curRot = { "curRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShowModels_eventSetMeshRotate_Parms, curRot), Z_Construct_UEnum_Geo_EMyRotate, METADATA_PARAMS(0, nullptr) }; // 1646411713
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::NewProp_ModelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::NewProp_curRot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::NewProp_curRot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShowModels, nullptr, "SetMeshRotate", nullptr, nullptr, Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::ShowModels_eventSetMeshRotate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::ShowModels_eventSetMeshRotate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShowModels_SetMeshRotate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShowModels_SetMeshRotate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShowModels::execSetMeshRotate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ModelSize);
	P_GET_ENUM(EMyRotate,Z_Param_curRot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMeshRotate(Z_Param_ModelSize,EMyRotate(Z_Param_curRot));
	P_NATIVE_END;
}
// End Class AShowModels Function SetMeshRotate

// Begin Class AShowModels Function SetMeshScale
struct Z_Construct_UFunction_AShowModels_SetMeshScale_Statics
{
	struct ShowModels_eventSetMeshScale_Parms
	{
		FVector ModelSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShowModels.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModelSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShowModels_SetMeshScale_Statics::NewProp_ModelSize = { "ModelSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShowModels_eventSetMeshScale_Parms, ModelSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShowModels_SetMeshScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShowModels_SetMeshScale_Statics::NewProp_ModelSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_SetMeshScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShowModels_SetMeshScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShowModels, nullptr, "SetMeshScale", nullptr, nullptr, Z_Construct_UFunction_AShowModels_SetMeshScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_SetMeshScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShowModels_SetMeshScale_Statics::ShowModels_eventSetMeshScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_SetMeshScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShowModels_SetMeshScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AShowModels_SetMeshScale_Statics::ShowModels_eventSetMeshScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShowModels_SetMeshScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShowModels_SetMeshScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShowModels::execSetMeshScale)
{
	P_GET_STRUCT(FVector,Z_Param_ModelSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMeshScale(Z_Param_ModelSize);
	P_NATIVE_END;
}
// End Class AShowModels Function SetMeshScale

// Begin Class AShowModels Function SmoothMesh
struct Z_Construct_UFunction_AShowModels_SmoothMesh_Statics
{
	struct ShowModels_eventSmoothMesh_Parms
	{
		FString fp;
		int32 val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShowModels.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_fp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AShowModels_SmoothMesh_Statics::NewProp_fp = { "fp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShowModels_eventSmoothMesh_Parms, fp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShowModels_SmoothMesh_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShowModels_eventSmoothMesh_Parms, val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShowModels_SmoothMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShowModels_SmoothMesh_Statics::NewProp_fp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShowModels_SmoothMesh_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_SmoothMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShowModels_SmoothMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShowModels, nullptr, "SmoothMesh", nullptr, nullptr, Z_Construct_UFunction_AShowModels_SmoothMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_SmoothMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShowModels_SmoothMesh_Statics::ShowModels_eventSmoothMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_SmoothMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShowModels_SmoothMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AShowModels_SmoothMesh_Statics::ShowModels_eventSmoothMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShowModels_SmoothMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShowModels_SmoothMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShowModels::execSmoothMesh)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_fp);
	P_GET_PROPERTY(FIntProperty,Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SmoothMesh(Z_Param_fp,Z_Param_val);
	P_NATIVE_END;
}
// End Class AShowModels Function SmoothMesh

// Begin Class AShowModels Function UpdateMesh
struct Z_Construct_UFunction_AShowModels_UpdateMesh_Statics
{
	struct ShowModels_eventUpdateMesh_Parms
	{
		FString fp;
		bool isCreating;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShowModels.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_fp;
	static void NewProp_isCreating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isCreating;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::NewProp_fp = { "fp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShowModels_eventUpdateMesh_Parms, fp), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::NewProp_isCreating_SetBit(void* Obj)
{
	((ShowModels_eventUpdateMesh_Parms*)Obj)->isCreating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::NewProp_isCreating = { "isCreating", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ShowModels_eventUpdateMesh_Parms), &Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::NewProp_isCreating_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::NewProp_fp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::NewProp_isCreating,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShowModels, nullptr, "UpdateMesh", nullptr, nullptr, Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::ShowModels_eventUpdateMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::ShowModels_eventUpdateMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShowModels_UpdateMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShowModels_UpdateMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShowModels::execUpdateMesh)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_fp);
	P_GET_UBOOL(Z_Param_isCreating);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMesh(Z_Param_fp,Z_Param_isCreating);
	P_NATIVE_END;
}
// End Class AShowModels Function UpdateMesh

// Begin Class AShowModels
void AShowModels::StaticRegisterNativesAShowModels()
{
	UClass* Class = AShowModels::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindOnclick", &AShowModels::execBindOnclick },
		{ "SetMeshRotate", &AShowModels::execSetMeshRotate },
		{ "SetMeshScale", &AShowModels::execSetMeshScale },
		{ "SmoothMesh", &AShowModels::execSmoothMesh },
		{ "UpdateMesh", &AShowModels::execUpdateMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShowModels);
UClass* Z_Construct_UClass_AShowModels_NoRegister()
{
	return AShowModels::StaticClass();
}
struct Z_Construct_UClass_AShowModels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ShowModels.h" },
		{ "ModuleRelativePath", "Public/ShowModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PMC_MetaData[] = {
		{ "Category", "ShowModels" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShowModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PMCPreRot_MetaData[] = {
		{ "Category", "ShowModels" },
		{ "ModuleRelativePath", "Public/ShowModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshSectionNums_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowModels.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PMC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PMCPreRot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeshSectionNums;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShowModels_BindOnclick, "BindOnclick" }, // 2462108525
		{ &Z_Construct_UFunction_AShowModels_SetMeshRotate, "SetMeshRotate" }, // 2027121402
		{ &Z_Construct_UFunction_AShowModels_SetMeshScale, "SetMeshScale" }, // 1021756853
		{ &Z_Construct_UFunction_AShowModels_SmoothMesh, "SmoothMesh" }, // 870179382
		{ &Z_Construct_UFunction_AShowModels_UpdateMesh, "UpdateMesh" }, // 127399757
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShowModels>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShowModels_Statics::NewProp_PMC = { "PMC", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShowModels, PMC), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PMC_MetaData), NewProp_PMC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShowModels_Statics::NewProp_PMCPreRot = { "PMCPreRot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShowModels, PMCPreRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PMCPreRot_MetaData), NewProp_PMCPreRot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShowModels_Statics::NewProp_MeshSectionNums = { "MeshSectionNums", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShowModels, MeshSectionNums), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshSectionNums_MetaData), NewProp_MeshSectionNums_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShowModels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShowModels_Statics::NewProp_PMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShowModels_Statics::NewProp_PMCPreRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShowModels_Statics::NewProp_MeshSectionNums,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShowModels_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShowModels_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Geo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShowModels_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShowModels_Statics::ClassParams = {
	&AShowModels::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShowModels_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShowModels_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShowModels_Statics::Class_MetaDataParams), Z_Construct_UClass_AShowModels_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShowModels()
{
	if (!Z_Registration_Info_UClass_AShowModels.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShowModels.OuterSingleton, Z_Construct_UClass_AShowModels_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShowModels.OuterSingleton;
}
template<> GEO_API UClass* StaticClass<AShowModels>()
{
	return AShowModels::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShowModels);
AShowModels::~AShowModels() {}
// End Class AShowModels

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMyRotate_StaticEnum, TEXT("EMyRotate"), &Z_Registration_Info_UEnum_EMyRotate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1646411713U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShowModels, AShowModels::StaticClass, TEXT("AShowModels"), &Z_Registration_Info_UClass_AShowModels, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShowModels), 1989198055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h_84390017(TEXT("/Script/Geo"),
	Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
