// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Simulator/MazeSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeSpawner() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UMazeSpawner_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeSpawner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMazeSpawner::execGetActorsFromMazeSettings)
	{
		P_GET_OBJECT(UMazeSettings,Z_Param_MazeSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=UMazeSpawner::GetActorsFromMazeSettings(Z_Param_MazeSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSpawner::execGetActorFromSetting)
	{
		P_GET_OBJECT(UObject,Z_Param_SettingValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UMazeSpawner::GetActorFromSetting(Z_Param_SettingValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSpawner::execGetSettingFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UMazeSpawner::GetSettingFromActor(Z_Param_ActorValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSpawner::execClearSpawnedMaze)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMazeSpawner::ClearSpawnedMaze(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSpawner::execSpawnMaze)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMazeSettings,Z_Param_MazeSettings);
		P_GET_UBOOL(Z_Param_IsSpawnForEditor);
		P_GET_UBOOL(Z_Param_ShowRegions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMazeSpawner::SpawnMaze(Z_Param_WorldContextObject,Z_Param_MazeSettings,Z_Param_IsSpawnForEditor,Z_Param_ShowRegions);
		P_NATIVE_END;
	}
	void UMazeSpawner::StaticRegisterNativesUMazeSpawner()
	{
		UClass* Class = UMazeSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearSpawnedMaze", &UMazeSpawner::execClearSpawnedMaze },
			{ "GetActorFromSetting", &UMazeSpawner::execGetActorFromSetting },
			{ "GetActorsFromMazeSettings", &UMazeSpawner::execGetActorsFromMazeSettings },
			{ "GetSettingFromActor", &UMazeSpawner::execGetSettingFromActor },
			{ "SpawnMaze", &UMazeSpawner::execSpawnMaze },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMazeSpawner_ClearSpawnedMaze_Statics
	{
		struct MazeSpawner_eventClearSpawnedMaze_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_ClearSpawnedMaze_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSpawner_eventClearSpawnedMaze_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSpawner_ClearSpawnedMaze_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_ClearSpawnedMaze_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSpawner_ClearSpawnedMaze_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/MazeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSpawner_ClearSpawnedMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSpawner, nullptr, "ClearSpawnedMaze", nullptr, nullptr, sizeof(MazeSpawner_eventClearSpawnedMaze_Parms), Z_Construct_UFunction_UMazeSpawner_ClearSpawnedMaze_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSpawner_ClearSpawnedMaze_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSpawner_ClearSpawnedMaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSpawner_ClearSpawnedMaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSpawner_ClearSpawnedMaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSpawner_ClearSpawnedMaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting_Statics
	{
		struct MazeSpawner_eventGetActorFromSetting_Parms
		{
			UObject* SettingValue;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSpawner_eventGetActorFromSetting_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting_Statics::NewProp_SettingValue = { "SettingValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSpawner_eventGetActorFromSetting_Parms, SettingValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting_Statics::NewProp_SettingValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/MazeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSpawner, nullptr, "GetActorFromSetting", nullptr, nullptr, sizeof(MazeSpawner_eventGetActorFromSetting_Parms), Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics
	{
		struct MazeSpawner_eventGetActorsFromMazeSettings_Parms
		{
			UMazeSettings* MazeSettings;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSpawner_eventGetActorsFromMazeSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics::NewProp_MazeSettings = { "MazeSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSpawner_eventGetActorsFromMazeSettings_Parms, MazeSettings), Z_Construct_UClass_UMazeSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics::NewProp_MazeSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/MazeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSpawner, nullptr, "GetActorsFromMazeSettings", nullptr, nullptr, sizeof(MazeSpawner_eventGetActorsFromMazeSettings_Parms), Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor_Statics
	{
		struct MazeSpawner_eventGetSettingFromActor_Parms
		{
			AActor* ActorValue;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSpawner_eventGetSettingFromActor_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor_Statics::NewProp_ActorValue = { "ActorValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSpawner_eventGetSettingFromActor_Parms, ActorValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor_Statics::NewProp_ActorValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/MazeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSpawner, nullptr, "GetSettingFromActor", nullptr, nullptr, sizeof(MazeSpawner_eventGetSettingFromActor_Parms), Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics
	{
		struct MazeSpawner_eventSpawnMaze_Parms
		{
			UObject* WorldContextObject;
			UMazeSettings* MazeSettings;
			bool IsSpawnForEditor;
			bool ShowRegions;
		};
		static void NewProp_ShowRegions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowRegions;
		static void NewProp_IsSpawnForEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSpawnForEditor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeSettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_ShowRegions_SetBit(void* Obj)
	{
		((MazeSpawner_eventSpawnMaze_Parms*)Obj)->ShowRegions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_ShowRegions = { "ShowRegions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeSpawner_eventSpawnMaze_Parms), &Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_ShowRegions_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_IsSpawnForEditor_SetBit(void* Obj)
	{
		((MazeSpawner_eventSpawnMaze_Parms*)Obj)->IsSpawnForEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_IsSpawnForEditor = { "IsSpawnForEditor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeSpawner_eventSpawnMaze_Parms), &Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_IsSpawnForEditor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_MazeSettings = { "MazeSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSpawner_eventSpawnMaze_Parms, MazeSettings), Z_Construct_UClass_UMazeSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSpawner_eventSpawnMaze_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_ShowRegions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_IsSpawnForEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_MazeSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/MazeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSpawner, nullptr, "SpawnMaze", nullptr, nullptr, sizeof(MazeSpawner_eventSpawnMaze_Parms), Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSpawner_SpawnMaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMazeSpawner_NoRegister()
	{
		return UMazeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UMazeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMazeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMazeSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMazeSpawner_ClearSpawnedMaze, "ClearSpawnedMaze" }, // 1596346929
		{ &Z_Construct_UFunction_UMazeSpawner_GetActorFromSetting, "GetActorFromSetting" }, // 2886483502
		{ &Z_Construct_UFunction_UMazeSpawner_GetActorsFromMazeSettings, "GetActorsFromMazeSettings" }, // 2593274405
		{ &Z_Construct_UFunction_UMazeSpawner_GetSettingFromActor, "GetSettingFromActor" }, // 299436007
		{ &Z_Construct_UFunction_UMazeSpawner_SpawnMaze, "SpawnMaze" }, // 1177256462
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Simulator/MazeSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Simulator/MazeSpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMazeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMazeSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMazeSpawner_Statics::ClassParams = {
		&UMazeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMazeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMazeSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMazeSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMazeSpawner, 540408722);
	template<> RODENTVR_API UClass* StaticClass<UMazeSpawner>()
	{
		return UMazeSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMazeSpawner(Z_Construct_UClass_UMazeSpawner, &UMazeSpawner::StaticClass, TEXT("/Script/RodentVR"), TEXT("UMazeSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMazeSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
