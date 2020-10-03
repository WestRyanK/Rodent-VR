// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/LiveLinkTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTypes() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFrameData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMetaData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkWorldTime();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCurveElement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeCode();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTime();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectKey();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FLiveLinkFrameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkFrameData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkFrameData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkFrameData"), sizeof(FLiveLinkFrameData), Get_Z_Construct_UScriptStruct_FLiveLinkFrameData_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkFrameData>()
{
	return FLiveLinkFrameData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkFrameData(FLiveLinkFrameData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkFrameData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkFrameData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkFrameData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkFrameData")),new UScriptStruct::TCppStructOps<FLiveLinkFrameData>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkFrameData;
	struct Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurveElements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurveElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Store animation frame data */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Store animation frame data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkFrameData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_MetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkFrameData, MetaData), Z_Construct_UScriptStruct_FLiveLinkMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_WorldTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_WorldTime = { "WorldTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkFrameData, WorldTime), Z_Construct_UScriptStruct_FLiveLinkWorldTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_WorldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_WorldTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_CurveElements_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_CurveElements = { "CurveElements", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkFrameData, CurveElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_CurveElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_CurveElements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_CurveElements_Inner = { "CurveElements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiveLinkCurveElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_Transforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkFrameData, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_Transforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_WorldTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_CurveElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_CurveElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_Transforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_Transforms_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkFrameData",
		sizeof(FLiveLinkFrameData),
		alignof(FLiveLinkFrameData),
		Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFrameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkFrameData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkFrameData"), sizeof(FLiveLinkFrameData), Get_Z_Construct_UScriptStruct_FLiveLinkFrameData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkFrameData_Hash() { return 721730265U; }
class UScriptStruct* FLiveLinkCurveElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCurveElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCurveElement, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkCurveElement"), sizeof(FLiveLinkCurveElement), Get_Z_Construct_UScriptStruct_FLiveLinkCurveElement_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkCurveElement>()
{
	return FLiveLinkCurveElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkCurveElement(FLiveLinkCurveElement::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkCurveElement"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCurveElement
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCurveElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkCurveElement")),new UScriptStruct::TCppStructOps<FLiveLinkCurveElement>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCurveElement;
	struct Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCurveElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkCurveElement, CurveValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkCurveElement, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkCurveElement",
		sizeof(FLiveLinkCurveElement),
		alignof(FLiveLinkCurveElement),
		Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCurveElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCurveElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkCurveElement"), sizeof(FLiveLinkCurveElement), Get_Z_Construct_UScriptStruct_FLiveLinkCurveElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCurveElement_Hash() { return 4154580501U; }
class UScriptStruct* FLiveLinkTimeCode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTimeCode, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTimeCode"), sizeof(FLiveLinkTimeCode), Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTimeCode>()
{
	return FLiveLinkTimeCode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkTimeCode(FLiveLinkTimeCode::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkTimeCode"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeCode
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeCode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkTimeCode")),new UScriptStruct::TCppStructOps<FLiveLinkTimeCode>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeCode;
	struct Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A Qualified TimeCode associated with \n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "A Qualified TimeCode associated with" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTimeCode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED,
		&NewStructOps,
		"LiveLinkTimeCode",
		sizeof(FLiveLinkTimeCode),
		alignof(FLiveLinkTimeCode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeCode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkTimeCode"), sizeof(FLiveLinkTimeCode), Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_Hash() { return 1134862552U; }
class UScriptStruct* FLiveLinkTimeCode_Base_DEPRECATED::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTimeCode_Base_DEPRECATED"), sizeof(FLiveLinkTimeCode_Base_DEPRECATED), Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTimeCode_Base_DEPRECATED>()
{
	return FLiveLinkTimeCode_Base_DEPRECATED::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED(FLiveLinkTimeCode_Base_DEPRECATED::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkTimeCode_Base_DEPRECATED"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeCode_Base_DEPRECATED
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeCode_Base_DEPRECATED()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkTimeCode_Base_DEPRECATED")),new UScriptStruct::TCppStructOps<FLiveLinkTimeCode_Base_DEPRECATED>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeCode_Base_DEPRECATED;
	struct Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Frames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTimeCode_Base_DEPRECATED>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Comment", "// Value calculated on create to represent the different between the source time and client time\n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Value calculated on create to represent the different between the source time and client time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkTimeCode_Base_DEPRECATED, FrameRate), Z_Construct_UScriptStruct_FLiveLinkFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Frames_MetaData[] = {
		{ "Comment", "// Integer Frames since last second\n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Integer Frames since last second" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkTimeCode_Base_DEPRECATED, Frames), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Frames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Seconds_MetaData[] = {
		{ "Comment", "// Integer Seconds since Epoch \n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Integer Seconds since Epoch" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkTimeCode_Base_DEPRECATED, Seconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Seconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_FrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Frames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Seconds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkTimeCode_Base_DEPRECATED",
		sizeof(FLiveLinkTimeCode_Base_DEPRECATED),
		alignof(FLiveLinkTimeCode_Base_DEPRECATED),
		Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkTimeCode_Base_DEPRECATED"), sizeof(FLiveLinkTimeCode_Base_DEPRECATED), Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Hash() { return 63274464U; }
class UScriptStruct* FLiveLinkFrameRate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkFrameRate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkFrameRate, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkFrameRate"), sizeof(FLiveLinkFrameRate), Get_Z_Construct_UScriptStruct_FLiveLinkFrameRate_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkFrameRate>()
{
	return FLiveLinkFrameRate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkFrameRate(FLiveLinkFrameRate::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkFrameRate"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkFrameRate
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkFrameRate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkFrameRate")),new UScriptStruct::TCppStructOps<FLiveLinkFrameRate>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkFrameRate;
	struct Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkFrameRate>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FFrameRate,
		&NewStructOps,
		"LiveLinkFrameRate",
		sizeof(FLiveLinkFrameRate),
		alignof(FLiveLinkFrameRate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFrameRate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkFrameRate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkFrameRate"), sizeof(FLiveLinkFrameRate), Get_Z_Construct_UScriptStruct_FLiveLinkFrameRate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkFrameRate_Hash() { return 1956470768U; }
class UScriptStruct* FLiveLinkBaseBlueprintData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkBaseBlueprintData"), sizeof(FLiveLinkBaseBlueprintData), Get_Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkBaseBlueprintData>()
{
	return FLiveLinkBaseBlueprintData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkBaseBlueprintData(FLiveLinkBaseBlueprintData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkBaseBlueprintData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkBaseBlueprintData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkBaseBlueprintData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkBaseBlueprintData")),new UScriptStruct::TCppStructOps<FLiveLinkBaseBlueprintData>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkBaseBlueprintData;
	struct Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base blueprint data structure for a subject frame\n * Can be used to do blueprint facilitator per role\n */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Base blueprint data structure for a subject frame\nCan be used to do blueprint facilitator per role" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkBaseBlueprintData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkBaseBlueprintData",
		sizeof(FLiveLinkBaseBlueprintData),
		alignof(FLiveLinkBaseBlueprintData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkBaseBlueprintData"), sizeof(FLiveLinkBaseBlueprintData), Get_Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Hash() { return 2491531825U; }
class UScriptStruct* FLiveLinkBaseStaticData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkBaseStaticData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkBaseStaticData"), sizeof(FLiveLinkBaseStaticData), Get_Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkBaseStaticData>()
{
	return FLiveLinkBaseStaticData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkBaseStaticData(FLiveLinkBaseStaticData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkBaseStaticData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkBaseStaticData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkBaseStaticData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkBaseStaticData")),new UScriptStruct::TCppStructOps<FLiveLinkBaseStaticData>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkBaseStaticData;
	struct Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PropertyNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base static data structure for a subject\n * Use to store information that is common to every frame\n * @note subclass can't contains reference to UObject\n */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Base static data structure for a subject\nUse to store information that is common to every frame\n@note subclass can't contains reference to UObject" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkBaseStaticData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewProp_PropertyNames_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Names for each curve values that will be sent for each frame */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Names for each curve values that will be sent for each frame" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewProp_PropertyNames = { "PropertyNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkBaseStaticData, PropertyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewProp_PropertyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewProp_PropertyNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewProp_PropertyNames_Inner = { "PropertyNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewProp_PropertyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewProp_PropertyNames_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkBaseStaticData",
		sizeof(FLiveLinkBaseStaticData),
		alignof(FLiveLinkBaseStaticData),
		Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkBaseStaticData"), sizeof(FLiveLinkBaseStaticData), Get_Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Hash() { return 1513773825U; }
class UScriptStruct* FLiveLinkBaseFrameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkBaseFrameData"), sizeof(FLiveLinkBaseFrameData), Get_Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkBaseFrameData>()
{
	return FLiveLinkBaseFrameData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkBaseFrameData(FLiveLinkBaseFrameData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkBaseFrameData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkBaseFrameData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkBaseFrameData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkBaseFrameData")),new UScriptStruct::TCppStructOps<FLiveLinkBaseFrameData>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkBaseFrameData;
	struct Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PropertyValues;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PropertyValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base data structure for each frame coming in for a subject\n * @note subclass can't contains reference to UObject\n */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Base data structure for each frame coming in for a subject\n@note subclass can't contains reference to UObject" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkBaseFrameData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_PropertyValues_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Values of the properties defined in the static structure. Use FLiveLinkBaseStaticData.FindPropertyValue to evaluate. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Values of the properties defined in the static structure. Use FLiveLinkBaseStaticData.FindPropertyValue to evaluate." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_PropertyValues = { "PropertyValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkBaseFrameData, PropertyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_PropertyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_PropertyValues_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_PropertyValues_Inner = { "PropertyValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Frame's metadata. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Frame's metadata." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkBaseFrameData, MetaData), Z_Construct_UScriptStruct_FLiveLinkMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_WorldTime_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Time in seconds the frame was created. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Time in seconds the frame was created." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_WorldTime = { "WorldTime", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkBaseFrameData, WorldTime), Z_Construct_UScriptStruct_FLiveLinkWorldTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_WorldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_WorldTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_PropertyValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_PropertyValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_WorldTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkBaseFrameData",
		sizeof(FLiveLinkBaseFrameData),
		alignof(FLiveLinkBaseFrameData),
		Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkBaseFrameData"), sizeof(FLiveLinkBaseFrameData), Get_Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Hash() { return 3173706511U; }
class UScriptStruct* FLiveLinkMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkMetaData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkMetaData"), sizeof(FLiveLinkMetaData), Get_Z_Construct_UScriptStruct_FLiveLinkMetaData_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkMetaData>()
{
	return FLiveLinkMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkMetaData(FLiveLinkMetaData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkMetaData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkMetaData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkMetaData")),new UScriptStruct::TCppStructOps<FLiveLinkMetaData>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkMetaData;
	struct Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SceneTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StringMetaData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringMetaData_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringMetaData_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkMetaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_SceneTime_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_SceneTime = { "SceneTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkMetaData, SceneTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_SceneTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_SceneTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData = { "StringMetaData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkMetaData, StringMetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData_Key_KeyProp = { "StringMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData_ValueProp = { "StringMetaData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_SceneTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkMetaData",
		sizeof(FLiveLinkMetaData),
		alignof(FLiveLinkMetaData),
		Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkMetaData"), sizeof(FLiveLinkMetaData), Get_Z_Construct_UScriptStruct_FLiveLinkMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkMetaData_Hash() { return 2396316588U; }
class UScriptStruct* FLiveLinkTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTime, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTime"), sizeof(FLiveLinkTime), Get_Z_Construct_UScriptStruct_FLiveLinkTime_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTime>()
{
	return FLiveLinkTime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkTime(FLiveLinkTime::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkTime"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTime
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkTime")),new UScriptStruct::TCppStructOps<FLiveLinkTime>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTime;
	struct Z_Construct_UScriptStruct_FLiveLinkTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SceneTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_WorldTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_SceneTime_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_SceneTime = { "SceneTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkTime, SceneTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_SceneTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_SceneTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_WorldTime_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_WorldTime = { "WorldTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkTime, WorldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_WorldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_WorldTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_SceneTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_WorldTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkTime",
		sizeof(FLiveLinkTime),
		alignof(FLiveLinkTime),
		Z_Construct_UScriptStruct_FLiveLinkTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkTime"), sizeof(FLiveLinkTime), Get_Z_Construct_UScriptStruct_FLiveLinkTime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkTime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTime_Hash() { return 4021531114U; }
class UScriptStruct* FLiveLinkWorldTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkWorldTime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkWorldTime, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkWorldTime"), sizeof(FLiveLinkWorldTime), Get_Z_Construct_UScriptStruct_FLiveLinkWorldTime_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkWorldTime>()
{
	return FLiveLinkWorldTime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkWorldTime(FLiveLinkWorldTime::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkWorldTime"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkWorldTime
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkWorldTime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkWorldTime")),new UScriptStruct::TCppStructOps<FLiveLinkWorldTime>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkWorldTime;
	struct Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkWorldTime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Offset_MetaData[] = {
		{ "Comment", "// Value calculated on create to represent the different between the source time and client time\n// Can also be updated afterwards if a better continuous offset is calculated\n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Value calculated on create to represent the different between the source time and client time\nCan also be updated afterwards if a better continuous offset is calculated" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkWorldTime, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "// SourceTime for this frame. Used during interpolation and to compute a running clock offset\n" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "SourceTime for this frame. Used during interpolation and to compute a running clock offset" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkWorldTime, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkWorldTime",
		sizeof(FLiveLinkWorldTime),
		alignof(FLiveLinkWorldTime),
		Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkWorldTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkWorldTime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkWorldTime"), sizeof(FLiveLinkWorldTime), Get_Z_Construct_UScriptStruct_FLiveLinkWorldTime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkWorldTime_Hash() { return 2397136430U; }
class UScriptStruct* FLiveLinkSubjectKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectKey, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSubjectKey"), sizeof(FLiveLinkSubjectKey), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSubjectKey>()
{
	return FLiveLinkSubjectKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkSubjectKey(FLiveLinkSubjectKey::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkSubjectKey"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSubjectKey
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSubjectKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkSubjectKey")),new UScriptStruct::TCppStructOps<FLiveLinkSubjectKey>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSubjectKey;
	struct Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Structure that identifies an individual subject\n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Structure that identifies an individual subject" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// The Name of this subject\n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "The Name of this subject" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSubjectKey, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_SubjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// The guid for this subjects source\n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "The guid for this subjects source" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSubjectKey, Source), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_SubjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_Source,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkSubjectKey",
		sizeof(FLiveLinkSubjectKey),
		alignof(FLiveLinkSubjectKey),
		Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkSubjectKey"), sizeof(FLiveLinkSubjectKey), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Hash() { return 1353039492U; }
class UScriptStruct* FLiveLinkSubjectName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectName, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSubjectName"), sizeof(FLiveLinkSubjectName), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectName_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSubjectName>()
{
	return FLiveLinkSubjectName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkSubjectName(FLiveLinkSubjectName::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkSubjectName"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSubjectName
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSubjectName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkSubjectName")),new UScriptStruct::TCppStructOps<FLiveLinkSubjectName>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSubjectName;
	struct Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "// Name of the subject\n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Name of the subject" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSubjectName, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkSubjectName",
		sizeof(FLiveLinkSubjectName),
		alignof(FLiveLinkSubjectName),
		Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkSubjectName"), sizeof(FLiveLinkSubjectName), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectName_Hash() { return 3597069288U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
