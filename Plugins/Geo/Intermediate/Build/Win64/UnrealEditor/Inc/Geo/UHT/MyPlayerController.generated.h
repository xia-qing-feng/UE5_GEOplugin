// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEO_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define GEO_MyPlayerController_generated_h

#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyPlayerController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUIInputMode); \
	DECLARE_FUNCTION(execCreateGeoUI);


#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyPlayerController_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Geo"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyPlayerController_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyPlayerController(AMyPlayerController&&); \
	AMyPlayerController(const AMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController) \
	NO_API virtual ~AMyPlayerController();


#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyPlayerController_h_19_PROLOG
#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyPlayerController_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyPlayerController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyPlayerController_h_22_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyPlayerController_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEO_API UClass* StaticClass<class AMyPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_MyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
