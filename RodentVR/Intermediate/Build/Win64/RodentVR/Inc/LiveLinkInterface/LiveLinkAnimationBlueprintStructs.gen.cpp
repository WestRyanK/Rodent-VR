// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/Roles/LiveLinkAnimationBlueprintStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationBlueprintStructs() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectFrameHandle();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransform();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedSubjectFrame();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectMetadata();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
// End Cross Module References
class UScriptStruct* FSubjectFrameHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FSubjectFrameHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubjectFrameHandle, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("SubjectFrameHandle"), sizeof(FSubjectFrameHandle), Get_Z_Construct_UScriptStruct_FSubjectFrameHandle_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FSubjectFrameHandle>()
{
	return FSubjectFrameHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubjectFrameHandle(FSubjectFrameHandle::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("SubjectFrameHandle"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFSubjectFrameHandle
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFSubjectFrameHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubjectFrameHandle")),new UScriptStruct::TCppStructOps<FSubjectFrameHandle>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFSubjectFrameHandle;
	struct Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubjectFrameHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
		&NewStructOps,
		"SubjectFrameHandle",
		sizeof(FSubjectFrameHandle),
		alignof(FSubjectFrameHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubjectFrameHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubjectFrameHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubjectFrameHandle"), sizeof(FSubjectFrameHandle), Get_Z_Construct_UScriptStruct_FSubjectFrameHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubjectFrameHandle_Hash() { return 1971547655U; }
class UScriptStruct* FLiveLinkTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransform, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTransform"), sizeof(FLiveLinkTransform), Get_Z_Construct_UScriptStruct_FLiveLinkTransform_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTransform>()
{
	return FLiveLinkTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkTransform(FLiveLinkTransform::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkTransform"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTransform
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkTransform")),new UScriptStruct::TCppStructOps<FLiveLinkTransform>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTransform;
	struct Z_Construct_UScriptStruct_FLiveLinkTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTransform>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkTransform",
		sizeof(FLiveLinkTransform),
		alignof(FLiveLinkTransform),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkTransform"), sizeof(FLiveLinkTransform), Get_Z_Construct_UScriptStruct_FLiveLinkTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransform_Hash() { return 2030174646U; }
class UScriptStruct* FCachedSubjectFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FCachedSubjectFrame_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedSubjectFrame, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("CachedSubjectFrame"), sizeof(FCachedSubjectFrame), Get_Z_Construct_UScriptStruct_FCachedSubjectFrame_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FCachedSubjectFrame>()
{
	return FCachedSubjectFrame::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedSubjectFrame(FCachedSubjectFrame::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("CachedSubjectFrame"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFCachedSubjectFrame
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFCachedSubjectFrame()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedSubjectFrame")),new UScriptStruct::TCppStructOps<FCachedSubjectFrame>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFCachedSubjectFrame;
	struct Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedSubjectFrame>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"CachedSubjectFrame",
		sizeof(FCachedSubjectFrame),
		alignof(FCachedSubjectFrame),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedSubjectFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedSubjectFrame_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedSubjectFrame"), sizeof(FCachedSubjectFrame), Get_Z_Construct_UScriptStruct_FCachedSubjectFrame_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedSubjectFrame_Hash() { return 3183047008U; }
class UScriptStruct* FSubjectMetadata::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FSubjectMetadata_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubjectMetadata, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("SubjectMetadata"), sizeof(FSubjectMetadata), Get_Z_Construct_UScriptStruct_FSubjectMetadata_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FSubjectMetadata>()
{
	return FSubjectMetadata::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubjectMetadata(FSubjectMetadata::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("SubjectMetadata"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFSubjectMetadata
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFSubjectMetadata()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubjectMetadata")),new UScriptStruct::TCppStructOps<FSubjectMetadata>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFSubjectMetadata;
	struct Z_Construct_UScriptStruct_FSubjectMetadata_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneFramerate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SceneFramerate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneTimecode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SceneTimecode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringMetadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StringMetadata;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringMetadata_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringMetadata_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubjectMetadata>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneFramerate_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneFramerate = { "SceneFramerate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubjectMetadata, SceneFramerate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneFramerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneFramerate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneTimecode_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneTimecode = { "SceneTimecode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubjectMetadata, SceneTimecode), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneTimecode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata = { "StringMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubjectMetadata, StringMetadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_Key_KeyProp = { "StringMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_ValueProp = { "StringMetadata", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubjectMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneFramerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneTimecode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"SubjectMetadata",
		sizeof(FSubjectMetadata),
		alignof(FSubjectMetadata),
		Z_Construct_UScriptStruct_FSubjectMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubjectMetadata()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubjectMetadata_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubjectMetadata"), sizeof(FSubjectMetadata), Get_Z_Construct_UScriptStruct_FSubjectMetadata_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubjectMetadata_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubjectMetadata_Hash() { return 1460657161U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
