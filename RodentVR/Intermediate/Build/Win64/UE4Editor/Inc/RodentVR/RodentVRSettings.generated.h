// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMazeSettings;
class UDevice;
#ifdef RODENTVR_RodentVRSettings_generated_h
#error "RodentVRSettings.generated.h already included, missing '#pragma once' in RodentVRSettings.h"
#endif
#define RODENTVR_RodentVRSettings_generated_h

#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMazePlaylist) \
	{ \
		P_GET_TARRAY(UMazeSettings*,Z_Param_MazePlaylistValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMazePlaylist(Z_Param_MazePlaylistValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMazePlaylist) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMazeSettings*>*)Z_Param__Result=P_THIS->GetMazePlaylist(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearRewardDevices) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearRewardDevices(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveRewardDevice) \
	{ \
		P_GET_OBJECT(UDevice,Z_Param_RewardDeviceValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveRewardDevice(Z_Param_RewardDeviceValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRewardDevice) \
	{ \
		P_GET_OBJECT(UDevice,Z_Param_RewardDeviceValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRewardDevice(Z_Param_RewardDeviceValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRewardDevices) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UDevice*>*)Z_Param__Result=P_THIS->GetRewardDevices(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAirPufferFrontAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AirPufferFrontAngleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAirPufferFrontAngle(Z_Param_AirPufferFrontAngleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAirPufferFrontAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAirPufferFrontAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAirPufferRightDevice) \
	{ \
		P_GET_OBJECT(UDevice,Z_Param_AirPufferRightDeviceValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAirPufferRightDevice(Z_Param_AirPufferRightDeviceValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAirPufferRightDevice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDevice**)Z_Param__Result=P_THIS->GetAirPufferRightDevice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAirPufferLeftDevice) \
	{ \
		P_GET_OBJECT(UDevice,Z_Param_AirPufferLeftDeviceValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAirPufferLeftDevice(Z_Param_AirPufferLeftDeviceValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAirPufferLeftDevice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDevice**)Z_Param__Result=P_THIS->GetAirPufferLeftDevice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBallInputMouseBMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BallInputMouseBMultiplierValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBallInputMouseBMultiplier(Z_Param_BallInputMouseBMultiplierValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBallInputMouseBMultiplier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBallInputMouseBMultiplier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBallInputMouseAMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BallInputMouseAMultiplierValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBallInputMouseAMultiplier(Z_Param_BallInputMouseAMultiplierValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBallInputMouseAMultiplier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBallInputMouseAMultiplier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBallInputMouseBDevice) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_BallInputMouseBDeviceValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBallInputMouseBDevice(Z_Param_BallInputMouseBDeviceValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBallInputMouseBDevice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetBallInputMouseBDevice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBallInputMouseADevice) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_BallInputMouseADeviceValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBallInputMouseADevice(Z_Param_BallInputMouseADeviceValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBallInputMouseADevice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetBallInputMouseADevice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSettingsFileName) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_SettingsFileNameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSettingsFileName(Z_Param_SettingsFileNameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSettingsFileName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetSettingsFileName(); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMazePlaylist) \
	{ \
		P_GET_TARRAY(UMazeSettings*,Z_Param_MazePlaylistValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMazePlaylist(Z_Param_MazePlaylistValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMazePlaylist) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMazeSettings*>*)Z_Param__Result=P_THIS->GetMazePlaylist(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearRewardDevices) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearRewardDevices(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveRewardDevice) \
	{ \
		P_GET_OBJECT(UDevice,Z_Param_RewardDeviceValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveRewardDevice(Z_Param_RewardDeviceValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRewardDevice) \
	{ \
		P_GET_OBJECT(UDevice,Z_Param_RewardDeviceValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRewardDevice(Z_Param_RewardDeviceValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRewardDevices) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UDevice*>*)Z_Param__Result=P_THIS->GetRewardDevices(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAirPufferFrontAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AirPufferFrontAngleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAirPufferFrontAngle(Z_Param_AirPufferFrontAngleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAirPufferFrontAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAirPufferFrontAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAirPufferRightDevice) \
	{ \
		P_GET_OBJECT(UDevice,Z_Param_AirPufferRightDeviceValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAirPufferRightDevice(Z_Param_AirPufferRightDeviceValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAirPufferRightDevice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDevice**)Z_Param__Result=P_THIS->GetAirPufferRightDevice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAirPufferLeftDevice) \
	{ \
		P_GET_OBJECT(UDevice,Z_Param_AirPufferLeftDeviceValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAirPufferLeftDevice(Z_Param_AirPufferLeftDeviceValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAirPufferLeftDevice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDevice**)Z_Param__Result=P_THIS->GetAirPufferLeftDevice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBallInputMouseBMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BallInputMouseBMultiplierValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBallInputMouseBMultiplier(Z_Param_BallInputMouseBMultiplierValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBallInputMouseBMultiplier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBallInputMouseBMultiplier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBallInputMouseAMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BallInputMouseAMultiplierValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBallInputMouseAMultiplier(Z_Param_BallInputMouseAMultiplierValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBallInputMouseAMultiplier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBallInputMouseAMultiplier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBallInputMouseBDevice) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_BallInputMouseBDeviceValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBallInputMouseBDevice(Z_Param_BallInputMouseBDeviceValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBallInputMouseBDevice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetBallInputMouseBDevice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBallInputMouseADevice) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_BallInputMouseADeviceValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBallInputMouseADevice(Z_Param_BallInputMouseADeviceValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBallInputMouseADevice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetBallInputMouseADevice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSettingsFileName) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_SettingsFileNameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSettingsFileName(Z_Param_SettingsFileNameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSettingsFileName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetSettingsFileName(); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURodentVRSettings(); \
	friend struct Z_Construct_UClass_URodentVRSettings_Statics; \
public: \
	DECLARE_CLASS(URodentVRSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(URodentVRSettings)


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURodentVRSettings(); \
	friend struct Z_Construct_UClass_URodentVRSettings_Statics; \
public: \
	DECLARE_CLASS(URodentVRSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(URodentVRSettings)


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URodentVRSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URodentVRSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URodentVRSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URodentVRSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URodentVRSettings(URodentVRSettings&&); \
	NO_API URodentVRSettings(const URodentVRSettings&); \
public:


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URodentVRSettings(URodentVRSettings&&); \
	NO_API URodentVRSettings(const URodentVRSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URodentVRSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URodentVRSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URodentVRSettings)


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SettingsFileName() { return STRUCT_OFFSET(URodentVRSettings, SettingsFileName); } \
	FORCEINLINE static uint32 __PPO__BallInputMouseADevice() { return STRUCT_OFFSET(URodentVRSettings, BallInputMouseADevice); } \
	FORCEINLINE static uint32 __PPO__BallInputMouseBDevice() { return STRUCT_OFFSET(URodentVRSettings, BallInputMouseBDevice); } \
	FORCEINLINE static uint32 __PPO__BallInputMouseAMultiplier() { return STRUCT_OFFSET(URodentVRSettings, BallInputMouseAMultiplier); } \
	FORCEINLINE static uint32 __PPO__BallInputMouseBMultiplier() { return STRUCT_OFFSET(URodentVRSettings, BallInputMouseBMultiplier); } \
	FORCEINLINE static uint32 __PPO__AirPufferLeftDevice() { return STRUCT_OFFSET(URodentVRSettings, AirPufferLeftDevice); } \
	FORCEINLINE static uint32 __PPO__AirPufferRightDevice() { return STRUCT_OFFSET(URodentVRSettings, AirPufferRightDevice); } \
	FORCEINLINE static uint32 __PPO__AirPufferFrontAngle() { return STRUCT_OFFSET(URodentVRSettings, AirPufferFrontAngle); } \
	FORCEINLINE static uint32 __PPO__RewardDevices() { return STRUCT_OFFSET(URodentVRSettings, RewardDevices); } \
	FORCEINLINE static uint32 __PPO__MazePlaylist() { return STRUCT_OFFSET(URodentVRSettings, MazePlaylist); }


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_14_PROLOG
#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_INCLASS \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class URodentVRSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
