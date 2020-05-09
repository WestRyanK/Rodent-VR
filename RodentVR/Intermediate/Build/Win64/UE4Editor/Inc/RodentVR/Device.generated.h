// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_Device_generated_h
#error "Device.generated.h already included, missing '#pragma once' in Device.h"
#endif
#define RODENTVR_Device_generated_h

#define RodentVR_Source_RodentVR_Private_Settings_Device_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDevicePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDevicePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDeviceLine) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceLineValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDeviceLine(Z_Param_DeviceLineValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeviceLine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDeviceLine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDevicePort) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DevicePortValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDevicePort(Z_Param_DevicePortValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDevicePort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDevicePort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDeviceName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceNameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDeviceName(Z_Param_DeviceNameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeviceName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDeviceName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDeviceId) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceIdValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDeviceId(Z_Param_DeviceIdValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeviceId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDeviceId(); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_Settings_Device_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDevicePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDevicePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDeviceLine) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceLineValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDeviceLine(Z_Param_DeviceLineValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeviceLine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDeviceLine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDevicePort) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DevicePortValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDevicePort(Z_Param_DevicePortValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDevicePort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDevicePort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDeviceName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceNameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDeviceName(Z_Param_DeviceNameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeviceName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDeviceName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDeviceId) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceIdValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDeviceId(Z_Param_DeviceIdValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeviceId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDeviceId(); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_Settings_Device_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDevice(); \
	friend struct Z_Construct_UClass_UDevice_Statics; \
public: \
	DECLARE_CLASS(UDevice, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UDevice)


#define RodentVR_Source_RodentVR_Private_Settings_Device_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDevice(); \
	friend struct Z_Construct_UClass_UDevice_Statics; \
public: \
	DECLARE_CLASS(UDevice, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UDevice)


#define RodentVR_Source_RodentVR_Private_Settings_Device_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDevice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDevice) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDevice); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDevice); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDevice(UDevice&&); \
	NO_API UDevice(const UDevice&); \
public:


#define RodentVR_Source_RodentVR_Private_Settings_Device_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDevice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDevice(UDevice&&); \
	NO_API UDevice(const UDevice&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDevice); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDevice); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDevice)


#define RodentVR_Source_RodentVR_Private_Settings_Device_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DeviceId() { return STRUCT_OFFSET(UDevice, DeviceId); } \
	FORCEINLINE static uint32 __PPO__DeviceName() { return STRUCT_OFFSET(UDevice, DeviceName); } \
	FORCEINLINE static uint32 __PPO__DevicePort() { return STRUCT_OFFSET(UDevice, DevicePort); } \
	FORCEINLINE static uint32 __PPO__DeviceLine() { return STRUCT_OFFSET(UDevice, DeviceLine); } \
	FORCEINLINE static uint32 __PPO__DevicePath() { return STRUCT_OFFSET(UDevice, DevicePath); }


#define RodentVR_Source_RodentVR_Private_Settings_Device_h_12_PROLOG
#define RodentVR_Source_RodentVR_Private_Settings_Device_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_Device_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_Device_h_15_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Settings_Device_h_15_INCLASS \
	RodentVR_Source_RodentVR_Private_Settings_Device_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Settings_Device_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_Device_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_Device_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_Device_h_15_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_Device_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UDevice>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_Device_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
