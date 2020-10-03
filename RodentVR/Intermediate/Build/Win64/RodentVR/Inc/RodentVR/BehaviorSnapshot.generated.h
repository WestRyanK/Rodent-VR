// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UBehaviorSnapshot;
#ifdef RODENTVR_BehaviorSnapshot_generated_h
#error "BehaviorSnapshot.generated.h already included, missing '#pragma once' in BehaviorSnapshot.h"
#endif
#define RODENTVR_BehaviorSnapshot_generated_h

#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentRegion); \
	DECLARE_FUNCTION(execGetForward); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execCreateBehaviorSnapshot);


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentRegion); \
	DECLARE_FUNCTION(execGetForward); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execCreateBehaviorSnapshot);


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviorSnapshot(); \
	friend struct Z_Construct_UClass_UBehaviorSnapshot_Statics; \
public: \
	DECLARE_CLASS(UBehaviorSnapshot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorSnapshot)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorSnapshot(); \
	friend struct Z_Construct_UClass_UBehaviorSnapshot_Statics; \
public: \
	DECLARE_CLASS(UBehaviorSnapshot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorSnapshot)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorSnapshot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorSnapshot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorSnapshot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorSnapshot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorSnapshot(UBehaviorSnapshot&&); \
	NO_API UBehaviorSnapshot(const UBehaviorSnapshot&); \
public:


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorSnapshot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorSnapshot(UBehaviorSnapshot&&); \
	NO_API UBehaviorSnapshot(const UBehaviorSnapshot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorSnapshot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorSnapshot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorSnapshot)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Timestamp() { return STRUCT_OFFSET(UBehaviorSnapshot, Timestamp); } \
	FORCEINLINE static uint32 __PPO__Position() { return STRUCT_OFFSET(UBehaviorSnapshot, Position); } \
	FORCEINLINE static uint32 __PPO__Forward() { return STRUCT_OFFSET(UBehaviorSnapshot, Forward); } \
	FORCEINLINE static uint32 __PPO__CurrentRegion() { return STRUCT_OFFSET(UBehaviorSnapshot, CurrentRegion); }


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_12_PROLOG
#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_INCLASS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UBehaviorSnapshot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorSnapshot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
