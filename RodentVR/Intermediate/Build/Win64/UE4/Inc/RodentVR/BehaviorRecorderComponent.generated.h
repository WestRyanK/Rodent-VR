// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URegionSettings;
#ifdef RODENTVR_BehaviorRecorderComponent_generated_h
#error "BehaviorRecorderComponent.generated.h already included, missing '#pragma once' in BehaviorRecorderComponent.h"
#endif
#define RODENTVR_BehaviorRecorderComponent_generated_h

#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddDelegates); \
	DECLARE_FUNCTION(execRemoveDelegates); \
	DECLARE_FUNCTION(execOnMazeFinished); \
	DECLARE_FUNCTION(execOnMazeLoaded); \
	DECLARE_FUNCTION(execOnRegionEnter); \
	DECLARE_FUNCTION(execSave);


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddDelegates); \
	DECLARE_FUNCTION(execRemoveDelegates); \
	DECLARE_FUNCTION(execOnMazeFinished); \
	DECLARE_FUNCTION(execOnMazeLoaded); \
	DECLARE_FUNCTION(execOnRegionEnter); \
	DECLARE_FUNCTION(execSave);


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviorRecorderComponent(); \
	friend struct Z_Construct_UClass_UBehaviorRecorderComponent_Statics; \
public: \
	DECLARE_CLASS(UBehaviorRecorderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorRecorderComponent)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorRecorderComponent(); \
	friend struct Z_Construct_UClass_UBehaviorRecorderComponent_Statics; \
public: \
	DECLARE_CLASS(UBehaviorRecorderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorRecorderComponent)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorRecorderComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorRecorderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorRecorderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorRecorderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorRecorderComponent(UBehaviorRecorderComponent&&); \
	NO_API UBehaviorRecorderComponent(const UBehaviorRecorderComponent&); \
public:


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorRecorderComponent(UBehaviorRecorderComponent&&); \
	NO_API UBehaviorRecorderComponent(const UBehaviorRecorderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorRecorderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorRecorderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBehaviorRecorderComponent)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_12_PROLOG
#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_INCLASS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UBehaviorRecorderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
