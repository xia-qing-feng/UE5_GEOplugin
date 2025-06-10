// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShowModels.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
enum class EMyRotate : int32;
struct FKey;
#ifdef GEO_ShowModels_generated_h
#error "ShowModels.generated.h already included, missing '#pragma once' in ShowModels.h"
#endif
#define GEO_ShowModels_generated_h

#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSmoothMesh); \
	DECLARE_FUNCTION(execBindOnclick); \
	DECLARE_FUNCTION(execUpdateMesh); \
	DECLARE_FUNCTION(execSetMeshRotate); \
	DECLARE_FUNCTION(execSetMeshScale);


#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShowModels(); \
	friend struct Z_Construct_UClass_AShowModels_Statics; \
public: \
	DECLARE_CLASS(AShowModels, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Geo"), NO_API) \
	DECLARE_SERIALIZER(AShowModels)


#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShowModels(AShowModels&&); \
	AShowModels(const AShowModels&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShowModels); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShowModels); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShowModels) \
	NO_API virtual ~AShowModels();


#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h_21_PROLOG
#define FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h_24_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEO_API UClass* StaticClass<class AShowModels>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_QFGeo_Plugins_Geo_Source_Geo_Public_ShowModels_h


#define FOREACH_ENUM_EMYROTATE(op) \
	op(EMyRotate::pitch) \
	op(EMyRotate::yaw) \
	op(EMyRotate::roll) 

enum class EMyRotate;
template<> struct TIsUEnumClass<EMyRotate> { enum { Value = true }; };
template<> GEO_API UEnum* StaticEnum<EMyRotate>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
