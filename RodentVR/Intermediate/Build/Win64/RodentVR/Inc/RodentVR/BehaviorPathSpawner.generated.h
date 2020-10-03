// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
class ABehaviorPathNodeObject;
class UObject;
class UBehaviorSnapshot;
struct FVector;
#ifdef RODENTVR_BehaviorPathSpawner_generated_h
#error "BehaviorPathSpawner.generated.h already included, missing '#pragma once' in BehaviorPathSpawner.h"
#endif
#define RODENTVR_BehaviorPathSpawner_generated_h

#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearPathFromWorld); \
	DECLARE_FUNCTION(execGetSpawnedPathActors); \
	DECLARE_FUNCTION(execSpawnBehaviorPath);


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearPathFromWorld); \
	DECLARE_FUNCTION(execGetSpawnedPathActors); \
	DECLARE_FUNCTION(execSpawnBehaviorPath);


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviorPathSpawner(); \
	friend struct Z_Construct_UClass_UBehaviorPathSpawner_Statics; \
public: \
	DECLARE_CLASS(UBehaviorPathSpawner, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorPathSpawner)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorPathSpawner(); \
	friend struct Z_Construct_UClass_UBehaviorPathSpawner_Statics; \
public: \
	DECLARE_CLASS(UBehaviorPathSpawner, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorPathSpawner)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorPathSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorPathSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorPathSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorPathSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorPathSpawner(UBehaviorPathSpawner&&); \
	NO_API UBehaviorPathSpawner(const UBehaviorPathSpawner&); \
public:


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorPathSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorPathSpawner(UBehaviorPathSpawner&&); \
	NO_API UBehaviorPathSpawner(const UBehaviorPathSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorPathSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorPathSpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorPathSpawner)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_13_PROLOG
#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_INCLASS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UBehaviorPathSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorPathSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
