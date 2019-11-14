// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_ToneGenerator_generated_h
#error "ToneGenerator.generated.h already included, missing '#pragma once' in ToneGenerator.h"
#endif
#define RODENTVR_ToneGenerator_generated_h

#define RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndTone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndTone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTimedSynth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DurationSec); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchHz); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTimedSynth(Z_Param_DurationSec,Z_Param_PitchHz,Z_Param_VolumeMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrequency) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FrequencyHz); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrequency(Z_Param_FrequencyHz); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndTone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndTone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTimedSynth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DurationSec); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchHz); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTimedSynth(Z_Param_DurationSec,Z_Param_PitchHz,Z_Param_VolumeMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrequency) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FrequencyHz); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrequency(Z_Param_FrequencyHz); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToneGenerator(); \
	friend struct Z_Construct_UClass_UToneGenerator_Statics; \
public: \
	DECLARE_CLASS(UToneGenerator, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UToneGenerator)


#define RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUToneGenerator(); \
	friend struct Z_Construct_UClass_UToneGenerator_Statics; \
public: \
	DECLARE_CLASS(UToneGenerator, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UToneGenerator)


#define RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToneGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToneGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToneGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToneGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToneGenerator(UToneGenerator&&); \
	NO_API UToneGenerator(const UToneGenerator&); \
public:


#define RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToneGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToneGenerator(UToneGenerator&&); \
	NO_API UToneGenerator(const UToneGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToneGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToneGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToneGenerator)


#define RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Private_ToneGenerator_h_18_PROLOG
#define RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_INCLASS \
	RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_ToneGenerator_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UToneGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_ToneGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
