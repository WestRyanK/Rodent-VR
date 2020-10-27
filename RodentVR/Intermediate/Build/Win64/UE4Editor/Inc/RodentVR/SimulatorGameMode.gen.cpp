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
	DEFINE_FUNCTION(ASimulatorGameMode::execStopNIDAQDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopNIDAQDevices();
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
			{ "LoadNextMaze", &ASimulatorGameMode::execLoadNextMaze },
			{ "OnMazeFinished", &ASimulatorGameMode::execOnMazeFinished },
			{ "OnMazeLoaded", &ASimulatorGameMode::execOnMazeLoaded },
			{ "StopNIDAQDevices", &ASimulatorGameMode::execStopNIDAQDevices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "Comment", "//UFUNCTION(BlueprintGetter)\n//\x09URodentVRSettings* GetRodentVRSettings();\n//UFUNCTION(BlueprintSetter)\n//\x09void SetRodentVRSettings(URodentVRSettings* RodentVRSettingsValue);\n" },
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
		{ "ToolTip", "UFUNCTION(BlueprintGetter)\n       URodentVRSettings* GetRodentVRSettings();\nUFUNCTION(BlueprintSetter)\n       void SetRodentVRSettings(URodentVRSettings* RodentVRSettingsValue);" },
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
		{ "Comment", "//UPROPERTY(BlueprintGetter = GetRodentVRSettings, BlueprintSetter = SetRodentVRSettings)\n//\x09URodentVRSettings* RodentVRSettings;\n" },
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
		{ "ToolTip", "UPROPERTY(BlueprintGetter = GetRodentVRSettings, BlueprintSetter = SetRodentVRSettings)\n       URodentVRSettings* RodentVRSettings;" },
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
	struct Z_Construct_UFunction_ASimulatorGameMode_StopNIDAQDevices_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulatorGameMode_StopNIDAQDevices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulatorGameMode_StopNIDAQDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulatorGameMode, nullptr, "StopNIDAQDevices", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulatorGameMode_StopNIDAQDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulatorGameMode_StopNIDAQDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulatorGameMode_StopNIDAQDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulatorGameMode_StopNIDAQDevices_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_ASimulatorGameMode_LoadNextMaze, "LoadNextMaze" }, // 2548263413
		{ &Z_Construct_UFunction_ASimulatorGameMode_OnMazeFinished, "OnMazeFinished" }, // 2836098399
		{ &Z_Construct_UFunction_ASimulatorGameMode_OnMazeLoaded, "OnMazeLoaded" }, // 2191082086
		{ &Z_Construct_UFunction_ASimulatorGameMode_StopNIDAQDevices, "StopNIDAQDevices" }, // 2829601101
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_StopConditionsChecker_MetaData[] = {
		{ "ModuleRelativePath", "Private/Simulator/SimulatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_StopConditionsChecker = { "StopConditionsChecker", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulatorGameMode, StopConditionsChecker), Z_Construct_UClass_UStopConditionsChecker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_StopConditionsChecker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_StopConditionsChecker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimulatorGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulatorGameMode_Statics::NewProp_CurrentMazeIndex,
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
	IMPLEMENT_CLASS(ASimulatorGameMode, 671188991);
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
