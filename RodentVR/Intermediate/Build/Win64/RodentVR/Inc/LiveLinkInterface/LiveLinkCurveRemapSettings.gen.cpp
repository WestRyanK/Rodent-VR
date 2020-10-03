// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/LiveLinkCurveRemapSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkCurveRemapSettings() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkCurveRemapSettings_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkCurveRemapSettings();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
// End Cross Module References
class UScriptStruct* FLiveLinkCurveConversionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkCurveConversionSettings"), sizeof(FLiveLinkCurveConversionSettings), Get_Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkCurveConversionSettings>()
{
	return FLiveLinkCurveConversionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkCurveConversionSettings(FLiveLinkCurveConversionSettings::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkCurveConversionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCurveConversionSettings
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCurveConversionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkCurveConversionSettings")),new UScriptStruct::TCppStructOps<FLiveLinkCurveConversionSettings>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCurveConversionSettings;
	struct Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveConversionAssetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CurveConversionAssetMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurveConversionAssetMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurveConversionAssetMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkCurveRemapSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCurveConversionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap_MetaData[] = {
		{ "AllowedClasses", "PoseAsset" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkCurveRemapSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap = { "CurveConversionAssetMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkCurveConversionSettings, CurveConversionAssetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap_Key_KeyProp = { "CurveConversionAssetMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap_ValueProp = { "CurveConversionAssetMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewProp_CurveConversionAssetMap_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkCurveConversionSettings",
		sizeof(FLiveLinkCurveConversionSettings),
		alignof(FLiveLinkCurveConversionSettings),
		Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkCurveConversionSettings"), sizeof(FLiveLinkCurveConversionSettings), Get_Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Hash() { return 1132779432U; }
	void ULiveLinkCurveRemapSettings::StaticRegisterNativesULiveLinkCurveRemapSettings()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkCurveRemapSettings_NoRegister()
	{
		return ULiveLinkCurveRemapSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveConversionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurveConversionSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "LiveLink" },
		{ "IncludePath", "LiveLinkCurveRemapSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkCurveRemapSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::NewProp_CurveConversionSettings_MetaData[] = {
		{ "Category", "Curve Conversion Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkCurveRemapSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::NewProp_CurveConversionSettings = { "CurveConversionSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkCurveRemapSettings, CurveConversionSettings), Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::NewProp_CurveConversionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::NewProp_CurveConversionSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::NewProp_CurveConversionSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkCurveRemapSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::ClassParams = {
		&ULiveLinkCurveRemapSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkCurveRemapSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkCurveRemapSettings, 2937254505);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkCurveRemapSettings>()
	{
		return ULiveLinkCurveRemapSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkCurveRemapSettings(Z_Construct_UClass_ULiveLinkCurveRemapSettings, &ULiveLinkCurveRemapSettings::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkCurveRemapSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkCurveRemapSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
