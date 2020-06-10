// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_TimeLimitStopCondition_generated_h
#error "TimeLimitStopCondition.generated.h already included, missing '#pragma once' in TimeLimitStopCondition.h"
#endif
#define RODENTVR_TimeLimitStopCondition_generated_h

#define RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTimeLimitSec); \
	DECLARE_FUNCTION(execGetTimeLimitSec);


#define RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTimeLimitSec); \
	DECLARE_FUNCTION(execGetTimeLimitSec);


#define RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeLimitStopCondition(); \
	friend struct Z_Construct_UClass_UTimeLimitStopCondition_Statics; \
public: \
	DECLARE_CLASS(UTimeLimitStopCondition, UStopCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UTimeLimitStopCondition)


#define RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTimeLimitStopCondition(); \
	friend struct Z_Construct_UClass_UTimeLimitStopCondition_Statics; \
public: \
	DECLARE_CLASS(UTimeLimitStopCondition, UStopCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UTimeLimitStopCondition)


#define RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeLimitStopCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeLimitStopCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeLimitStopCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeLimitStopCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeLimitStopCondition(UTimeLimitStopCondition&&); \
	NO_API UTimeLimitStopCondition(const UTimeLimitStopCondition&); \
public:


#define RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeLimitStopCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeLimitStopCondition(UTimeLimitStopCondition&&); \
	NO_API UTimeLimitStopCondition(const UTimeLimitStopCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeLimitStopCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeLimitStopCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeLimitStopCondition)


#define RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeLimitSec() { return STRUCT_OFFSET(UTimeLimitStopCondition, TimeLimitSec); }


#define RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_13_PROLOG
#define RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_INCLASS \
	RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UTimeLimitStopCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_StopConditions_TimeLimitStopCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
