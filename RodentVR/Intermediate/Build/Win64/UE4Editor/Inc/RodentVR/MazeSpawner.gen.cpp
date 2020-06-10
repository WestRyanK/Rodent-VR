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
	RODENTVR_API UClass* Z_Construct_UClass_UStopCondition_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMazeSpawner::execSpawnMaze)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMazeSettings,Z_Param_MazeSettings);
		P_GET_UBOOL(Z_Param_IsSpawnForEditor);
		P_GET_TMAP_REF(AActor*,UObject*,Z_Param_Out_ActorToSetting);
		P_GET_TMAP_REF(UObject*,AActor*,Z_Param_Out_SettingToActor);
		P_GET_TARRAY_REF(UStopCondition*,Z_Param_Out_StopConditions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMazeSpawner::SpawnMaze(Z_Param_WorldContextObject,Z_Param_MazeSettings,Z_Param_IsSpawnForEditor,Z_Param_Out_ActorToSetting,Z_Param_Out_SettingToActor,Z_Param_Out_StopConditions);
		P_NATIVE_END;
	}
	void UMazeSpawner::StaticRegisterNativesUMazeSpawner()
	{
		UClass* Class = UMazeSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnMaze", &UMazeSpawner::execSpawnMaze },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics
	{
		struct MazeSpawner_eventSpawnMaze_Parms
		{
			UObject* WorldContextObject;
			UMazeSettings* MazeSettings;
			bool IsSpawnForEditor;
			TMap<AActor*,UObject*> ActorToSetting;
			TMap<UObject*,AActor*> SettingToActor;
			TArray<UStopCondition*> StopConditions;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StopConditions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopConditions_Inner;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SettingToActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingToActor_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingToActor_ValueProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActorToSetting;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToSetting_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToSetting_ValueProp;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_StopConditions = { "StopConditions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSpawner_eventSpawnMaze_Parms, StopConditions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_StopConditions_Inner = { "StopConditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStopCondition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_SettingToActor = { "SettingToActor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSpawner_eventSpawnMaze_Parms, SettingToActor), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_SettingToActor_Key_KeyProp = { "SettingToActor_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_SettingToActor_ValueProp = { "SettingToActor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_ActorToSetting = { "ActorToSetting", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSpawner_eventSpawnMaze_Parms, ActorToSetting), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_ActorToSetting_Key_KeyProp = { "ActorToSetting_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_ActorToSetting_ValueProp = { "ActorToSetting", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_IsSpawnForEditor_SetBit(void* Obj)
	{
		((MazeSpawner_eventSpawnMaze_Parms*)Obj)->IsSpawnForEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_IsSpawnForEditor = { "IsSpawnForEditor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeSpawner_eventSpawnMaze_Parms), &Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_IsSpawnForEditor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_MazeSettings = { "MazeSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSpawner_eventSpawnMaze_Parms, MazeSettings), Z_Construct_UClass_UMazeSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSpawner_eventSpawnMaze_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_StopConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_StopConditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_SettingToActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_SettingToActor_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_SettingToActor_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_ActorToSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_ActorToSetting_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_ActorToSetting_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_IsSpawnForEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_MazeSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/MazeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSpawner, nullptr, "SpawnMaze", nullptr, nullptr, sizeof(MazeSpawner_eventSpawnMaze_Parms), Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSpawner_SpawnMaze_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UMazeSpawner_SpawnMaze, "SpawnMaze" }, // 3581617095
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
	IMPLEMENT_CLASS(UMazeSpawner, 919964774);
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
