// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AShowModels;
enum class EMyRotate : int32;
#ifdef GEO_MyUserWidget_generated_h
#error "MyUserWidget.generated.h already included, missing '#pragma once' in MyUserWidget.h"
#endif
#define GEO_MyUserWidget_generated_h

#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyUserWidget_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTargetModel); \
	DECLARE_FUNCTION(execOpenFolder); \
	DECLARE_FUNCTION(execSliderChangeRotR); \
	DECLARE_FUNCTION(execSliderChangeRotY); \
	DECLARE_FUNCTION(execSliderChangeRotP); \
	DECLARE_FUNCTION(execSliderChangedRotation); \
	DECLARE_FUNCTION(execSliderChangedSize);


#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyUserWidget_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyUserWidget(); \
	friend struct Z_Construct_UClass_UMyUserWidget_Statics; \
public: \
	DECLARE_CLASS(UMyUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Geo"), NO_API) \
	DECLARE_SERIALIZER(UMyUserWidget)


#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyUserWidget_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyUserWidget(UMyUserWidget&&); \
	UMyUserWidget(const UMyUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyUserWidget) \
	NO_API virtual ~UMyUserWidget();


#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyUserWidget_h_24_PROLOG
#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyUserWidget_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyUserWidget_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyUserWidget_h_27_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyUserWidget_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEO_API UClass* StaticClass<class UMyUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
