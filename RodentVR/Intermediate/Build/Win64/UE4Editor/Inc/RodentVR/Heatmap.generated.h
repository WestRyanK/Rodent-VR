// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UColorGradient;
class AActor;
class UBehaviorSnapshot;
#ifdef RODENTVR_Heatmap_generated_h
#error "Heatmap.generated.h already included, missing '#pragma once' in Heatmap.h"
#endif
#define RODENTVR_Heatmap_generated_h

#define RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitHeatmapMaterial); \
	DECLARE_FUNCTION(execUpdateHeatmap); \
	DECLARE_FUNCTION(execSetColorGradient); \
	DECLARE_FUNCTION(execGetColorGradient); \
	DECLARE_FUNCTION(execSetIsHeatmapVisible); \
	DECLARE_FUNCTION(execGetIsHeatmapVisible); \
	DECLARE_FUNCTION(execSetMazeActor); \
	DECLARE_FUNCTION(execGetMazeActor); \
	DECLARE_FUNCTION(execSetBucketSize); \
	DECLARE_FUNCTION(execGetBucketSize); \
	DECLARE_FUNCTION(execSetSnapshots); \
	DECLARE_FUNCTION(execGetSnapshots);


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitHeatmapMaterial); \
	DECLARE_FUNCTION(execUpdateHeatmap); \
	DECLARE_FUNCTION(execSetColorGradient); \
	DECLARE_FUNCTION(execGetColorGradient); \
	DECLARE_FUNCTION(execSetIsHeatmapVisible); \
	DECLARE_FUNCTION(execGetIsHeatmapVisible); \
	DECLARE_FUNCTION(execSetMazeActor); \
	DECLARE_FUNCTION(execGetMazeActor); \
	DECLARE_FUNCTION(execSetBucketSize); \
	DECLARE_FUNCTION(execGetBucketSize); \
	DECLARE_FUNCTION(execSetSnapshots); \
	DECLARE_FUNCTION(execGetSnapshots);


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeatmap(); \
	friend struct Z_Construct_UClass_AHeatmap_Statics; \
public: \
	DECLARE_CLASS(AHeatmap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(AHeatmap)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAHeatmap(); \
	friend struct Z_Construct_UClass_AHeatmap_Statics; \
public: \
	DECLARE_CLASS(AHeatmap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(AHeatmap)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeatmap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeatmap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeatmap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeatmap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeatmap(AHeatmap&&); \
	NO_API AHeatmap(const AHeatmap&); \
public:


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeatmap(AHeatmap&&); \
	NO_API AHeatmap(const AHeatmap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeatmap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeatmap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeatmap)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HeatmapMaterial() { return STRUCT_OFFSET(AHeatmap, HeatmapMaterial); } \
	FORCEINLINE static uint32 __PPO__HeatmapMesh() { return STRUCT_OFFSET(AHeatmap, HeatmapMesh); }


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_13_PROLOG
#define RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_INCLASS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class AHeatmap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_BehaviorRecording_Heatmap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
