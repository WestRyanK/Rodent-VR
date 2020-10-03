// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapSharedWorld/Public/MagicLeapSharedWorldTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapSharedWorldTypes() {}
// Cross Module References
	MAGICLEAPSHAREDWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData();
	UPackage* Z_Construct_UPackage__Script_MagicLeapSharedWorld();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MAGICLEAPSHAREDWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData();
	MAGICLEAPSHAREDWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData();
	MAGICLEAPARPIN_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapARPinState();
	MAGICLEAPSHAREDWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FMagicLeapSharedWorldSharedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPSHAREDWORLD_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData, Z_Construct_UPackage__Script_MagicLeapSharedWorld(), TEXT("MagicLeapSharedWorldSharedData"), sizeof(FMagicLeapSharedWorldSharedData), Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPSHAREDWORLD_API UScriptStruct* StaticStruct<FMagicLeapSharedWorldSharedData>()
{
	return FMagicLeapSharedWorldSharedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapSharedWorldSharedData(FMagicLeapSharedWorldSharedData::StaticStruct, TEXT("/Script/MagicLeapSharedWorld"), TEXT("MagicLeapSharedWorldSharedData"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapSharedWorld_StaticRegisterNativesFMagicLeapSharedWorldSharedData
{
	FScriptStruct_MagicLeapSharedWorld_StaticRegisterNativesFMagicLeapSharedWorldSharedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapSharedWorldSharedData")),new UScriptStruct::TCppStructOps<FMagicLeapSharedWorldSharedData>);
	}
} ScriptStruct_MagicLeapSharedWorld_StaticRegisterNativesFMagicLeapSharedWorldSharedData;
	struct Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PinIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapSharedWorldSharedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::NewProp_PinIDs_MetaData[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::NewProp_PinIDs = { "PinIDs", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapSharedWorldSharedData, PinIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::NewProp_PinIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::NewProp_PinIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::NewProp_PinIDs_Inner = { "PinIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::NewProp_PinIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::NewProp_PinIDs_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapSharedWorld,
		nullptr,
		&NewStructOps,
		"MagicLeapSharedWorldSharedData",
		sizeof(FMagicLeapSharedWorldSharedData),
		alignof(FMagicLeapSharedWorldSharedData),
		Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapSharedWorld();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapSharedWorldSharedData"), sizeof(FMagicLeapSharedWorldSharedData), Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData_Hash() { return 38650787U; }
class UScriptStruct* FMagicLeapSharedWorldLocalData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPSHAREDWORLD_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData, Z_Construct_UPackage__Script_MagicLeapSharedWorld(), TEXT("MagicLeapSharedWorldLocalData"), sizeof(FMagicLeapSharedWorldLocalData), Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPSHAREDWORLD_API UScriptStruct* StaticStruct<FMagicLeapSharedWorldLocalData>()
{
	return FMagicLeapSharedWorldLocalData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapSharedWorldLocalData(FMagicLeapSharedWorldLocalData::StaticStruct, TEXT("/Script/MagicLeapSharedWorld"), TEXT("MagicLeapSharedWorldLocalData"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapSharedWorld_StaticRegisterNativesFMagicLeapSharedWorldLocalData
{
	FScriptStruct_MagicLeapSharedWorld_StaticRegisterNativesFMagicLeapSharedWorldLocalData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapSharedWorldLocalData")),new UScriptStruct::TCppStructOps<FMagicLeapSharedWorldLocalData>);
	}
} ScriptStruct_MagicLeapSharedWorld_StaticRegisterNativesFMagicLeapSharedWorldLocalData;
	struct Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalPins;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalPins_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapSharedWorldLocalData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::NewProp_LocalPins_MetaData[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::NewProp_LocalPins = { "LocalPins", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapSharedWorldLocalData, LocalPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::NewProp_LocalPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::NewProp_LocalPins_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::NewProp_LocalPins_Inner = { "LocalPins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::NewProp_LocalPins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::NewProp_LocalPins_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapSharedWorld,
		nullptr,
		&NewStructOps,
		"MagicLeapSharedWorldLocalData",
		sizeof(FMagicLeapSharedWorldLocalData),
		alignof(FMagicLeapSharedWorldLocalData),
		Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapSharedWorld();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapSharedWorldLocalData"), sizeof(FMagicLeapSharedWorldLocalData), Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData_Hash() { return 2307507737U; }
class UScriptStruct* FMagicLeapSharedWorldPinData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPSHAREDWORLD_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData, Z_Construct_UPackage__Script_MagicLeapSharedWorld(), TEXT("MagicLeapSharedWorldPinData"), sizeof(FMagicLeapSharedWorldPinData), Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPSHAREDWORLD_API UScriptStruct* StaticStruct<FMagicLeapSharedWorldPinData>()
{
	return FMagicLeapSharedWorldPinData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapSharedWorldPinData(FMagicLeapSharedWorldPinData::StaticStruct, TEXT("/Script/MagicLeapSharedWorld"), TEXT("MagicLeapSharedWorldPinData"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapSharedWorld_StaticRegisterNativesFMagicLeapSharedWorldPinData
{
	FScriptStruct_MagicLeapSharedWorld_StaticRegisterNativesFMagicLeapSharedWorldPinData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapSharedWorldPinData")),new UScriptStruct::TCppStructOps<FMagicLeapSharedWorldPinData>);
	}
} ScriptStruct_MagicLeapSharedWorld_StaticRegisterNativesFMagicLeapSharedWorldPinData;
	struct Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapSharedWorldPinData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::NewProp_PinState_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::NewProp_PinState = { "PinState", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapSharedWorldPinData, PinState), Z_Construct_UScriptStruct_FMagicLeapARPinState, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::NewProp_PinState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::NewProp_PinState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::NewProp_PinID_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::NewProp_PinID = { "PinID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapSharedWorldPinData, PinID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::NewProp_PinID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::NewProp_PinID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::NewProp_PinState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::NewProp_PinID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapSharedWorld,
		nullptr,
		&NewStructOps,
		"MagicLeapSharedWorldPinData",
		sizeof(FMagicLeapSharedWorldPinData),
		alignof(FMagicLeapSharedWorldPinData),
		Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapSharedWorld();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapSharedWorldPinData"), sizeof(FMagicLeapSharedWorldPinData), Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldPinData_Hash() { return 1009000853U; }
class UScriptStruct* FMagicLeapSharedWorldAlignmentTransforms::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPSHAREDWORLD_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms, Z_Construct_UPackage__Script_MagicLeapSharedWorld(), TEXT("MagicLeapSharedWorldAlignmentTransforms"), sizeof(FMagicLeapSharedWorldAlignmentTransforms), Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPSHAREDWORLD_API UScriptStruct* StaticStruct<FMagicLeapSharedWorldAlignmentTransforms>()
{
	return FMagicLeapSharedWorldAlignmentTransforms::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms(FMagicLeapSharedWorldAlignmentTransforms::StaticStruct, TEXT("/Script/MagicLeapSharedWorld"), TEXT("MagicLeapSharedWorldAlignmentTransforms"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapSharedWorld_StaticRegisterNativesFMagicLeapSharedWorldAlignmentTransforms
{
	FScriptStruct_MagicLeapSharedWorld_StaticRegisterNativesFMagicLeapSharedWorldAlignmentTransforms()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapSharedWorldAlignmentTransforms")),new UScriptStruct::TCppStructOps<FMagicLeapSharedWorldAlignmentTransforms>);
	}
} ScriptStruct_MagicLeapSharedWorld_StaticRegisterNativesFMagicLeapSharedWorldAlignmentTransforms;
	struct Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignmentTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlignmentTransforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlignmentTransforms_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Transforms to be used by all clients to align their coordinate spaces. \n\x09These transforms are sent by either an authoritative or pseudo-authoritative (\"chosen one\")\n\x09""client to the server via AMagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms()\n\x09which redirects it to the AMagicLeapSharedWorldGameState instance from where these transforms\n\x09""are replicated to all clients to use locally for alignment.\n\x09These transforms can also be set by the server, if they are saved from a previous session.\n*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldTypes.h" },
		{ "ToolTip", "Transforms to be used by all clients to align their coordinate spaces.\nThese transforms are sent by either an authoritative or pseudo-authoritative (\"chosen one\")\nclient to the server via AMagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms()\nwhich redirects it to the AMagicLeapSharedWorldGameState instance from where these transforms\nare replicated to all clients to use locally for alignment.\nThese transforms can also be set by the server, if they are saved from a previous session." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapSharedWorldAlignmentTransforms>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::NewProp_AlignmentTransforms_MetaData[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::NewProp_AlignmentTransforms = { "AlignmentTransforms", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapSharedWorldAlignmentTransforms, AlignmentTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::NewProp_AlignmentTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::NewProp_AlignmentTransforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::NewProp_AlignmentTransforms_Inner = { "AlignmentTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::NewProp_AlignmentTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::NewProp_AlignmentTransforms_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapSharedWorld,
		nullptr,
		&NewStructOps,
		"MagicLeapSharedWorldAlignmentTransforms",
		sizeof(FMagicLeapSharedWorldAlignmentTransforms),
		alignof(FMagicLeapSharedWorldAlignmentTransforms),
		Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapSharedWorld();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapSharedWorldAlignmentTransforms"), sizeof(FMagicLeapSharedWorldAlignmentTransforms), Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms_Hash() { return 3916182426U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
