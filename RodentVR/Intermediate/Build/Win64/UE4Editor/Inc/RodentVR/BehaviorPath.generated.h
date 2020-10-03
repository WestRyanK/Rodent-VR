// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBehaviorSnapshot;
struct FTransform;
struct FLinearColor;
#ifdef RODENTVR_BehaviorPath_generated_h
#error "BehaviorPath.generated.h already included, missing '#pragma once' in BehaviorPath.h"
#endif
#define RODENTVR_BehaviorPath_generated_h

#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTransformFromSnapshot); \
	DECLARE_FUNCTION(execInitPathMaterial); \
	DECLARE_FUNCTION(execUpdatePath); \
	DECLARE_FUNCTION(execSetIsPathVisible); \
	DECLARE_FUNCTION(execGetIsPathVisible); \
	DECLARE_FUNCTION(execSetPathColor); \
	DECLARE_FUNCTION(execGetPathColor); \
	DECLARE_FUNCTION(execSetPathWidth); \
	DECLARE_FUNCTION(execGetPathWidth); \
	DECLARE_FUNCTION(execSetSnapshots); \
	DECLARE_FUNCTION(execGetSnapshots);


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTransformFromSnapshot); \
	DECLARE_FUNCTION(execInitPathMaterial); \
	DECLARE_FUNCTION(execUpdatePath); \
	DECLARE_FUNCTION(execSetIsPathVisible); \
	DECLARE_FUNCTION(execGetIsPathVisible); \
	DECLARE_FUNCTION(execSetPathColor); \
	DECLARE_FUNCTION(execGetPathColor); \
	DECLARE_FUNCTION(execSetPathWidth); \
	DECLARE_FUNCTION(execGetPathWidth); \
	DECLARE_FUNCTION(execSetSnapshots); \
	DECLARE_FUNCTION(execGetSnapshots);


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABehaviorPath(); \
	friend struct Z_Construct_UClass_ABehaviorPath_Statics; \
public: \
	DECLARE_CLASS(ABehaviorPath, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(ABehaviorPath)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABehaviorPath(); \
	friend struct Z_Construct_UClass_ABehaviorPath_Statics; \
public: \
	DECLARE_CLASS(ABehaviorPath, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(ABehaviorPath)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABehaviorPath(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABehaviorPath) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABehaviorPath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABehaviorPath); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABehaviorPath(ABehaviorPath&&); \
	NO_API ABehaviorPath(const ABehaviorPath&); \
public:


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABehaviorPath(ABehaviorPath&&); \
	NO_API ABehaviorPath(const ABehaviorPath&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABehaviorPath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABehaviorPath); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABehaviorPath)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PathMaterial() { return STRUCT_OFFSET(ABehaviorPath, PathMaterial); } \
	FORCEINLINE static uint32 __PPO__BehaviorPathNodesInstances() { return STRUCT_OFFSET(ABehaviorPath, BehaviorPathNodesInstances); }


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_13_PROLOG
#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_INCLASS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class ABehaviorPath>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPath_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
