// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/LiveLinkSourceSettings.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSourceSettings() {}
// Cross Module References
	LIVELINKINTERFACE_API UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister();
// End Cross Module References
	static UEnum* ELiveLinkSourceMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("ELiveLinkSourceMode"));
		}
		return Singleton;
	}
	template<> LIVELINKINTERFACE_API UEnum* StaticEnum<ELiveLinkSourceMode>()
	{
		return ELiveLinkSourceMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELiveLinkSourceMode(ELiveLinkSourceMode_StaticEnum, TEXT("/Script/LiveLinkInterface"), TEXT("ELiveLinkSourceMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Hash() { return 2994792593U; }
	UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELiveLinkSourceMode"), 0, Get_Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELiveLinkSourceMode::Latest", (int64)ELiveLinkSourceMode::Latest },
				{ "ELiveLinkSourceMode::EngineTime", (int64)ELiveLinkSourceMode::EngineTime },
				{ "ELiveLinkSourceMode::Timecode", (int64)ELiveLinkSourceMode::Timecode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EngineTime.Comment", "//The source will use the engine's time to evaluate its subjects.\n//This mode is most useful when smooth animation is desired.\n" },
				{ "EngineTime.Name", "ELiveLinkSourceMode::EngineTime" },
				{ "EngineTime.ToolTip", "The source will use the engine's time to evaluate its subjects.\nThis mode is most useful when smooth animation is desired." },
				{ "Latest.Comment", "//The source will the latest frame available to evaluate its subjects.\n//This mode will not attempt any type of interpolation or time synchronization.\n" },
				{ "Latest.Name", "ELiveLinkSourceMode::Latest" },
				{ "Latest.ToolTip", "The source will the latest frame available to evaluate its subjects.\nThis mode will not attempt any type of interpolation or time synchronization." },
				{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
				{ "Timecode.Comment", "//The source will use the engine's timecode to evaluate its subjects.\n//This mode is most useful when sources need to be synchronized with \n//multiple other external inputs\n//(such as video or other time synchronized sources).\n//Should not be used when the engine isn't setup with a Timecode provider.\n" },
				{ "Timecode.Name", "ELiveLinkSourceMode::Timecode" },
				{ "Timecode.ToolTip", "The source will use the engine's timecode to evaluate its subjects.\nThis mode is most useful when sources need to be synchronized with\nmultiple other external inputs\n(such as video or other time synchronized sources).\nShould not be used when the engine isn't setup with a Timecode provider." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkInterface,
				nullptr,
				"ELiveLinkSourceMode",
				"ELiveLinkSourceMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLiveLinkInterpolationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkInterpolationSettings"), sizeof(FLiveLinkInterpolationSettings), Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkInterpolationSettings>()
{
	return FLiveLinkInterpolationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkInterpolationSettings(FLiveLinkInterpolationSettings::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkInterpolationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkInterpolationSettings
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkInterpolationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkInterpolationSettings")),new UScriptStruct::TCppStructOps<FLiveLinkInterpolationSettings>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkInterpolationSettings;
	struct Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInterpolation_MetaData[];
#endif
		static void NewProp_bUseInterpolation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInterpolation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkInterpolationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When interpolating: how far back from current time should we read the buffer (in seconds) */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When interpolating: how far back from current time should we read the buffer (in seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset = { "InterpolationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkInterpolationSettings, InterpolationOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_SetBit(void* Obj)
	{
		((FLiveLinkInterpolationSettings*)Obj)->bUseInterpolation_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation = { "bUseInterpolation", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkInterpolationSettings), &Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkInterpolationSettings",
		sizeof(FLiveLinkInterpolationSettings),
		alignof(FLiveLinkInterpolationSettings),
		Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkInterpolationSettings"), sizeof(FLiveLinkInterpolationSettings), Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Hash() { return 3279385148U; }
class UScriptStruct* FLiveLinkTimeSynchronizationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTimeSynchronizationSettings"), sizeof(FLiveLinkTimeSynchronizationSettings), Get_Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTimeSynchronizationSettings>()
{
	return FLiveLinkTimeSynchronizationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkTimeSynchronizationSettings(FLiveLinkTimeSynchronizationSettings::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkTimeSynchronizationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeSynchronizationSettings
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeSynchronizationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkTimeSynchronizationSettings")),new UScriptStruct::TCppStructOps<FLiveLinkTimeSynchronizationSettings>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeSynchronizationSettings;
	struct Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTimeSynchronizationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating: how far back from current timecode should we read the buffer (in frame number) */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating: how far back from current timecode should we read the buffer (in frame number)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameOffset = { "FrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkTimeSynchronizationSettings, FrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * The frame rate of the source.\n\x09 * This should be the frame rate the source is \"stamped\" at, not necessarily the frame rate the source is sending.\n\x09 * The source should supply this whenever possible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "The frame rate of the source.\nThis should be the frame rate the source is \"stamped\" at, not necessarily the frame rate the source is sending.\nThe source should supply this whenever possible." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkTimeSynchronizationSettings, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkTimeSynchronizationSettings",
		sizeof(FLiveLinkTimeSynchronizationSettings),
		alignof(FLiveLinkTimeSynchronizationSettings),
		Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkTimeSynchronizationSettings"), sizeof(FLiveLinkTimeSynchronizationSettings), Get_Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Hash() { return 169020805U; }
class UScriptStruct* FLiveLinkSourceDebugInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSourceDebugInfo"), sizeof(FLiveLinkSourceDebugInfo), Get_Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSourceDebugInfo>()
{
	return FLiveLinkSourceDebugInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkSourceDebugInfo(FLiveLinkSourceDebugInfo::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkSourceDebugInfo"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSourceDebugInfo
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSourceDebugInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkSourceDebugInfo")),new UScriptStruct::TCppStructOps<FLiveLinkSourceDebugInfo>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSourceDebugInfo;
	struct Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfBufferAtSnapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfBufferAtSnapshot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SnapshotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSourceDebugInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_NumberOfBufferAtSnapshot_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_NumberOfBufferAtSnapshot = { "NumberOfBufferAtSnapshot", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSourceDebugInfo, NumberOfBufferAtSnapshot), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_NumberOfBufferAtSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_NumberOfBufferAtSnapshot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SnapshotIndex_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SnapshotIndex = { "SnapshotIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSourceDebugInfo, SnapshotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SnapshotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SnapshotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSourceDebugInfo, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SubjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_NumberOfBufferAtSnapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SnapshotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SubjectName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkSourceDebugInfo",
		sizeof(FLiveLinkSourceDebugInfo),
		alignof(FLiveLinkSourceDebugInfo),
		Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkSourceDebugInfo"), sizeof(FLiveLinkSourceDebugInfo), Get_Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Hash() { return 76726383U; }
class UScriptStruct* FLiveLinkSourceBufferManagementSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSourceBufferManagementSettings"), sizeof(FLiveLinkSourceBufferManagementSettings), Get_Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSourceBufferManagementSettings>()
{
	return FLiveLinkSourceBufferManagementSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkSourceBufferManagementSettings(FLiveLinkSourceBufferManagementSettings::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkSourceBufferManagementSettings"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSourceBufferManagementSettings
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSourceBufferManagementSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkSourceBufferManagementSettings")),new UScriptStruct::TCppStructOps<FLiveLinkSourceBufferManagementSettings>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSourceBufferManagementSettings;
	struct Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepAtLeastOneFrame_MetaData[];
#endif
		static void NewProp_bKeepAtLeastOneFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepAtLeastOneFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfFrameToBuffered_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfFrameToBuffered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatestOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LatestOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimecodeClockOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_TimecodeClockOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimecodeFrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimecodeFrameOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidTimecodeFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ValidTimecodeFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValidTimecodeFrameEnabled_MetaData[];
#endif
		static void NewProp_bValidTimecodeFrameEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValidTimecodeFrameEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTimecodeFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceTimecodeFrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTimecodeSmoothLatest_MetaData[];
#endif
		static void NewProp_bUseTimecodeSmoothLatest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTimecodeSmoothLatest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateSubFrame_MetaData[];
#endif
		static void NewProp_bGenerateSubFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateSubFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimecodeFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimecodeFrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineTimeClockOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_EngineTimeClockOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineTimeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EngineTimeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidEngineTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ValidEngineTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValidEngineTimeEnabled_MetaData[];
#endif
		static void NewProp_bValidEngineTimeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValidEngineTimeEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//~ A customizer will add the properties manually. You'll need to update LiveLinkSourceSettingsDetailCustomization if you add a property here.\n" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSourceBufferManagementSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When cleaning the buffer keep at least one frame, even if the frame doesn't matches the other options. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When cleaning the buffer keep at least one frame, even if the frame doesn't matches the other options." },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame_SetBit(void* Obj)
	{
		((FLiveLinkSourceBufferManagementSettings*)Obj)->bKeepAtLeastOneFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame = { "bKeepAtLeastOneFrame", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_MaxNumberOfFrameToBuffered_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of frame to keep in memory. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Maximum number of frame to keep in memory." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_MaxNumberOfFrameToBuffered = { "MaxNumberOfFrameToBuffered", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, MaxNumberOfFrameToBuffered), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_MaxNumberOfFrameToBuffered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_MaxNumberOfFrameToBuffered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_LatestOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating with latest: how far back from latest frame should we read the buffer */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating with latest: how far back from latest frame should we read the buffer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_LatestOffset = { "LatestOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, LatestOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_LatestOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_LatestOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeClockOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Continuously updated clock offset estimator between source timecode clock and engine timecode provider clock (in seconds) */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Continuously updated clock offset estimator between source timecode clock and engine timecode provider clock (in seconds)" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeClockOffset = { "TimecodeClockOffset", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, TimecodeClockOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeClockOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeClockOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating with timecode: how far back from current timecode should we read the buffer (in TimecodeFrameRate). */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating with timecode: how far back from current timecode should we read the buffer (in TimecodeFrameRate)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameOffset = { "TimecodeFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, TimecodeFrameOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidTimecodeFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** If the frame timecode is older than ValidTimecodeFrame, remove it from the buffer list (in TimecodeFrameRate). */" },
		{ "EditCondition", "bValidTimecodeFrameEnabled" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "If the frame timecode is older than ValidTimecodeFrame, remove it from the buffer list (in TimecodeFrameRate)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidTimecodeFrame = { "ValidTimecodeFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, ValidTimecodeFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidTimecodeFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidTimecodeFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If the frame timecode is older than ValidTimecodeFrame, remove it from the buffer list (in TimecodeFrameRate). */" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "If the frame timecode is older than ValidTimecodeFrame, remove it from the buffer list (in TimecodeFrameRate)." },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled_SetBit(void* Obj)
	{
		((FLiveLinkSourceBufferManagementSettings*)Obj)->bValidTimecodeFrameEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled = { "bValidTimecodeFrameEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SourceTimecodeFrameRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * What is the source frame rate.\n\x09 * When the refresh rate of the source is bigger than the timecode frame rate, LiveLink will try to generate sub frame numbers.\n\x09 * @note The source should generate the sub frame numbers. Use this setting when the source is not able to do so.\n\x09 * @note The generated sub frame numbers will not be saved by Sequencer.\n\x09 */" },
		{ "EditCondition", "bGenerateSubFrame" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "What is the source frame rate.\nWhen the refresh rate of the source is bigger than the timecode frame rate, LiveLink will try to generate sub frame numbers.\n@note The source should generate the sub frame numbers. Use this setting when the source is not able to do so.\n@note The generated sub frame numbers will not be saved by Sequencer." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SourceTimecodeFrameRate = { "SourceTimecodeFrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, SourceTimecodeFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SourceTimecodeFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SourceTimecodeFrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating with timecode, align source timecode using a continuous clock offset to do a smooth latest \n\x09 * This means that even if engine Timecode and source Timecode are not aligned, the offset between both clocks\n\x09 * will be tracked to keep them aligned. With an additionnal offset, 1.5 is a good number, you can evaluate\n\x09 * your subject using the latest frame by keeping just enough margin to have a smooth playback and avoid starving.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating with timecode, align source timecode using a continuous clock offset to do a smooth latest\nThis means that even if engine Timecode and source Timecode are not aligned, the offset between both clocks\nwill be tracked to keep them aligned. With an additionnal offset, 1.5 is a good number, you can evaluate\nyour subject using the latest frame by keeping just enough margin to have a smooth playback and avoid starving." },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest_SetBit(void* Obj)
	{
		((FLiveLinkSourceBufferManagementSettings*)Obj)->bUseTimecodeSmoothLatest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest = { "bUseTimecodeSmoothLatest", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame_SetBit(void* Obj)
	{
		((FLiveLinkSourceBufferManagementSettings*)Obj)->bGenerateSubFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame = { "bGenerateSubFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating with timecode: what is the expected frame rate of the timecode */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating with timecode: what is the expected frame rate of the timecode" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameRate = { "TimecodeFrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, TimecodeFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeClockOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Continuously updated clock offset estimator between source clock and engine clock (in seconds) */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Continuously updated clock offset estimator between source clock and engine clock (in seconds)" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeClockOffset = { "EngineTimeClockOffset", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, EngineTimeClockOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeClockOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeClockOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating with time: how far back from current time should we read the buffer (in seconds) */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating with time: how far back from current time should we read the buffer (in seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeOffset = { "EngineTimeOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, EngineTimeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidEngineTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.500000" },
		{ "Comment", "/** If the frame is older than ValidTime, remove it from the buffer list (in seconds). */" },
		{ "EditCondition", "bValidEngineTimeEnabled" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "If the frame is older than ValidTime, remove it from the buffer list (in seconds)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidEngineTime = { "ValidEngineTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, ValidEngineTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidEngineTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidEngineTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Enabled the ValidEngineTime setting. */" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Enabled the ValidEngineTime setting." },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled_SetBit(void* Obj)
	{
		((FLiveLinkSourceBufferManagementSettings*)Obj)->bValidEngineTimeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled = { "bValidEngineTimeEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_MaxNumberOfFrameToBuffered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_LatestOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeClockOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidTimecodeFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SourceTimecodeFrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeClockOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidEngineTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkSourceBufferManagementSettings",
		sizeof(FLiveLinkSourceBufferManagementSettings),
		alignof(FLiveLinkSourceBufferManagementSettings),
		Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkSourceBufferManagementSettings"), sizeof(FLiveLinkSourceBufferManagementSettings), Get_Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Hash() { return 3871583026U; }
	void ULiveLinkSourceSettings::StaticRegisterNativesULiveLinkSourceSettings()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister()
	{
		return ULiveLinkSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceDebugInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceDebugInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceDebugInfos_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Factory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Factory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BufferSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BufferSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for live link source settings (can be replaced by sources themselves) */" },
		{ "IncludePath", "LiveLinkSourceSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Base class for live link source settings (can be replaced by sources themselves)" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos = { "SourceDebugInfos", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSourceSettings, SourceDebugInfos_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos_Inner = { "SourceDebugInfos", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Factory_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Factory used to create the source. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Factory used to create the source." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0014040000020001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSourceSettings, Factory), Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Factory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Factory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_ConnectionString_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Connection information that is needed by the factory to recreate the source from a preset. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Connection information that is needed by the factory to recreate the source from a preset." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_ConnectionString = { "ConnectionString", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSourceSettings, ConnectionString), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_ConnectionString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_ConnectionString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_BufferSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How the frame buffers are managed. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "How the frame buffers are managed." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_BufferSettings = { "BufferSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSourceSettings, BufferSettings), Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_BufferSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_BufferSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * The the subject how to create the frame snapshot.\n\x09 * @note A client may evaluate manually the subject in a different mode by using EvaluateFrameAtWorldTime or EvaluateFrameAtSceneTime.\n\x09 */" },
		{ "DisplayName", "Evaluation Mode" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "The the subject how to create the frame snapshot.\n@note A client may evaluate manually the subject in a different mode by using EvaluateFrameAtWorldTime or EvaluateFrameAtSceneTime." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSourceSettings, Mode), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkSourceSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Factory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_ConnectionString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_BufferSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSourceSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::ClassParams = {
		&ULiveLinkSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkSourceSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkSourceSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkSourceSettings, 172973488);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkSourceSettings>()
	{
		return ULiveLinkSourceSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkSourceSettings(Z_Construct_UClass_ULiveLinkSourceSettings, &ULiveLinkSourceSettings::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkSourceSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSourceSettings);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULiveLinkSourceSettings)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
