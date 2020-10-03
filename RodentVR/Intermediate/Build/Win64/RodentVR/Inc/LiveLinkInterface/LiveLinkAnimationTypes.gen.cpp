// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/Roles/LiveLinkAnimationTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationTypes() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
// End Cross Module References
class UScriptStruct* FLiveLinkAnimationFrameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkAnimationFrameData"), sizeof(FLiveLinkAnimationFrameData), Get_Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkAnimationFrameData>()
{
	return FLiveLinkAnimationFrameData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkAnimationFrameData(FLiveLinkAnimationFrameData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkAnimationFrameData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkAnimationFrameData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkAnimationFrameData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkAnimationFrameData")),new UScriptStruct::TCppStructOps<FLiveLinkAnimationFrameData>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkAnimationFrameData;
	struct Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dynamic data for Animation purposes. \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Dynamic data for Animation purposes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkAnimationFrameData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Array of transforms for each bone of the skeleton\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Array of transforms for each bone of the skeleton" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkAnimationFrameData, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseFrameData,
		&NewStructOps,
		"LiveLinkAnimationFrameData",
		sizeof(FLiveLinkAnimationFrameData),
		alignof(FLiveLinkAnimationFrameData),
		Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkAnimationFrameData"), sizeof(FLiveLinkAnimationFrameData), Get_Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Hash() { return 3694607158U; }
class UScriptStruct* FLiveLinkSkeletonStaticData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSkeletonStaticData"), sizeof(FLiveLinkSkeletonStaticData), Get_Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSkeletonStaticData>()
{
	return FLiveLinkSkeletonStaticData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkSkeletonStaticData(FLiveLinkSkeletonStaticData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkSkeletonStaticData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSkeletonStaticData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSkeletonStaticData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkSkeletonStaticData")),new UScriptStruct::TCppStructOps<FLiveLinkSkeletonStaticData>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSkeletonStaticData;
	struct Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneParents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneParents;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneParents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Static data for Animation purposes. Contains data about bones that shouldn't change every frame.\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Static data for Animation purposes. Contains data about bones that shouldn't change every frame." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSkeletonStaticData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Parent Indices: For each bone it specifies the index of its parent\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Parent Indices: For each bone it specifies the index of its parent" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents = { "BoneParents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSkeletonStaticData, BoneParents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents_Inner = { "BoneParents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Names of each bone in the skeleton\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Names of each bone in the skeleton" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSkeletonStaticData, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseStaticData,
		&NewStructOps,
		"LiveLinkSkeletonStaticData",
		sizeof(FLiveLinkSkeletonStaticData),
		alignof(FLiveLinkSkeletonStaticData),
		Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkSkeletonStaticData"), sizeof(FLiveLinkSkeletonStaticData), Get_Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Hash() { return 2776163168U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
