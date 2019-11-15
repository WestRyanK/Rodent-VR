// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_BehaviorRecorderComponent_generated_h
#error "BehaviorRecorderComponent.generated.h already included, missing '#pragma once' in BehaviorRecorderComponent.h"
#endif
#define RODENTVR_BehaviorRecorderComponent_generated_h

#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMazeFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMazeFinished(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMazeLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMazeLoaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRewardRegionEnter) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_RegionEnteredId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRewardRegionEnter(Z_Param_RegionEnteredId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSave) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Save(Z_Param_Filename); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMazeFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMazeFinished(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMazeLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMazeLoaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRewardRegionEnter) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_RegionEnteredId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRewardRegionEnter(Z_Param_RegionEnteredId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSave) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Save(Z_Param_Filename); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviorRecorderComponent(); \
	friend struct Z_Construct_UClass_UBehaviorRecorderComponent_Statics; \
public: \
	DECLARE_CLASS(UBehaviorRecorderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorRecorderComponent)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorRecorderComponent(); \
	friend struct Z_Construct_UClass_UBehaviorRecorderComponent_Statics; \
public: \
	DECLARE_CLASS(UBehaviorRecorderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorRecorderComponent)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_STANDARD_CONSTRUCTORS \
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


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorRecorderComponent(UBehaviorRecorderComponent&&); \
	NO_API UBehaviorRecorderComponent(const UBehaviorRecorderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorRecorderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorRecorderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBehaviorRecorderComponent)


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_11_PROLOG
#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_INCLASS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UBehaviorRecorderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_BehaviorRecording_BehaviorRecorderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
