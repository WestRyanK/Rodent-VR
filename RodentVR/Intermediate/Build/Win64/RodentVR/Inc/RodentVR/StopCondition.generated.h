// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_StopCondition_generated_h
#error "StopCondition.generated.h already included, missing '#pragma once' in StopCondition.h"
#endif
#define RODENTVR_StopCondition_generated_h

#define RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetConditionType);


#define RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetConditionType);


#define RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStopCondition(); \
	friend struct Z_Construct_UClass_UStopCondition_Statics; \
public: \
	DECLARE_CLASS(UStopCondition, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UStopCondition)


#define RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUStopCondition(); \
	friend struct Z_Construct_UClass_UStopCondition_Statics; \
public: \
	DECLARE_CLASS(UStopCondition, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UStopCondition)


#define RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStopCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStopCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStopCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStopCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStopCondition(UStopCondition&&); \
	NO_API UStopCondition(const UStopCondition&); \
public:


#define RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStopCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStopCondition(UStopCondition&&); \
	NO_API UStopCondition(const UStopCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStopCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStopCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStopCondition)


#define RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ConditionType() { return STRUCT_OFFSET(UStopCondition, ConditionType); }


#define RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_13_PROLOG
#define RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_INCLASS \
	RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UStopCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_StopConditions_StopCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
