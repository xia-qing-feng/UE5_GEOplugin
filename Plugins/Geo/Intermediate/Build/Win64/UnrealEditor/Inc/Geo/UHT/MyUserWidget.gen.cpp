// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Geo/Public/MyUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUserWidget() {}

// Begin Cross Module References
ADVANCEDWIDGETS_API UClass* Z_Construct_UClass_URadialSlider_NoRegister();
GEO_API UClass* Z_Construct_UClass_AShowModels_NoRegister();
GEO_API UClass* Z_Construct_UClass_UMyUserWidget();
GEO_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
GEO_API UEnum* Z_Construct_UEnum_Geo_EMyRotate();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
UMG_API UClass* Z_Construct_UClass_USpinBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Geo();
// End Cross Module References

// Begin Class UMyUserWidget Function Chamfer
struct Z_Construct_UFunction_UMyUserWidget_Chamfer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_Chamfer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "Chamfer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_Chamfer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_Chamfer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyUserWidget_Chamfer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_Chamfer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget::execChamfer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Chamfer();
	P_NATIVE_END;
}
// End Class UMyUserWidget Function Chamfer

// Begin Class UMyUserWidget Function OpenFolder
struct Z_Construct_UFunction_UMyUserWidget_OpenFolder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_OpenFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "OpenFolder", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_OpenFolder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_OpenFolder_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyUserWidget_OpenFolder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_OpenFolder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget::execOpenFolder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenFolder();
	P_NATIVE_END;
}
// End Class UMyUserWidget Function OpenFolder

// Begin Class UMyUserWidget Function SetTargetModel
struct Z_Construct_UFunction_UMyUserWidget_SetTargetModel_Statics
{
	struct MyUserWidget_eventSetTargetModel_Parms
	{
		AShowModels* pm;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyUserWidget_SetTargetModel_Statics::NewProp_pm = { "pm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyUserWidget_eventSetTargetModel_Parms, pm), Z_Construct_UClass_AShowModels_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyUserWidget_SetTargetModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserWidget_SetTargetModel_Statics::NewProp_pm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SetTargetModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_SetTargetModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "SetTargetModel", nullptr, nullptr, Z_Construct_UFunction_UMyUserWidget_SetTargetModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SetTargetModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyUserWidget_SetTargetModel_Statics::MyUserWidget_eventSetTargetModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SetTargetModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_SetTargetModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyUserWidget_SetTargetModel_Statics::MyUserWidget_eventSetTargetModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyUserWidget_SetTargetModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_SetTargetModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget::execSetTargetModel)
{
	P_GET_OBJECT(AShowModels,Z_Param_pm);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetModel(Z_Param_pm);
	P_NATIVE_END;
}
// End Class UMyUserWidget Function SetTargetModel

// Begin Class UMyUserWidget Function Simplify
struct Z_Construct_UFunction_UMyUserWidget_Simplify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_Simplify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "Simplify", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_Simplify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_Simplify_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyUserWidget_Simplify()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_Simplify_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget::execSimplify)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Simplify();
	P_NATIVE_END;
}
// End Class UMyUserWidget Function Simplify

// Begin Class UMyUserWidget Function SliderChangedRotation
struct Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics
{
	struct MyUserWidget_eventSliderChangedRotation_Parms
	{
		float Value;
		EMyRotate curRotate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_curRotate_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_curRotate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyUserWidget_eventSliderChangedRotation_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::NewProp_curRotate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::NewProp_curRotate = { "curRotate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyUserWidget_eventSliderChangedRotation_Parms, curRotate), Z_Construct_UEnum_Geo_EMyRotate, METADATA_PARAMS(0, nullptr) }; // 1646411713
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::NewProp_curRotate_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::NewProp_curRotate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "SliderChangedRotation", nullptr, nullptr, Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::MyUserWidget_eventSliderChangedRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::MyUserWidget_eventSliderChangedRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget::execSliderChangedRotation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_ENUM(EMyRotate,Z_Param_curRotate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SliderChangedRotation(Z_Param_Value,EMyRotate(Z_Param_curRotate));
	P_NATIVE_END;
}
// End Class UMyUserWidget Function SliderChangedRotation

// Begin Class UMyUserWidget Function SliderChangedSize
struct Z_Construct_UFunction_UMyUserWidget_SliderChangedSize_Statics
{
	struct MyUserWidget_eventSliderChangedSize_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY()\n//UMyFileOpen* FileOpentool;\n" },
#endif
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY()\nUMyFileOpen* FileOpentool;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyUserWidget_SliderChangedSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyUserWidget_eventSliderChangedSize_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyUserWidget_SliderChangedSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserWidget_SliderChangedSize_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangedSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_SliderChangedSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "SliderChangedSize", nullptr, nullptr, Z_Construct_UFunction_UMyUserWidget_SliderChangedSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangedSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyUserWidget_SliderChangedSize_Statics::MyUserWidget_eventSliderChangedSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangedSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_SliderChangedSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyUserWidget_SliderChangedSize_Statics::MyUserWidget_eventSliderChangedSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyUserWidget_SliderChangedSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_SliderChangedSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget::execSliderChangedSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SliderChangedSize(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMyUserWidget Function SliderChangedSize

// Begin Class UMyUserWidget Function SliderChangeRotP
struct Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP_Statics
{
	struct MyUserWidget_eventSliderChangeRotP_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyUserWidget_eventSliderChangeRotP_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "SliderChangeRotP", nullptr, nullptr, Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP_Statics::MyUserWidget_eventSliderChangeRotP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP_Statics::MyUserWidget_eventSliderChangeRotP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget::execSliderChangeRotP)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SliderChangeRotP(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMyUserWidget Function SliderChangeRotP

// Begin Class UMyUserWidget Function SliderChangeRotR
struct Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR_Statics
{
	struct MyUserWidget_eventSliderChangeRotR_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyUserWidget_eventSliderChangeRotR_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "SliderChangeRotR", nullptr, nullptr, Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR_Statics::MyUserWidget_eventSliderChangeRotR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR_Statics::MyUserWidget_eventSliderChangeRotR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget::execSliderChangeRotR)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SliderChangeRotR(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMyUserWidget Function SliderChangeRotR

// Begin Class UMyUserWidget Function SliderChangeRotY
struct Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY_Statics
{
	struct MyUserWidget_eventSliderChangeRotY_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyUserWidget_eventSliderChangeRotY_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "SliderChangeRotY", nullptr, nullptr, Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY_Statics::MyUserWidget_eventSliderChangeRotY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY_Statics::MyUserWidget_eventSliderChangeRotY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget::execSliderChangeRotY)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SliderChangeRotY(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMyUserWidget Function SliderChangeRotY

// Begin Class UMyUserWidget Function Smooth
struct Z_Construct_UFunction_UMyUserWidget_Smooth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_Smooth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "Smooth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_Smooth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_Smooth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyUserWidget_Smooth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_Smooth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget::execSmooth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Smooth();
	P_NATIVE_END;
}
// End Class UMyUserWidget Function Smooth

// Begin Class UMyUserWidget Function Subdivide
struct Z_Construct_UFunction_UMyUserWidget_Subdivide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_Subdivide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "Subdivide", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_Subdivide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_Subdivide_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyUserWidget_Subdivide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_Subdivide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget::execSubdivide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Subdivide();
	P_NATIVE_END;
}
// End Class UMyUserWidget Function Subdivide

// Begin Class UMyUserWidget
void UMyUserWidget::StaticRegisterNativesUMyUserWidget()
{
	UClass* Class = UMyUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Chamfer", &UMyUserWidget::execChamfer },
		{ "OpenFolder", &UMyUserWidget::execOpenFolder },
		{ "SetTargetModel", &UMyUserWidget::execSetTargetModel },
		{ "Simplify", &UMyUserWidget::execSimplify },
		{ "SliderChangedRotation", &UMyUserWidget::execSliderChangedRotation },
		{ "SliderChangedSize", &UMyUserWidget::execSliderChangedSize },
		{ "SliderChangeRotP", &UMyUserWidget::execSliderChangeRotP },
		{ "SliderChangeRotR", &UMyUserWidget::execSliderChangeRotR },
		{ "SliderChangeRotY", &UMyUserWidget::execSliderChangeRotY },
		{ "Smooth", &UMyUserWidget::execSmooth },
		{ "Subdivide", &UMyUserWidget::execSubdivide },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyUserWidget);
UClass* Z_Construct_UClass_UMyUserWidget_NoRegister()
{
	return UMyUserWidget::StaticClass();
}
struct Z_Construct_UClass_UMyUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyUserWidget.h" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeSlider_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchSlider_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawSlider_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollSlider_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SB_Simple_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Simple_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SB_Smooth_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Smooth_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SB_subdiv_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_subdiv_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SB_Chamfer_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Chamfer_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdUMG\xcd\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YawSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RollSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FileButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SB_Simple;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Simple;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SB_Smooth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Smooth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SB_subdiv;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_subdiv;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SB_Chamfer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Chamfer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyUserWidget_Chamfer, "Chamfer" }, // 4103950250
		{ &Z_Construct_UFunction_UMyUserWidget_OpenFolder, "OpenFolder" }, // 1058689110
		{ &Z_Construct_UFunction_UMyUserWidget_SetTargetModel, "SetTargetModel" }, // 2017529750
		{ &Z_Construct_UFunction_UMyUserWidget_Simplify, "Simplify" }, // 1204994266
		{ &Z_Construct_UFunction_UMyUserWidget_SliderChangedRotation, "SliderChangedRotation" }, // 2203281203
		{ &Z_Construct_UFunction_UMyUserWidget_SliderChangedSize, "SliderChangedSize" }, // 2066596736
		{ &Z_Construct_UFunction_UMyUserWidget_SliderChangeRotP, "SliderChangeRotP" }, // 509575451
		{ &Z_Construct_UFunction_UMyUserWidget_SliderChangeRotR, "SliderChangeRotR" }, // 3725601850
		{ &Z_Construct_UFunction_UMyUserWidget_SliderChangeRotY, "SliderChangeRotY" }, // 2696695799
		{ &Z_Construct_UFunction_UMyUserWidget_Smooth, "Smooth" }, // 916154777
		{ &Z_Construct_UFunction_UMyUserWidget_Subdivide, "Subdivide" }, // 1924858256
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_SizeSlider = { "SizeSlider", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, SizeSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeSlider_MetaData), NewProp_SizeSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_PitchSlider = { "PitchSlider", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, PitchSlider), Z_Construct_UClass_URadialSlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchSlider_MetaData), NewProp_PitchSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_YawSlider = { "YawSlider", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, YawSlider), Z_Construct_UClass_URadialSlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawSlider_MetaData), NewProp_YawSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_RollSlider = { "RollSlider", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, RollSlider), Z_Construct_UClass_URadialSlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollSlider_MetaData), NewProp_RollSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_FileButton = { "FileButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, FileButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileButton_MetaData), NewProp_FileButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_SB_Simple = { "SB_Simple", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, SB_Simple), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SB_Simple_MetaData), NewProp_SB_Simple_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_Button_Simple = { "Button_Simple", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, Button_Simple), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Simple_MetaData), NewProp_Button_Simple_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_SB_Smooth = { "SB_Smooth", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, SB_Smooth), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SB_Smooth_MetaData), NewProp_SB_Smooth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_Button_Smooth = { "Button_Smooth", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, Button_Smooth), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Smooth_MetaData), NewProp_Button_Smooth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_SB_subdiv = { "SB_subdiv", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, SB_subdiv), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SB_subdiv_MetaData), NewProp_SB_subdiv_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_Button_subdiv = { "Button_subdiv", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, Button_subdiv), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_subdiv_MetaData), NewProp_Button_subdiv_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_SB_Chamfer = { "SB_Chamfer", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, SB_Chamfer), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SB_Chamfer_MetaData), NewProp_SB_Chamfer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_Button_Chamfer = { "Button_Chamfer", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, Button_Chamfer), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Chamfer_MetaData), NewProp_Button_Chamfer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_TargetModel = { "TargetModel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, TargetModel), Z_Construct_UClass_AShowModels_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetModel_MetaData), NewProp_TargetModel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_SizeSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_PitchSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_YawSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_RollSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_FileButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_SB_Simple,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_Button_Simple,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_SB_Smooth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_Button_Smooth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_SB_subdiv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_Button_subdiv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_SB_Chamfer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_Button_Chamfer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_TargetModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Geo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyUserWidget_Statics::ClassParams = {
	&UMyUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyUserWidget()
{
	if (!Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton, Z_Construct_UClass_UMyUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton;
}
template<> GEO_API UClass* StaticClass<UMyUserWidget>()
{
	return UMyUserWidget::StaticClass();
}
UMyUserWidget::UMyUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyUserWidget);
UMyUserWidget::~UMyUserWidget() {}
// End Class UMyUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyUserWidget, UMyUserWidget::StaticClass, TEXT("UMyUserWidget"), &Z_Registration_Info_UClass_UMyUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyUserWidget), 2840995358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyUserWidget_h_1368976938(TEXT("/Script/Geo"),
	Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
