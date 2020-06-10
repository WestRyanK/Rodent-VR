// Copyright Epic Games, Inc. All Rights Reserved.
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
	RODENTVR_API UClass* Z_Construct_UClass_ARodentGameMode_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_ARodentGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UClass* Z_Construct_UClass_UStopConditionsChecker_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARodentGameMode::execLoadNextMaze)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadNextMaze();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARodentGameMode::execLoadSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARodentGameMode::execOnMazeFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMazeFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARodentGameMode::execOnMazeLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMazeLoaded();
		P_NATIVE_END;
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
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARodentGameMode_LoadNextMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARodentGameMode, nullptr, "LoadNextMaze", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARodentGameMode_LoadNextMaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARodentGameMode_LoadNextMaze_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARodentGameMode_LoadSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARodentGameMode, nullptr, "LoadSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARodentGameMode_LoadSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARodentGameMode_LoadSettings_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARodentGameMode_OnMazeFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARodentGameMode, nullptr, "OnMazeFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARodentGameMode_OnMazeFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARodentGameMode_OnMazeFinished_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARodentGameMode_OnMazeLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARodentGameMode, nullptr, "OnMazeLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARodentGameMode_OnMazeLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARodentGameMode_OnMazeLoaded_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_ARodentGameMode_LoadNextMaze, "LoadNextMaze" }, // 2935404482
		{ &Z_Construct_UFunction_ARodentGameMode_LoadSettings, "LoadSettings" }, // 2422997897
		{ &Z_Construct_UFunction_ARodentGameMode_OnMazeFinished, "OnMazeFinished" }, // 878676622
		{ &Z_Construct_UFunction_ARodentGameMode_OnMazeLoaded, "OnMazeLoaded" }, // 1991119193
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_CurrentMazeIndex = { "CurrentMazeIndex", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARodentGameMode, CurrentMazeIndex), METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_CurrentMazeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_CurrentMazeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARodentGameMode_Statics::NewProp_StopConditionsChecker_MetaData[] = {
		{ "ModuleRelativePath", "Private/RodentGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARodentGameMode_Statics::NewProp_StopConditionsChecker = { "StopConditionsChecker", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARodentGameMode, StopConditionsChecker), Z_Construct_UClass_UStopConditionsChecker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_StopConditionsChecker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::NewProp_StopConditionsChecker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARodentGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_CurrentMazeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARodentGameMode_Statics::NewProp_StopConditionsChecker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARodentGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARodentGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARodentGameMode_Statics::ClassParams = {
		&ARodentGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARodentGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARodentGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARodentGameMode_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(ARodentGameMode, 3584911470);
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
