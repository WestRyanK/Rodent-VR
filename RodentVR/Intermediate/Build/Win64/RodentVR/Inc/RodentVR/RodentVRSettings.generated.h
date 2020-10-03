// Copyright Epic Games, Inc. All Rights Reserved.
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

#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_12_DELEGATE \
static inline void FRodentVRSettingsChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& RodentVRSettingsChangedDelegate) \
{ \
	RodentVRSettingsChangedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRodentVRSettingsChanged); \
	DECLARE_FUNCTION(execGetMazeFromPlaylistByFileName); \
	DECLARE_FUNCTION(execClearMazes); \
	DECLARE_FUNCTION(execRemoveMazeAtIndex); \
	DECLARE_FUNCTION(execRemoveMaze); \
	DECLARE_FUNCTION(execAddMaze); \
	DECLARE_FUNCTION(execGetMazePlaylist); \
	DECLARE_FUNCTION(execClearRewardDevices); \
	DECLARE_FUNCTION(execRemoveRewardDevice); \
	DECLARE_FUNCTION(execAddRewardDevice); \
	DECLARE_FUNCTION(execGetRewardDeviceById); \
	DECLARE_FUNCTION(execGetRewardDevices); \
	DECLARE_FUNCTION(execSetAirPufferFrontAngle); \
	DECLARE_FUNCTION(execGetAirPufferFrontAngle); \
	DECLARE_FUNCTION(execSetAirPufferRightDevice); \
	DECLARE_FUNCTION(execGetAirPufferRightDevice); \
	DECLARE_FUNCTION(execSetAirPufferLeftDevice); \
	DECLARE_FUNCTION(execGetAirPufferLeftDevice); \
	DECLARE_FUNCTION(execSetBallInputMouseBMultiplier); \
	DECLARE_FUNCTION(execGetBallInputMouseBMultiplier); \
	DECLARE_FUNCTION(execSetBallInputMouseAMultiplier); \
	DECLARE_FUNCTION(execGetBallInputMouseAMultiplier); \
	DECLARE_FUNCTION(execSetBallInputMouseBDevice); \
	DECLARE_FUNCTION(execGetBallInputMouseBDevice); \
	DECLARE_FUNCTION(execSetBallInputMouseADevice); \
	DECLARE_FUNCTION(execGetBallInputMouseADevice); \
	DECLARE_FUNCTION(execSetSettingsFileName); \
	DECLARE_FUNCTION(execGetSettingsFileName);


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRodentVRSettingsChanged); \
	DECLARE_FUNCTION(execGetMazeFromPlaylistByFileName); \
	DECLARE_FUNCTION(execClearMazes); \
	DECLARE_FUNCTION(execRemoveMazeAtIndex); \
	DECLARE_FUNCTION(execRemoveMaze); \
	DECLARE_FUNCTION(execAddMaze); \
	DECLARE_FUNCTION(execGetMazePlaylist); \
	DECLARE_FUNCTION(execClearRewardDevices); \
	DECLARE_FUNCTION(execRemoveRewardDevice); \
	DECLARE_FUNCTION(execAddRewardDevice); \
	DECLARE_FUNCTION(execGetRewardDeviceById); \
	DECLARE_FUNCTION(execGetRewardDevices); \
	DECLARE_FUNCTION(execSetAirPufferFrontAngle); \
	DECLARE_FUNCTION(execGetAirPufferFrontAngle); \
	DECLARE_FUNCTION(execSetAirPufferRightDevice); \
	DECLARE_FUNCTION(execGetAirPufferRightDevice); \
	DECLARE_FUNCTION(execSetAirPufferLeftDevice); \
	DECLARE_FUNCTION(execGetAirPufferLeftDevice); \
	DECLARE_FUNCTION(execSetBallInputMouseBMultiplier); \
	DECLARE_FUNCTION(execGetBallInputMouseBMultiplier); \
	DECLARE_FUNCTION(execSetBallInputMouseAMultiplier); \
	DECLARE_FUNCTION(execGetBallInputMouseAMultiplier); \
	DECLARE_FUNCTION(execSetBallInputMouseBDevice); \
	DECLARE_FUNCTION(execGetBallInputMouseBDevice); \
	DECLARE_FUNCTION(execSetBallInputMouseADevice); \
	DECLARE_FUNCTION(execGetBallInputMouseADevice); \
	DECLARE_FUNCTION(execSetSettingsFileName); \
	DECLARE_FUNCTION(execGetSettingsFileName);


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURodentVRSettings(); \
	friend struct Z_Construct_UClass_URodentVRSettings_Statics; \
public: \
	DECLARE_CLASS(URodentVRSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(URodentVRSettings)


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_INCLASS \
private: \
	static void StaticRegisterNativesURodentVRSettings(); \
	friend struct Z_Construct_UClass_URodentVRSettings_Statics; \
public: \
	DECLARE_CLASS(URodentVRSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(URodentVRSettings)


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_STANDARD_CONSTRUCTORS \
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


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URodentVRSettings(URodentVRSettings&&); \
	NO_API URodentVRSettings(const URodentVRSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URodentVRSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URodentVRSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URodentVRSettings)


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_PRIVATE_PROPERTY_OFFSET \
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


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_17_PROLOG
#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_INCLASS \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class URodentVRSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_RodentVRSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
