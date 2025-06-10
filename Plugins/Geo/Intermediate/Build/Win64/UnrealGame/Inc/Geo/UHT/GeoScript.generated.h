// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeoScript.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEO_GeoScript_generated_h
#error "GeoScript.generated.h already included, missing '#pragma once' in GeoScript.h"
#endif
#define GEO_GeoScript_generated_h

#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_GeoScript_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGeoScript(); \
	friend struct Z_Construct_UClass_AGeoScript_Statics; \
public: \
	DECLARE_CLASS(AGeoScript, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Geo"), NO_API) \
	DECLARE_SERIALIZER(AGeoScript)


#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_GeoScript_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGeoScript(AGeoScript&&); \
	AGeoScript(const AGeoScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeoScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeoScript); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGeoScript) \
	NO_API virtual ~AGeoScript();


#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_GeoScript_h_13_PROLOG
#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_GeoScript_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_GeoScript_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_GeoScript_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEO_API UClass* StaticClass<class AGeoScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_GeoScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
