// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/BehaviorRecording/BehaviorPathSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorPathSpawner() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UBehaviorPathSpawner_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UBehaviorPathSpawner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_ABehaviorPathNodeObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RODENTVR_API UClass* Z_Construct_UClass_UBehaviorSnapshot_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBehaviorPathSpawner::execClearPathFromWorld)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBehaviorPathSpawner::ClearPathFromWorld(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorPathSpawner::execGetSpawnedPathActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ABehaviorPathNodeObject*>*)Z_Param__Result=UBehaviorPathSpawner::GetSpawnedPathActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorPathSpawner::execSpawnBehaviorPath)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY(UBehaviorSnapshot*,Z_Param_Snapshots);
		P_GET_STRUCT(FVector,Z_Param_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBehaviorPathSpawner::SpawnBehaviorPath(Z_Param_WorldContextObject,Z_Param_Snapshots,Z_Param_Color,Z_Param_Size);
		P_NATIVE_END;
	}
	void UBehaviorPathSpawner::StaticRegisterNativesUBehaviorPathSpawner()
	{
		UClass* Class = UBehaviorPathSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearPathFromWorld", &UBehaviorPathSpawner::execClearPathFromWorld },
			{ "GetSpawnedPathActors", &UBehaviorPathSpawner::execGetSpawnedPathActors },
			{ "SpawnBehaviorPath", &UBehaviorPathSpawner::execSpawnBehaviorPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBehaviorPathSpawner_ClearPathFromWorld_Statics
	{
		struct BehaviorPathSpawner_eventClearPathFromWorld_Parms
		{
			UWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviorPathSpawner_ClearPathFromWorld_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPathSpawner_eventClearPathFromWorld_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorPathSpawner_ClearPathFromWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorPathSpawner_ClearPathFromWorld_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorPathSpawner_ClearPathFromWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPathSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorPathSpawner_ClearPathFromWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorPathSpawner, nullptr, "ClearPathFromWorld", nullptr, nullptr, sizeof(BehaviorPathSpawner_eventClearPathFromWorld_Parms), Z_Construct_UFunction_UBehaviorPathSpawner_ClearPathFromWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorPathSpawner_ClearPathFromWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorPathSpawner_ClearPathFromWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorPathSpawner_ClearPathFromWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorPathSpawner_ClearPathFromWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorPathSpawner_ClearPathFromWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors_Statics
	{
		struct BehaviorPathSpawner_eventGetSpawnedPathActors_Parms
		{
			TArray<ABehaviorPathNodeObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPathSpawner_eventGetSpawnedPathActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABehaviorPathNodeObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPathSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorPathSpawner, nullptr, "GetSpawnedPathActors", nullptr, nullptr, sizeof(BehaviorPathSpawner_eventGetSpawnedPathActors_Parms), Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics
	{
		struct BehaviorPathSpawner_eventSpawnBehaviorPath_Parms
		{
			UObject* WorldContextObject;
			TArray<UBehaviorSnapshot*> Snapshots;
			FVector Color;
			float Size;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Snapshots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Snapshots_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPathSpawner_eventSpawnBehaviorPath_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPathSpawner_eventSpawnBehaviorPath_Parms, Color), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::NewProp_Snapshots = { "Snapshots", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPathSpawner_eventSpawnBehaviorPath_Parms, Snapshots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::NewProp_Snapshots_Inner = { "Snapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBehaviorSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPathSpawner_eventSpawnBehaviorPath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::NewProp_Snapshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::NewProp_Snapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPathSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorPathSpawner, nullptr, "SpawnBehaviorPath", nullptr, nullptr, sizeof(BehaviorPathSpawner_eventSpawnBehaviorPath_Parms), Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBehaviorPathSpawner_NoRegister()
	{
		return UBehaviorPathSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorPathSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorPathSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBehaviorPathSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviorPathSpawner_ClearPathFromWorld, "ClearPathFromWorld" }, // 3581808043
		{ &Z_Construct_UFunction_UBehaviorPathSpawner_GetSpawnedPathActors, "GetSpawnedPathActors" }, // 2330875359
		{ &Z_Construct_UFunction_UBehaviorPathSpawner_SpawnBehaviorPath, "SpawnBehaviorPath" }, // 735925803
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorPathSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BehaviorRecording/BehaviorPathSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPathSpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorPathSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorPathSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorPathSpawner_Statics::ClassParams = {
		&UBehaviorPathSpawner::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorPathSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorPathSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorPathSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBehaviorPathSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBehaviorPathSpawner, 127075416);
	template<> RODENTVR_API UClass* StaticClass<UBehaviorPathSpawner>()
	{
		return UBehaviorPathSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorPathSpawner(Z_Construct_UClass_UBehaviorPathSpawner, &UBehaviorPathSpawner::StaticClass, TEXT("/Script/RodentVR"), TEXT("UBehaviorPathSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorPathSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
