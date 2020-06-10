// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Simulator/SimulatorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulatorGameMode() {}
// Cross Module References
	RODENTVR_API UFunction* Z_Construct_UDelegateFunction_RodentVR_MazeFinishedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UFunction* Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature();
	RODENTVR_API UClass* Z_Construct_UClass_ASimulatorGameMode_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_ASimulatorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	RODENTVR_API UClass* Z_Construct_UClass_URodentVRSettings_NoRegister();
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
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RodentVR_MazeFinishedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RodentVR, nullptr, "MazeFinishedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RodentVR_MazeFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RodentVR_MazeFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RodentVR, nullptr, "MazeLoadedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ASimulatorGameMode::execLoadNextMaze)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadNextMaze();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulatorGameMode::execSetRodentVRSettings)
	{
		P_GET_OBJECT(URodentVRSettings,Z_Param_RodentVRSettingsValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRodentVRSettings(Z_Param_RodentVRSettingsValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulatorGameMode::execGetRodentVRSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URodentVRSettings**)Z_Param__Result=P_THIS->GetRodentVRSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulatorGameMode::execOnMazeFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMazeFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulatorGameMode::execOnMazeLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMazeLoaded();
		P_NATIVE_END;
	}
	void ASimulatorGameMode::StaticRegisterNativesASimulatorGameMode()
	{
		UClass* Class = ASimulatorGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRodentVRSettings", &ASimulatorGameMode::execGetRodentVRSettings },
			{ "LoadNextMaze", &ASimulatorGameMode::execLoadNextMaze },
			{ "OnMazeFinished", &ASimulatorGameMode::execOnMazeFinished },
			{ "OnMazeLoaded", &ASimulatorGameMode::execOnMazeLoaded },
			{ "SetRodentVRSettings", &ASimulatorGameMode::execSetRodentVRSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASimulatorGameMode_GetRodentVRSettings_Statics
	{
		struct SimulatorGameMode_eventGetRodentVRSettings_Parms
		{
			URodentVRSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimulatorGameMode_GetRodentVRSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimulatorGameMode_eventGetRodentVRSettings_Parms, ReturnValue), Z_Construct_UClass_URodentVRSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulatorGameMode_GetRodentVRSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulatorGameMode_GetRodentVRSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulatorGameMode_GetRodentVRSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulatorGameMode_GetRodentVRSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulatorGameMode, nullptr, "GetRodentVRSettings", nullptr, nullptr, sizeof(SimulatorGameMode_eventGetRodentVRSettings_Parms), Z_Construct_UFunction_ASimulatorGameMode_GetRodentVRSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulatorGameMode_GetRodentVRSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulatorGameMode_GetRodentVRSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulatorGameMode_GetRodentVRSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulatorGameMode_GetRodentVRSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulatorGameMode_GetRodentVRSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulatorGameMode_LoadNextMaze_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulatorGameMode_LoadNextMaze_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulatorGameMode_LoadNextMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulatorGameMode, nullptr, "LoadNextMaze", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulatorGameMode_LoadNextMaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulatorGameMode_LoadNextMaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulatorGameMode_LoadNextMaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulatorGameMode_LoadNextMaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulatorGameMode_OnMazeFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulatorGameMode_OnMazeFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulatorGameMode_OnMazeFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulatorGameMode, nullptr, "OnMazeFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulatorGameMode_OnMazeFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulatorGameMode_OnMazeFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulatorGameMode_OnMazeFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulatorGameMode_OnMazeFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulatorGameMode_OnMazeLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulatorGameMode_OnMazeLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulatorGameMode_OnMazeLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulatorGameMode, nullptr, "OnMazeLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulatorGameMode_OnMazeLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulatorGameMode_OnMazeLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulatorGameMode_OnMazeLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulatorGameMode_OnMazeLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulatorGameMode_SetRodentVRSettings_Statics
	{
		struct SimulatorGameMode_eventSetRodentVRSettings_Parms
		{
			URodentVRSettings* RodentVRSettingsValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RodentVRSettingsValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimulatorGameMode_SetRodentVRSettings_Statics::NewProp_RodentVRSettingsValue = { "RodentVRSettingsValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimulatorGameMode_eventSetRodentVRSettings_Parms, RodentVRSettingsValue), Z_Construct_UClass_URodentVRSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulatorGameMode_SetRodentVRSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulatorGameMode_SetRodentVRSettings_Statics::NewProp_RodentVRSettingsValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulatorGameMode_SetRodentVRSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulatorGameMode_SetRodentVRSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulatorGameMode, nullptr, "SetRodentVRSettings", nullptr, nullptr, sizeof(SimulatorGameMode_eventSetRodentVRSettings_Parms), Z_Construct_UFunction_ASimulatorGameMode_SetRodentVRSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulatorGameMode_SetRodentVRSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulatorGameMode_SetRodentVRSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulatorGameMode_SetRodentVRSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulatorGameMode_SetRodentVRSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulatorGameMode_SetRodentVRSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASimulatorGameMode_NoRegister()
	{
		return ASimulatorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASimulatorGameMode_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RodentVRSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RodentVRSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopConditionsChecker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopConditionsChecker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimulatorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASimulatorGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimulatorGameMode_GetRodentVRSettings, "GetRodentVRSettings" }, // 314473924
		{ &Z_Construct_UFunction_ASimulatorGameMode_LoadNextMaze, "LoadNextMaze" }, // 2187004722
		{ &Z_Construct_UFunction_ASimulatorGameMode_OnMazeFinished, "OnMazeFinished" }, // 2836098399
		{ &Z_Construct_UFunction_ASimulatorGameMode_OnMazeLoaded, "OnMazeLoaded" }, // 2309428429
		{ &Z_Construct_UFunction_ASimulatorGameMode_SetRodentVRSettings, "SetRodentVRSettings" }, // 2729745783
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulatorGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Simulator/SimulatorGameMode.h" },
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_CurrentMazeIndex_MetaData[] = {
		{ "Category", "SimulatorGameMode" },
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_CurrentMazeIndex = { "CurrentMazeIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulatorGameMode, CurrentMazeIndex), METADATA_PARAMS(Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_CurrentMazeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_CurrentMazeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_RodentVRSettings_MetaData[] = {
		{ "BlueprintGetter", "GetRodentVRSettings" },
		{ "BlueprintSetter", "SetRodentVRSettings" },
		{ "Category", "SimulatorGameMode" },
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_RodentVRSettings = { "RodentVRSettings", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulatorGameMode, RodentVRSettings), Z_Construct_UClass_URodentVRSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_RodentVRSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_RodentVRSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_StopConditionsChecker_MetaData[] = {
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_StopConditionsChecker = { "StopConditionsChecker", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulatorGameMode, StopConditionsChecker), Z_Construct_UClass_UStopConditionsChecker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_StopConditionsChecker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_StopConditionsChecker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimulatorGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_CurrentMazeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_RodentVRSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_StopConditionsChecker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimulatorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimulatorGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASimulatorGameMode_Statics::ClassParams = {
		&ASimulatorGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASimulatorGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASimulatorGameMode_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASimulatorGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulatorGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimulatorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASimulatorGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASimulatorGameMode, 267799328);
	template<> RODENTVR_API UClass* StaticClass<ASimulatorGameMode>()
	{
		return ASimulatorGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimulatorGameMode(Z_Construct_UClass_ASimulatorGameMode, &ASimulatorGameMode::StaticClass, TEXT("/Script/RodentVR"), TEXT("ASimulatorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimulatorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
