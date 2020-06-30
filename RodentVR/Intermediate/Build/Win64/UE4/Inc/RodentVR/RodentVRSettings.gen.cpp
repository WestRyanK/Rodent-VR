// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/RodentVRSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRodentVRSettings() {}
// Cross Module References
	RODENTVR_API UFunction* Z_Construct_UDelegateFunction_RodentVR_RodentVRSettingsChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UClass* Z_Construct_UClass_URodentVRSettings_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_URodentVRSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeSettings_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UDevice_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RodentVR_RodentVRSettingsChangedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RodentVR_RodentVRSettingsChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RodentVR_RodentVRSettingsChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RodentVR, nullptr, "RodentVRSettingsChangedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RodentVR_RodentVRSettingsChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RodentVR_RodentVRSettingsChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RodentVR_RodentVRSettingsChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RodentVR_RodentVRSettingsChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URodentVRSettings::execOnRodentVRSettingsChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRodentVRSettingsChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execGetMazeFromPlaylistByFileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MazeSettingsFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMazeSettings**)Z_Param__Result=P_THIS->GetMazeFromPlaylistByFileName(Z_Param_MazeSettingsFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execClearMazes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMazes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execRemoveMazeAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MazeIndexValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMazeAtIndex(Z_Param_MazeIndexValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execRemoveMaze)
	{
		P_GET_OBJECT(UMazeSettings,Z_Param_MazeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMaze(Z_Param_MazeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execAddMaze)
	{
		P_GET_OBJECT(UMazeSettings,Z_Param_MazeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMaze(Z_Param_MazeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execGetMazePlaylist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMazeSettings*>*)Z_Param__Result=P_THIS->GetMazePlaylist();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execClearRewardDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearRewardDevices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execRemoveRewardDevice)
	{
		P_GET_OBJECT(UDevice,Z_Param_RewardDeviceValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveRewardDevice(Z_Param_RewardDeviceValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execAddRewardDevice)
	{
		P_GET_OBJECT(UDevice,Z_Param_RewardDeviceValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRewardDevice(Z_Param_RewardDeviceValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execGetRewardDeviceById)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceIdValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDevice**)Z_Param__Result=P_THIS->GetRewardDeviceById(Z_Param_DeviceIdValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execGetRewardDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDevice*>*)Z_Param__Result=P_THIS->GetRewardDevices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execSetAirPufferFrontAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AirPufferFrontAngleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAirPufferFrontAngle(Z_Param_AirPufferFrontAngleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execGetAirPufferFrontAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAirPufferFrontAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execSetAirPufferRightDevice)
	{
		P_GET_OBJECT(UDevice,Z_Param_AirPufferRightDeviceValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAirPufferRightDevice(Z_Param_AirPufferRightDeviceValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execGetAirPufferRightDevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDevice**)Z_Param__Result=P_THIS->GetAirPufferRightDevice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execSetAirPufferLeftDevice)
	{
		P_GET_OBJECT(UDevice,Z_Param_AirPufferLeftDeviceValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAirPufferLeftDevice(Z_Param_AirPufferLeftDeviceValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execGetAirPufferLeftDevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDevice**)Z_Param__Result=P_THIS->GetAirPufferLeftDevice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execSetBallInputMouseBMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BallInputMouseBMultiplierValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBallInputMouseBMultiplier(Z_Param_BallInputMouseBMultiplierValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execGetBallInputMouseBMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBallInputMouseBMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execSetBallInputMouseAMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BallInputMouseAMultiplierValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBallInputMouseAMultiplier(Z_Param_BallInputMouseAMultiplierValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execGetBallInputMouseAMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBallInputMouseAMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execSetBallInputMouseBDevice)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BallInputMouseBDeviceValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBallInputMouseBDevice(Z_Param_BallInputMouseBDeviceValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execGetBallInputMouseBDevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBallInputMouseBDevice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execSetBallInputMouseADevice)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BallInputMouseADeviceValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBallInputMouseADevice(Z_Param_BallInputMouseADeviceValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execGetBallInputMouseADevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBallInputMouseADevice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execSetSettingsFileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SettingsFileNameValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettingsFileName(Z_Param_SettingsFileNameValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSettings::execGetSettingsFileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSettingsFileName();
		P_NATIVE_END;
	}
	void URodentVRSettings::StaticRegisterNativesURodentVRSettings()
	{
		UClass* Class = URodentVRSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMaze", &URodentVRSettings::execAddMaze },
			{ "AddRewardDevice", &URodentVRSettings::execAddRewardDevice },
			{ "ClearMazes", &URodentVRSettings::execClearMazes },
			{ "ClearRewardDevices", &URodentVRSettings::execClearRewardDevices },
			{ "GetAirPufferFrontAngle", &URodentVRSettings::execGetAirPufferFrontAngle },
			{ "GetAirPufferLeftDevice", &URodentVRSettings::execGetAirPufferLeftDevice },
			{ "GetAirPufferRightDevice", &URodentVRSettings::execGetAirPufferRightDevice },
			{ "GetBallInputMouseADevice", &URodentVRSettings::execGetBallInputMouseADevice },
			{ "GetBallInputMouseAMultiplier", &URodentVRSettings::execGetBallInputMouseAMultiplier },
			{ "GetBallInputMouseBDevice", &URodentVRSettings::execGetBallInputMouseBDevice },
			{ "GetBallInputMouseBMultiplier", &URodentVRSettings::execGetBallInputMouseBMultiplier },
			{ "GetMazeFromPlaylistByFileName", &URodentVRSettings::execGetMazeFromPlaylistByFileName },
			{ "GetMazePlaylist", &URodentVRSettings::execGetMazePlaylist },
			{ "GetRewardDeviceById", &URodentVRSettings::execGetRewardDeviceById },
			{ "GetRewardDevices", &URodentVRSettings::execGetRewardDevices },
			{ "GetSettingsFileName", &URodentVRSettings::execGetSettingsFileName },
			{ "OnRodentVRSettingsChanged", &URodentVRSettings::execOnRodentVRSettingsChanged },
			{ "RemoveMaze", &URodentVRSettings::execRemoveMaze },
			{ "RemoveMazeAtIndex", &URodentVRSettings::execRemoveMazeAtIndex },
			{ "RemoveRewardDevice", &URodentVRSettings::execRemoveRewardDevice },
			{ "SetAirPufferFrontAngle", &URodentVRSettings::execSetAirPufferFrontAngle },
			{ "SetAirPufferLeftDevice", &URodentVRSettings::execSetAirPufferLeftDevice },
			{ "SetAirPufferRightDevice", &URodentVRSettings::execSetAirPufferRightDevice },
			{ "SetBallInputMouseADevice", &URodentVRSettings::execSetBallInputMouseADevice },
			{ "SetBallInputMouseAMultiplier", &URodentVRSettings::execSetBallInputMouseAMultiplier },
			{ "SetBallInputMouseBDevice", &URodentVRSettings::execSetBallInputMouseBDevice },
			{ "SetBallInputMouseBMultiplier", &URodentVRSettings::execSetBallInputMouseBMultiplier },
			{ "SetSettingsFileName", &URodentVRSettings::execSetSettingsFileName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URodentVRSettings_AddMaze_Statics
	{
		struct RodentVRSettings_eventAddMaze_Parms
		{
			UMazeSettings* MazeValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRSettings_AddMaze_Statics::NewProp_MazeValue = { "MazeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventAddMaze_Parms, MazeValue), Z_Construct_UClass_UMazeSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_AddMaze_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_AddMaze_Statics::NewProp_MazeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_AddMaze_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_AddMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "AddMaze", nullptr, nullptr, sizeof(RodentVRSettings_eventAddMaze_Parms), Z_Construct_UFunction_URodentVRSettings_AddMaze_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_AddMaze_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_AddMaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_AddMaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_AddMaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_AddMaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_AddRewardDevice_Statics
	{
		struct RodentVRSettings_eventAddRewardDevice_Parms
		{
			UDevice* RewardDeviceValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardDeviceValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRSettings_AddRewardDevice_Statics::NewProp_RewardDeviceValue = { "RewardDeviceValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventAddRewardDevice_Parms, RewardDeviceValue), Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_AddRewardDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_AddRewardDevice_Statics::NewProp_RewardDeviceValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_AddRewardDevice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_AddRewardDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "AddRewardDevice", nullptr, nullptr, sizeof(RodentVRSettings_eventAddRewardDevice_Parms), Z_Construct_UFunction_URodentVRSettings_AddRewardDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_AddRewardDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_AddRewardDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_AddRewardDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_AddRewardDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_AddRewardDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_ClearMazes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_ClearMazes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_ClearMazes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "ClearMazes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_ClearMazes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_ClearMazes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_ClearMazes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_ClearMazes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_ClearRewardDevices_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_ClearRewardDevices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_ClearRewardDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "ClearRewardDevices", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_ClearRewardDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_ClearRewardDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_ClearRewardDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_ClearRewardDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_GetAirPufferFrontAngle_Statics
	{
		struct RodentVRSettings_eventGetAirPufferFrontAngle_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URodentVRSettings_GetAirPufferFrontAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventGetAirPufferFrontAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_GetAirPufferFrontAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetAirPufferFrontAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_GetAirPufferFrontAngle_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_GetAirPufferFrontAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "GetAirPufferFrontAngle", nullptr, nullptr, sizeof(RodentVRSettings_eventGetAirPufferFrontAngle_Parms), Z_Construct_UFunction_URodentVRSettings_GetAirPufferFrontAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetAirPufferFrontAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_GetAirPufferFrontAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetAirPufferFrontAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_GetAirPufferFrontAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_GetAirPufferFrontAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_GetAirPufferLeftDevice_Statics
	{
		struct RodentVRSettings_eventGetAirPufferLeftDevice_Parms
		{
			UDevice* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRSettings_GetAirPufferLeftDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventGetAirPufferLeftDevice_Parms, ReturnValue), Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_GetAirPufferLeftDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetAirPufferLeftDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_GetAirPufferLeftDevice_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_GetAirPufferLeftDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "GetAirPufferLeftDevice", nullptr, nullptr, sizeof(RodentVRSettings_eventGetAirPufferLeftDevice_Parms), Z_Construct_UFunction_URodentVRSettings_GetAirPufferLeftDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetAirPufferLeftDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_GetAirPufferLeftDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetAirPufferLeftDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_GetAirPufferLeftDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_GetAirPufferLeftDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_GetAirPufferRightDevice_Statics
	{
		struct RodentVRSettings_eventGetAirPufferRightDevice_Parms
		{
			UDevice* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRSettings_GetAirPufferRightDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventGetAirPufferRightDevice_Parms, ReturnValue), Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_GetAirPufferRightDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetAirPufferRightDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_GetAirPufferRightDevice_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_GetAirPufferRightDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "GetAirPufferRightDevice", nullptr, nullptr, sizeof(RodentVRSettings_eventGetAirPufferRightDevice_Parms), Z_Construct_UFunction_URodentVRSettings_GetAirPufferRightDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetAirPufferRightDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_GetAirPufferRightDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetAirPufferRightDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_GetAirPufferRightDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_GetAirPufferRightDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseADevice_Statics
	{
		struct RodentVRSettings_eventGetBallInputMouseADevice_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseADevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventGetBallInputMouseADevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseADevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseADevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseADevice_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseADevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "GetBallInputMouseADevice", nullptr, nullptr, sizeof(RodentVRSettings_eventGetBallInputMouseADevice_Parms), Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseADevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseADevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseADevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseADevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseADevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseADevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseAMultiplier_Statics
	{
		struct RodentVRSettings_eventGetBallInputMouseAMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseAMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventGetBallInputMouseAMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseAMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseAMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseAMultiplier_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseAMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "GetBallInputMouseAMultiplier", nullptr, nullptr, sizeof(RodentVRSettings_eventGetBallInputMouseAMultiplier_Parms), Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseAMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseAMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseAMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseAMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseAMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseAMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBDevice_Statics
	{
		struct RodentVRSettings_eventGetBallInputMouseBDevice_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventGetBallInputMouseBDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBDevice_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "GetBallInputMouseBDevice", nullptr, nullptr, sizeof(RodentVRSettings_eventGetBallInputMouseBDevice_Parms), Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBMultiplier_Statics
	{
		struct RodentVRSettings_eventGetBallInputMouseBMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventGetBallInputMouseBMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBMultiplier_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "GetBallInputMouseBMultiplier", nullptr, nullptr, sizeof(RodentVRSettings_eventGetBallInputMouseBMultiplier_Parms), Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName_Statics
	{
		struct RodentVRSettings_eventGetMazeFromPlaylistByFileName_Parms
		{
			FString MazeSettingsFileName;
			UMazeSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MazeSettingsFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventGetMazeFromPlaylistByFileName_Parms, ReturnValue), Z_Construct_UClass_UMazeSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName_Statics::NewProp_MazeSettingsFileName = { "MazeSettingsFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventGetMazeFromPlaylistByFileName_Parms, MazeSettingsFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName_Statics::NewProp_MazeSettingsFileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "GetMazeFromPlaylistByFileName", nullptr, nullptr, sizeof(RodentVRSettings_eventGetMazeFromPlaylistByFileName_Parms), Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist_Statics
	{
		struct RodentVRSettings_eventGetMazePlaylist_Parms
		{
			TArray<UMazeSettings*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventGetMazePlaylist_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMazeSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "GetMazePlaylist", nullptr, nullptr, sizeof(RodentVRSettings_eventGetMazePlaylist_Parms), Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById_Statics
	{
		struct RodentVRSettings_eventGetRewardDeviceById_Parms
		{
			FString DeviceIdValue;
			UDevice* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceIdValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventGetRewardDeviceById_Parms, ReturnValue), Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById_Statics::NewProp_DeviceIdValue = { "DeviceIdValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventGetRewardDeviceById_Parms, DeviceIdValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById_Statics::NewProp_DeviceIdValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "GetRewardDeviceById", nullptr, nullptr, sizeof(RodentVRSettings_eventGetRewardDeviceById_Parms), Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_GetRewardDevices_Statics
	{
		struct RodentVRSettings_eventGetRewardDevices_Parms
		{
			TArray<UDevice*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URodentVRSettings_GetRewardDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventGetRewardDevices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRSettings_GetRewardDevices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_GetRewardDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetRewardDevices_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetRewardDevices_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_GetRewardDevices_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_GetRewardDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "GetRewardDevices", nullptr, nullptr, sizeof(RodentVRSettings_eventGetRewardDevices_Parms), Z_Construct_UFunction_URodentVRSettings_GetRewardDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetRewardDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_GetRewardDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetRewardDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_GetRewardDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_GetRewardDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_GetSettingsFileName_Statics
	{
		struct RodentVRSettings_eventGetSettingsFileName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URodentVRSettings_GetSettingsFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventGetSettingsFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_GetSettingsFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_GetSettingsFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_GetSettingsFileName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_GetSettingsFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "GetSettingsFileName", nullptr, nullptr, sizeof(RodentVRSettings_eventGetSettingsFileName_Parms), Z_Construct_UFunction_URodentVRSettings_GetSettingsFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetSettingsFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_GetSettingsFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_GetSettingsFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_GetSettingsFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_GetSettingsFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_OnRodentVRSettingsChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_OnRodentVRSettingsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_OnRodentVRSettingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "OnRodentVRSettingsChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_OnRodentVRSettingsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_OnRodentVRSettingsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_OnRodentVRSettingsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_OnRodentVRSettingsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_RemoveMaze_Statics
	{
		struct RodentVRSettings_eventRemoveMaze_Parms
		{
			UMazeSettings* MazeValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRSettings_RemoveMaze_Statics::NewProp_MazeValue = { "MazeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventRemoveMaze_Parms, MazeValue), Z_Construct_UClass_UMazeSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_RemoveMaze_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_RemoveMaze_Statics::NewProp_MazeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_RemoveMaze_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_RemoveMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "RemoveMaze", nullptr, nullptr, sizeof(RodentVRSettings_eventRemoveMaze_Parms), Z_Construct_UFunction_URodentVRSettings_RemoveMaze_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_RemoveMaze_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_RemoveMaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_RemoveMaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_RemoveMaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_RemoveMaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_RemoveMazeAtIndex_Statics
	{
		struct RodentVRSettings_eventRemoveMazeAtIndex_Parms
		{
			int32 MazeIndexValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MazeIndexValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URodentVRSettings_RemoveMazeAtIndex_Statics::NewProp_MazeIndexValue = { "MazeIndexValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventRemoveMazeAtIndex_Parms, MazeIndexValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_RemoveMazeAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_RemoveMazeAtIndex_Statics::NewProp_MazeIndexValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_RemoveMazeAtIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_RemoveMazeAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "RemoveMazeAtIndex", nullptr, nullptr, sizeof(RodentVRSettings_eventRemoveMazeAtIndex_Parms), Z_Construct_UFunction_URodentVRSettings_RemoveMazeAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_RemoveMazeAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_RemoveMazeAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_RemoveMazeAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_RemoveMazeAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_RemoveMazeAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_RemoveRewardDevice_Statics
	{
		struct RodentVRSettings_eventRemoveRewardDevice_Parms
		{
			UDevice* RewardDeviceValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardDeviceValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRSettings_RemoveRewardDevice_Statics::NewProp_RewardDeviceValue = { "RewardDeviceValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventRemoveRewardDevice_Parms, RewardDeviceValue), Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_RemoveRewardDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_RemoveRewardDevice_Statics::NewProp_RewardDeviceValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_RemoveRewardDevice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_RemoveRewardDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "RemoveRewardDevice", nullptr, nullptr, sizeof(RodentVRSettings_eventRemoveRewardDevice_Parms), Z_Construct_UFunction_URodentVRSettings_RemoveRewardDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_RemoveRewardDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_RemoveRewardDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_RemoveRewardDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_RemoveRewardDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_RemoveRewardDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_SetAirPufferFrontAngle_Statics
	{
		struct RodentVRSettings_eventSetAirPufferFrontAngle_Parms
		{
			float AirPufferFrontAngleValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirPufferFrontAngleValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URodentVRSettings_SetAirPufferFrontAngle_Statics::NewProp_AirPufferFrontAngleValue = { "AirPufferFrontAngleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventSetAirPufferFrontAngle_Parms, AirPufferFrontAngleValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_SetAirPufferFrontAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_SetAirPufferFrontAngle_Statics::NewProp_AirPufferFrontAngleValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_SetAirPufferFrontAngle_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_SetAirPufferFrontAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "SetAirPufferFrontAngle", nullptr, nullptr, sizeof(RodentVRSettings_eventSetAirPufferFrontAngle_Parms), Z_Construct_UFunction_URodentVRSettings_SetAirPufferFrontAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetAirPufferFrontAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_SetAirPufferFrontAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetAirPufferFrontAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_SetAirPufferFrontAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_SetAirPufferFrontAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_SetAirPufferLeftDevice_Statics
	{
		struct RodentVRSettings_eventSetAirPufferLeftDevice_Parms
		{
			UDevice* AirPufferLeftDeviceValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AirPufferLeftDeviceValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRSettings_SetAirPufferLeftDevice_Statics::NewProp_AirPufferLeftDeviceValue = { "AirPufferLeftDeviceValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventSetAirPufferLeftDevice_Parms, AirPufferLeftDeviceValue), Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_SetAirPufferLeftDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_SetAirPufferLeftDevice_Statics::NewProp_AirPufferLeftDeviceValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_SetAirPufferLeftDevice_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_SetAirPufferLeftDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "SetAirPufferLeftDevice", nullptr, nullptr, sizeof(RodentVRSettings_eventSetAirPufferLeftDevice_Parms), Z_Construct_UFunction_URodentVRSettings_SetAirPufferLeftDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetAirPufferLeftDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_SetAirPufferLeftDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetAirPufferLeftDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_SetAirPufferLeftDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_SetAirPufferLeftDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_SetAirPufferRightDevice_Statics
	{
		struct RodentVRSettings_eventSetAirPufferRightDevice_Parms
		{
			UDevice* AirPufferRightDeviceValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AirPufferRightDeviceValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRSettings_SetAirPufferRightDevice_Statics::NewProp_AirPufferRightDeviceValue = { "AirPufferRightDeviceValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventSetAirPufferRightDevice_Parms, AirPufferRightDeviceValue), Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_SetAirPufferRightDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_SetAirPufferRightDevice_Statics::NewProp_AirPufferRightDeviceValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_SetAirPufferRightDevice_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_SetAirPufferRightDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "SetAirPufferRightDevice", nullptr, nullptr, sizeof(RodentVRSettings_eventSetAirPufferRightDevice_Parms), Z_Construct_UFunction_URodentVRSettings_SetAirPufferRightDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetAirPufferRightDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_SetAirPufferRightDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetAirPufferRightDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_SetAirPufferRightDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_SetAirPufferRightDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseADevice_Statics
	{
		struct RodentVRSettings_eventSetBallInputMouseADevice_Parms
		{
			FString BallInputMouseADeviceValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BallInputMouseADeviceValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseADevice_Statics::NewProp_BallInputMouseADeviceValue = { "BallInputMouseADeviceValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventSetBallInputMouseADevice_Parms, BallInputMouseADeviceValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseADevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseADevice_Statics::NewProp_BallInputMouseADeviceValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseADevice_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseADevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "SetBallInputMouseADevice", nullptr, nullptr, sizeof(RodentVRSettings_eventSetBallInputMouseADevice_Parms), Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseADevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseADevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseADevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseADevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseADevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseADevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseAMultiplier_Statics
	{
		struct RodentVRSettings_eventSetBallInputMouseAMultiplier_Parms
		{
			float BallInputMouseAMultiplierValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BallInputMouseAMultiplierValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseAMultiplier_Statics::NewProp_BallInputMouseAMultiplierValue = { "BallInputMouseAMultiplierValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventSetBallInputMouseAMultiplier_Parms, BallInputMouseAMultiplierValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseAMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseAMultiplier_Statics::NewProp_BallInputMouseAMultiplierValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseAMultiplier_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseAMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "SetBallInputMouseAMultiplier", nullptr, nullptr, sizeof(RodentVRSettings_eventSetBallInputMouseAMultiplier_Parms), Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseAMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseAMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseAMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseAMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseAMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseAMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBDevice_Statics
	{
		struct RodentVRSettings_eventSetBallInputMouseBDevice_Parms
		{
			FString BallInputMouseBDeviceValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BallInputMouseBDeviceValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBDevice_Statics::NewProp_BallInputMouseBDeviceValue = { "BallInputMouseBDeviceValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventSetBallInputMouseBDevice_Parms, BallInputMouseBDeviceValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBDevice_Statics::NewProp_BallInputMouseBDeviceValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBDevice_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "SetBallInputMouseBDevice", nullptr, nullptr, sizeof(RodentVRSettings_eventSetBallInputMouseBDevice_Parms), Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBMultiplier_Statics
	{
		struct RodentVRSettings_eventSetBallInputMouseBMultiplier_Parms
		{
			float BallInputMouseBMultiplierValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BallInputMouseBMultiplierValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBMultiplier_Statics::NewProp_BallInputMouseBMultiplierValue = { "BallInputMouseBMultiplierValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventSetBallInputMouseBMultiplier_Parms, BallInputMouseBMultiplierValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBMultiplier_Statics::NewProp_BallInputMouseBMultiplierValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBMultiplier_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "SetBallInputMouseBMultiplier", nullptr, nullptr, sizeof(RodentVRSettings_eventSetBallInputMouseBMultiplier_Parms), Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSettings_SetSettingsFileName_Statics
	{
		struct RodentVRSettings_eventSetSettingsFileName_Parms
		{
			FString SettingsFileNameValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingsFileNameValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URodentVRSettings_SetSettingsFileName_Statics::NewProp_SettingsFileNameValue = { "SettingsFileNameValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettings_eventSetSettingsFileName_Parms, SettingsFileNameValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettings_SetSettingsFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettings_SetSettingsFileName_Statics::NewProp_SettingsFileNameValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettings_SetSettingsFileName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettings_SetSettingsFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettings, nullptr, "SetSettingsFileName", nullptr, nullptr, sizeof(RodentVRSettings_eventSetSettingsFileName_Parms), Z_Construct_UFunction_URodentVRSettings_SetSettingsFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetSettingsFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettings_SetSettingsFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettings_SetSettingsFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettings_SetSettingsFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettings_SetSettingsFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URodentVRSettings_NoRegister()
	{
		return URodentVRSettings::StaticClass();
	}
	struct Z_Construct_UClass_URodentVRSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazePlaylist_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MazePlaylist;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazePlaylist_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardDevices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RewardDevices;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardDevices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirPufferFrontAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirPufferFrontAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirPufferRightDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AirPufferRightDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirPufferLeftDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AirPufferLeftDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallInputMouseBMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BallInputMouseBMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallInputMouseAMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BallInputMouseAMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallInputMouseBDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BallInputMouseBDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallInputMouseADevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BallInputMouseADevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingsFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URodentVRSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URodentVRSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URodentVRSettings_AddMaze, "AddMaze" }, // 4034704602
		{ &Z_Construct_UFunction_URodentVRSettings_AddRewardDevice, "AddRewardDevice" }, // 1206219685
		{ &Z_Construct_UFunction_URodentVRSettings_ClearMazes, "ClearMazes" }, // 4023044545
		{ &Z_Construct_UFunction_URodentVRSettings_ClearRewardDevices, "ClearRewardDevices" }, // 2507537252
		{ &Z_Construct_UFunction_URodentVRSettings_GetAirPufferFrontAngle, "GetAirPufferFrontAngle" }, // 4042858913
		{ &Z_Construct_UFunction_URodentVRSettings_GetAirPufferLeftDevice, "GetAirPufferLeftDevice" }, // 3982244658
		{ &Z_Construct_UFunction_URodentVRSettings_GetAirPufferRightDevice, "GetAirPufferRightDevice" }, // 1793022811
		{ &Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseADevice, "GetBallInputMouseADevice" }, // 2414545707
		{ &Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseAMultiplier, "GetBallInputMouseAMultiplier" }, // 408225855
		{ &Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBDevice, "GetBallInputMouseBDevice" }, // 915910276
		{ &Z_Construct_UFunction_URodentVRSettings_GetBallInputMouseBMultiplier, "GetBallInputMouseBMultiplier" }, // 1909082975
		{ &Z_Construct_UFunction_URodentVRSettings_GetMazeFromPlaylistByFileName, "GetMazeFromPlaylistByFileName" }, // 3462873454
		{ &Z_Construct_UFunction_URodentVRSettings_GetMazePlaylist, "GetMazePlaylist" }, // 3633290246
		{ &Z_Construct_UFunction_URodentVRSettings_GetRewardDeviceById, "GetRewardDeviceById" }, // 1113795364
		{ &Z_Construct_UFunction_URodentVRSettings_GetRewardDevices, "GetRewardDevices" }, // 1750094432
		{ &Z_Construct_UFunction_URodentVRSettings_GetSettingsFileName, "GetSettingsFileName" }, // 1019087095
		{ &Z_Construct_UFunction_URodentVRSettings_OnRodentVRSettingsChanged, "OnRodentVRSettingsChanged" }, // 2758153026
		{ &Z_Construct_UFunction_URodentVRSettings_RemoveMaze, "RemoveMaze" }, // 2230641563
		{ &Z_Construct_UFunction_URodentVRSettings_RemoveMazeAtIndex, "RemoveMazeAtIndex" }, // 3120920838
		{ &Z_Construct_UFunction_URodentVRSettings_RemoveRewardDevice, "RemoveRewardDevice" }, // 1578849095
		{ &Z_Construct_UFunction_URodentVRSettings_SetAirPufferFrontAngle, "SetAirPufferFrontAngle" }, // 2144180533
		{ &Z_Construct_UFunction_URodentVRSettings_SetAirPufferLeftDevice, "SetAirPufferLeftDevice" }, // 1185043551
		{ &Z_Construct_UFunction_URodentVRSettings_SetAirPufferRightDevice, "SetAirPufferRightDevice" }, // 587730737
		{ &Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseADevice, "SetBallInputMouseADevice" }, // 1355024357
		{ &Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseAMultiplier, "SetBallInputMouseAMultiplier" }, // 3516650446
		{ &Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBDevice, "SetBallInputMouseBDevice" }, // 2737155559
		{ &Z_Construct_UFunction_URodentVRSettings_SetBallInputMouseBMultiplier, "SetBallInputMouseBMultiplier" }, // 1999406501
		{ &Z_Construct_UFunction_URodentVRSettings_SetSettingsFileName, "SetSettingsFileName" }, // 3284137738
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Settings/RodentVRSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSettings_Statics::NewProp_MazePlaylist_MetaData[] = {
		{ "BlueprintGetter", "GetMazePlaylist" },
		{ "Category", "RodentVRSettings" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URodentVRSettings_Statics::NewProp_MazePlaylist = { "MazePlaylist", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRSettings, MazePlaylist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_MazePlaylist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_MazePlaylist_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URodentVRSettings_Statics::NewProp_MazePlaylist_Inner = { "MazePlaylist", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMazeSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSettings_Statics::NewProp_RewardDevices_MetaData[] = {
		{ "BlueprintGetter", "GetRewardDevices" },
		{ "Category", "RodentVRSettings" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URodentVRSettings_Statics::NewProp_RewardDevices = { "RewardDevices", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRSettings, RewardDevices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_RewardDevices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_RewardDevices_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URodentVRSettings_Statics::NewProp_RewardDevices_Inner = { "RewardDevices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferFrontAngle_MetaData[] = {
		{ "BlueprintGetter", "GetAirPufferFrontAngle" },
		{ "BlueprintSetter", "SetAirPufferFrontAngle" },
		{ "Category", "RodentVRSettings" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferFrontAngle = { "AirPufferFrontAngle", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRSettings, AirPufferFrontAngle), METADATA_PARAMS(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferFrontAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferFrontAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferRightDevice_MetaData[] = {
		{ "BlueprintGetter", "GetAirPufferRightDevice" },
		{ "BlueprintSetter", "SetAirPufferRightDevice" },
		{ "Category", "RodentVRSettings" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferRightDevice = { "AirPufferRightDevice", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRSettings, AirPufferRightDevice), Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferRightDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferRightDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferLeftDevice_MetaData[] = {
		{ "BlueprintGetter", "GetAirPufferLeftDevice" },
		{ "BlueprintSetter", "SetAirPufferLeftDevice" },
		{ "Category", "RodentVRSettings" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferLeftDevice = { "AirPufferLeftDevice", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRSettings, AirPufferLeftDevice), Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferLeftDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferLeftDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseBMultiplier_MetaData[] = {
		{ "BlueprintGetter", "GetBallInputMouseBMultiplier" },
		{ "BlueprintSetter", "SetBallInputMouseBMultiplier" },
		{ "Category", "RodentVRSettings" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseBMultiplier = { "BallInputMouseBMultiplier", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRSettings, BallInputMouseBMultiplier), METADATA_PARAMS(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseBMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseBMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseAMultiplier_MetaData[] = {
		{ "BlueprintGetter", "GetBallInputMouseAMultiplier" },
		{ "BlueprintSetter", "SetBallInputMouseAMultiplier" },
		{ "Category", "RodentVRSettings" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseAMultiplier = { "BallInputMouseAMultiplier", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRSettings, BallInputMouseAMultiplier), METADATA_PARAMS(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseAMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseAMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseBDevice_MetaData[] = {
		{ "BlueprintGetter", "GetBallInputMouseBDevice" },
		{ "BlueprintSetter", "SetBallInputMouseBDevice" },
		{ "Category", "RodentVRSettings" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseBDevice = { "BallInputMouseBDevice", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRSettings, BallInputMouseBDevice), METADATA_PARAMS(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseBDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseBDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseADevice_MetaData[] = {
		{ "BlueprintGetter", "GetBallInputMouseADevice" },
		{ "BlueprintSetter", "SetBallInputMouseADevice" },
		{ "Category", "RodentVRSettings" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseADevice = { "BallInputMouseADevice", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRSettings, BallInputMouseADevice), METADATA_PARAMS(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseADevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseADevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSettings_Statics::NewProp_SettingsFileName_MetaData[] = {
		{ "BlueprintGetter", "GetSettingsFileName" },
		{ "BlueprintSetter", "SetSettingsFileName" },
		{ "Category", "RodentVRSettings" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URodentVRSettings_Statics::NewProp_SettingsFileName = { "SettingsFileName", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRSettings, SettingsFileName), METADATA_PARAMS(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_SettingsFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSettings_Statics::NewProp_SettingsFileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URodentVRSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRSettings_Statics::NewProp_MazePlaylist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRSettings_Statics::NewProp_MazePlaylist_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRSettings_Statics::NewProp_RewardDevices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRSettings_Statics::NewProp_RewardDevices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferFrontAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferRightDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRSettings_Statics::NewProp_AirPufferLeftDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseBMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseAMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseBDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRSettings_Statics::NewProp_BallInputMouseADevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRSettings_Statics::NewProp_SettingsFileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URodentVRSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URodentVRSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URodentVRSettings_Statics::ClassParams = {
		&URodentVRSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URodentVRSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URodentVRSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URodentVRSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URodentVRSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URodentVRSettings, 2024720581);
	template<> RODENTVR_API UClass* StaticClass<URodentVRSettings>()
	{
		return URodentVRSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URodentVRSettings(Z_Construct_UClass_URodentVRSettings, &URodentVRSettings::StaticClass, TEXT("/Script/RodentVR"), TEXT("URodentVRSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URodentVRSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
