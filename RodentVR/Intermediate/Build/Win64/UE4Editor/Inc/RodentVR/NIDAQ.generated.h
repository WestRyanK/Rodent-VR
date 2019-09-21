// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_NIDAQ_generated_h
#error "NIDAQ.generated.h already included, missing '#pragma once' in NIDAQ.h"
#endif
#define RODENTVR_NIDAQ_generated_h

#define RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execinit_NIDAQ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNIDAQ::init_NIDAQ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcontrol_NIDAQ) \
	{ \
		P_GET_UBOOL(Z_Param_isOn); \
		P_GET_PROPERTY(UStrProperty,Z_Param_deviceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNIDAQ::control_NIDAQ(Z_Param_isOn,Z_Param_deviceName); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execinit_NIDAQ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNIDAQ::init_NIDAQ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcontrol_NIDAQ) \
	{ \
		P_GET_UBOOL(Z_Param_isOn); \
		P_GET_PROPERTY(UStrProperty,Z_Param_deviceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNIDAQ::control_NIDAQ(Z_Param_isOn,Z_Param_deviceName); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNIDAQ(); \
	friend struct Z_Construct_UClass_UNIDAQ_Statics; \
public: \
	DECLARE_CLASS(UNIDAQ, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UNIDAQ)


#define RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUNIDAQ(); \
	friend struct Z_Construct_UClass_UNIDAQ_Statics; \
public: \
	DECLARE_CLASS(UNIDAQ, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UNIDAQ)


#define RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNIDAQ(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNIDAQ) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNIDAQ); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNIDAQ); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNIDAQ(UNIDAQ&&); \
	NO_API UNIDAQ(const UNIDAQ&); \
public:


#define RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNIDAQ(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNIDAQ(UNIDAQ&&); \
	NO_API UNIDAQ(const UNIDAQ&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNIDAQ); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNIDAQ); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNIDAQ)


#define RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Hardware_NIDAQ_h_14_PROLOG
#define RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_INCLASS \
	RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Hardware_NIDAQ_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UNIDAQ>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Hardware_NIDAQ_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
