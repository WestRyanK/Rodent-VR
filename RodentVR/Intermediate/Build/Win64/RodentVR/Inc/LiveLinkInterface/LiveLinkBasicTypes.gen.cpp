// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/Roles/LiveLinkBasicTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkBasicTypes() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
// End Cross Module References
class UScriptStruct* FLiveLinkBasicBlueprintData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkBasicBlueprintData"), sizeof(FLiveLinkBasicBlueprintData), Get_Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkBasicBlueprintData>()
{
	return FLiveLinkBasicBlueprintData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkBasicBlueprintData(FLiveLinkBasicBlueprintData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkBasicBlueprintData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkBasicBlueprintData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkBasicBlueprintData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkBasicBlueprintData")),new UScriptStruct::TCppStructOps<FLiveLinkBasicBlueprintData>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkBasicBlueprintData;
	struct Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle base data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkBasicTypes.h" },
		{ "ToolTip", "Facility structure to handle base data in blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkBasicBlueprintData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_FrameData_MetaData[] = {
		{ "Category", "Base Data" },
		{ "Comment", "// Dynamic data that can change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkBasicTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkBasicBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkBaseFrameData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_FrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_FrameData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_StaticData_MetaData[] = {
		{ "Category", "Base Data" },
		{ "Comment", "// Static data that should not change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkBasicTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkBasicBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkBaseStaticData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_StaticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_StaticData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_FrameData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_StaticData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
		&NewStructOps,
		"LiveLinkBasicBlueprintData",
		sizeof(FLiveLinkBasicBlueprintData),
		alignof(FLiveLinkBasicBlueprintData),
		Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkBasicBlueprintData"), sizeof(FLiveLinkBasicBlueprintData), Get_Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Hash() { return 3544740924U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
