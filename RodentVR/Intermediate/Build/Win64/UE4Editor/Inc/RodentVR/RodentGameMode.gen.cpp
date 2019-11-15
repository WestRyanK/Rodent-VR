// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/RodentGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRodentGameMode() {}
// Cross Module References
	RODENTVR_API UFunction* Z_Construct_UDelegateFunction_RodentVR_MazeFinishedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UFunction* Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature();
	RODENTVR_API UClass* Z_Construct_UClass_ARodentGameMode_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_ARodentGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RODENTVR_API UFunction* Z_Construct_UFunction_ARodentGameMode_LoadNextMaze();
	RODENTVR_API UFunction* Z_Construct_UFunction_ARodentGameMode_LoadSettings();
	RODENTVR_API UFunction* Z_Construct_UFunction_ARodentGameMode_OnMazeFinished();
	RODENTVR_API UFunction* Z_Construct_UFunction_ARodentGameMode_OnMazeLoaded();
	RODENTVR_API UClass* Z_Construct_UClass_UStopConditionsChecker_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RodentVR_MazeFinishedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RodentVR_MazeFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RodentVR_MazeFinishedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RodentVR, nullptr, "MazeFinishedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RodentVR_MazeFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_RodentVR_MazeFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RodentVR_MazeFinishedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RodentVR_MazeFinishedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RodentVR, nullptr, "MazeLoadedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ARodentGameMode::StaticRegisterNativesARodentGameMode()
	{
		UClass* Class = ARodentGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadNextMaze", &ARodentGameMode::execLoadNextMaze },
			{ "LoadSettings", &ARodentGameMode::execLoadSettings },
			{ "OnMazeFinished", &ARodentGameMode::execOnMazeFinished },
			{ "OnMazeLoaded", &ARodentGameMode::execOnMazeLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARodentGameMode_LoadNextMaze_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARodentGameMode_LoadNextMaze_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings Loader" },
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARodentGameMode_LoadNextMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARodentGameMode, nullptr, "LoadNextMaze", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARodentGameMode_LoadNextMaze_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARodentGameMode_LoadNextMaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARodentGameMode_LoadNextMaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARodentGameMode_LoadNextMaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARodentGameMode_LoadSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARodentGameMode_LoadSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings Loader" },
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARodentGameMode_LoadSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARodentGameMode, nullptr, "LoadSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARodentGameMode_LoadSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARodentGameMode_LoadSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARodentGameMode_LoadSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARodentGameMode_LoadSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARodentGameMode_OnMazeFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARodentGameMode_OnMazeFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARodentGameMode_OnMazeFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARodentGameMode, nullptr, "OnMazeFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARodentGameMode_OnMazeFinished_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARodentGameMode_OnMazeFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARodentGameMode_OnMazeFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARodentGameMode_OnMazeFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARodentGameMode_OnMazeLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARodentGameMode_OnMazeLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARodentGameMode_OnMazeLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARodentGameMode, nullptr, "OnMazeLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARodentGameMode_OnMazeLoaded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARodentGameMode_OnMazeLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARodentGameMode_OnMazeLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARodentGameMode_OnMazeLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARodentGameMode_NoRegister()
	{
		return ARodentGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARodentGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMazeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentMazeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaylistFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlaylistFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlaylistFiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardDeviceNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RewardDeviceNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RewardDeviceNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorRecordingFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BehaviorRecordingFilename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseBMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseBMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseAMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseAMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseBDeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MouseBDeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseADeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MouseADeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirPufferFrontAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirPufferFrontAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirPufferRightDeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AirPufferRightDeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirPufferLeftDeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AirPufferLeftDeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopConditionsChecker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopConditionsChecker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARodentGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARodentGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARodentGameMode_LoadNextMaze, "LoadNextMaze" }, // 230225646
		{ &Z_Construct_UFunction_ARodentGameMode_LoadSettings, "LoadSettings" }, // 1094665667
		{ &Z_Construct_UFunction_ARodentGameMode_OnMazeFinished, "OnMazeFinished" }, // 948292052
		{ &Z_Construct_UFunction_ARodentGameMode_OnMazeLoaded, "OnMazeLoaded" }, // 2704759559
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARodentGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RodentGameMode.h" },
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARodentGameMode_Statics::NewProp_CurrentMazeIndex_MetaData[] = {
		{ "Category", "RodentGameMode" },
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_CurrentMazeIndex = { "CurrentMazeIndex", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARodentGameMode, CurrentMazeIndex), METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_CurrentMazeIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_CurrentMazeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARodentGameMode_Statics::NewProp_PlaylistFiles_MetaData[] = {
		{ "Category", "RodentGameMode" },
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_PlaylistFiles = { "PlaylistFiles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARodentGameMode, PlaylistFiles), METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_PlaylistFiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_PlaylistFiles_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_PlaylistFiles_Inner = { "PlaylistFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARodentGameMode_Statics::NewProp_RewardDeviceNames_MetaData[] = {
		{ "Category", "RodentGameMode" },
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_RewardDeviceNames = { "RewardDeviceNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARodentGameMode, RewardDeviceNames), METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_RewardDeviceNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_RewardDeviceNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_RewardDeviceNames_Inner = { "RewardDeviceNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARodentGameMode_Statics::NewProp_BehaviorRecordingFilename_MetaData[] = {
		{ "Category", "RodentGameMode" },
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_BehaviorRecordingFilename = { "BehaviorRecordingFilename", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARodentGameMode, BehaviorRecordingFilename), METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_BehaviorRecordingFilename_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_BehaviorRecordingFilename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseBMultiplier_MetaData[] = {
		{ "Category", "RodentGameMode" },
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseBMultiplier = { "MouseBMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARodentGameMode, MouseBMultiplier), METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseBMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseBMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseAMultiplier_MetaData[] = {
		{ "Category", "RodentGameMode" },
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseAMultiplier = { "MouseAMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARodentGameMode, MouseAMultiplier), METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseAMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseAMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseBDeviceName_MetaData[] = {
		{ "Category", "RodentGameMode" },
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseBDeviceName = { "MouseBDeviceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARodentGameMode, MouseBDeviceName), METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseBDeviceName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseBDeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseADeviceName_MetaData[] = {
		{ "Category", "RodentGameMode" },
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseADeviceName = { "MouseADeviceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARodentGameMode, MouseADeviceName), METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseADeviceName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseADeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferFrontAngle_MetaData[] = {
		{ "Category", "RodentGameMode" },
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferFrontAngle = { "AirPufferFrontAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARodentGameMode, AirPufferFrontAngle), METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferFrontAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferFrontAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferRightDeviceName_MetaData[] = {
		{ "Category", "RodentGameMode" },
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferRightDeviceName = { "AirPufferRightDeviceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARodentGameMode, AirPufferRightDeviceName), METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferRightDeviceName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferRightDeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferLeftDeviceName_MetaData[] = {
		{ "Category", "RodentGameMode" },
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferLeftDeviceName = { "AirPufferLeftDeviceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARodentGameMode, AirPufferLeftDeviceName), METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferLeftDeviceName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferLeftDeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARodentGameMode_Statics::NewProp_StopConditionsChecker_MetaData[] = {
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_StopConditionsChecker = { "StopConditionsChecker", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARodentGameMode, StopConditionsChecker), Z_Construct_UClass_UStopConditionsChecker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_StopConditionsChecker_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_StopConditionsChecker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARodentGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_CurrentMazeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_PlaylistFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_PlaylistFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_RewardDeviceNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_RewardDeviceNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_BehaviorRecordingFilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseBMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseAMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseBDeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_MouseADeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferFrontAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferRightDeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_AirPufferLeftDeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_StopConditionsChecker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARodentGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARodentGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARodentGameMode_Statics::ClassParams = {
		&ARodentGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARodentGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::PropPointers),
		0,
		0x008002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARodentGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARodentGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARodentGameMode, 2864941391);
	template<> RODENTVR_API UClass* StaticClass<ARodentGameMode>()
	{
		return ARodentGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARodentGameMode(Z_Construct_UClass_ARodentGameMode, &ARodentGameMode::StaticClass, TEXT("/Script/RodentVR"), TEXT("ARodentGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARodentGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
