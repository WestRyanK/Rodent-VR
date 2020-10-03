// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeap/Public/MagicLeapHMDFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapHMDFunctionLibrary() {}
// Cross Module References
	MAGICLEAP_API UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingMapEvent();
	UPackage* Z_Construct_UPackage__Script_MagicLeap();
	MAGICLEAP_API UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingMode();
	MAGICLEAP_API UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingError();
	MAGICLEAP_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo();
	MAGICLEAP_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState();
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapHMDFunctionLibrary_NoRegister();
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapHMDFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EMagicLeapHeadTrackingMapEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingMapEvent, Z_Construct_UPackage__Script_MagicLeap(), TEXT("EMagicLeapHeadTrackingMapEvent"));
		}
		return Singleton;
	}
	template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapHeadTrackingMapEvent>()
	{
		return EMagicLeapHeadTrackingMapEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapHeadTrackingMapEvent(EMagicLeapHeadTrackingMapEvent_StaticEnum, TEXT("/Script/MagicLeap"), TEXT("EMagicLeapHeadTrackingMapEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingMapEvent_Hash() { return 170098765U; }
	UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingMapEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapHeadTrackingMapEvent"), 0, Get_Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingMapEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapHeadTrackingMapEvent::Lost", (int64)EMagicLeapHeadTrackingMapEvent::Lost },
				{ "EMagicLeapHeadTrackingMapEvent::Recovered", (int64)EMagicLeapHeadTrackingMapEvent::Recovered },
				{ "EMagicLeapHeadTrackingMapEvent::RecoveryFailed", (int64)EMagicLeapHeadTrackingMapEvent::RecoveryFailed },
				{ "EMagicLeapHeadTrackingMapEvent::NewSession", (int64)EMagicLeapHeadTrackingMapEvent::NewSession },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Different types of map events that can occur that a developer may have to handle. */" },
				{ "Lost.Comment", "/** Map was lost. It could possibly recover. */" },
				{ "Lost.Name", "EMagicLeapHeadTrackingMapEvent::Lost" },
				{ "Lost.ToolTip", "Map was lost. It could possibly recover." },
				{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
				{ "NewSession.Comment", "/** New map session created. */" },
				{ "NewSession.Name", "EMagicLeapHeadTrackingMapEvent::NewSession" },
				{ "NewSession.ToolTip", "New map session created." },
				{ "Recovered.Comment", "/** Previous map was recovered. */" },
				{ "Recovered.Name", "EMagicLeapHeadTrackingMapEvent::Recovered" },
				{ "Recovered.ToolTip", "Previous map was recovered." },
				{ "RecoveryFailed.Comment", "/** Failed to recover previous map. */" },
				{ "RecoveryFailed.Name", "EMagicLeapHeadTrackingMapEvent::RecoveryFailed" },
				{ "RecoveryFailed.ToolTip", "Failed to recover previous map." },
				{ "ToolTip", "Different types of map events that can occur that a developer may have to handle." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeap,
				nullptr,
				"EMagicLeapHeadTrackingMapEvent",
				"EMagicLeapHeadTrackingMapEvent",
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
	static UEnum* EMagicLeapHeadTrackingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingMode, Z_Construct_UPackage__Script_MagicLeap(), TEXT("EMagicLeapHeadTrackingMode"));
		}
		return Singleton;
	}
	template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapHeadTrackingMode>()
	{
		return EMagicLeapHeadTrackingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapHeadTrackingMode(EMagicLeapHeadTrackingMode_StaticEnum, TEXT("/Script/MagicLeap"), TEXT("EMagicLeapHeadTrackingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingMode_Hash() { return 2597743693U; }
	UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapHeadTrackingMode"), 0, Get_Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapHeadTrackingMode::PositionAndOrientation", (int64)EMagicLeapHeadTrackingMode::PositionAndOrientation },
				{ "EMagicLeapHeadTrackingMode::Unavailable", (int64)EMagicLeapHeadTrackingMode::Unavailable },
				{ "EMagicLeapHeadTrackingMode::Unknown", (int64)EMagicLeapHeadTrackingMode::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
				{ "PositionAndOrientation.Name", "EMagicLeapHeadTrackingMode::PositionAndOrientation" },
				{ "Unavailable.Name", "EMagicLeapHeadTrackingMode::Unavailable" },
				{ "Unknown.Name", "EMagicLeapHeadTrackingMode::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeap,
				nullptr,
				"EMagicLeapHeadTrackingMode",
				"EMagicLeapHeadTrackingMode",
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
	static UEnum* EMagicLeapHeadTrackingError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingError, Z_Construct_UPackage__Script_MagicLeap(), TEXT("EMagicLeapHeadTrackingError"));
		}
		return Singleton;
	}
	template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapHeadTrackingError>()
	{
		return EMagicLeapHeadTrackingError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapHeadTrackingError(EMagicLeapHeadTrackingError_StaticEnum, TEXT("/Script/MagicLeap"), TEXT("EMagicLeapHeadTrackingError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingError_Hash() { return 4272823754U; }
	UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapHeadTrackingError"), 0, Get_Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapHeadTrackingError::None", (int64)EMagicLeapHeadTrackingError::None },
				{ "EMagicLeapHeadTrackingError::NotEnoughFeatures", (int64)EMagicLeapHeadTrackingError::NotEnoughFeatures },
				{ "EMagicLeapHeadTrackingError::LowLight", (int64)EMagicLeapHeadTrackingError::LowLight },
				{ "EMagicLeapHeadTrackingError::Unknown", (int64)EMagicLeapHeadTrackingError::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LowLight.Name", "EMagicLeapHeadTrackingError::LowLight" },
				{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
				{ "None.Name", "EMagicLeapHeadTrackingError::None" },
				{ "NotEnoughFeatures.Name", "EMagicLeapHeadTrackingError::NotEnoughFeatures" },
				{ "Unknown.Name", "EMagicLeapHeadTrackingError::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeap,
				nullptr,
				"EMagicLeapHeadTrackingError",
				"EMagicLeapHeadTrackingError",
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
class UScriptStruct* FMagicLeapGraphicsClientPerformanceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAP_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo, Z_Construct_UPackage__Script_MagicLeap(), TEXT("MagicLeapGraphicsClientPerformanceInfo"), sizeof(FMagicLeapGraphicsClientPerformanceInfo), Get_Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Hash());
	}
	return Singleton;
}
template<> MAGICLEAP_API UScriptStruct* StaticStruct<FMagicLeapGraphicsClientPerformanceInfo>()
{
	return FMagicLeapGraphicsClientPerformanceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo(FMagicLeapGraphicsClientPerformanceInfo::StaticStruct, TEXT("/Script/MagicLeap"), TEXT("MagicLeapGraphicsClientPerformanceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapGraphicsClientPerformanceInfo
{
	FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapGraphicsClientPerformanceInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapGraphicsClientPerformanceInfo")),new UScriptStruct::TCppStructOps<FMagicLeapGraphicsClientPerformanceInfo>);
	}
} ScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapGraphicsClientPerformanceInfo;
	struct Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameInternalDurationGPUTimeMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameInternalDurationGPUTimeMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameInternalDurationCPUTimeMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameInternalDurationCPUTimeMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameDurationGPUTimeMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameDurationGPUTimeMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameDurationCPUTimeMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameDurationCPUTimeMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameStartCPUFrameStartCPUTimeMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameStartCPUFrameStartCPUTimeMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameStartCPUFrameEndGPUTimeMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameStartCPUFrameEndGPUTimeMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameStartCPUCompAcquireCPUTimeMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameStartCPUCompAcquireCPUTimeMs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapGraphicsClientPerformanceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameInternalDurationGPUTimeMs_MetaData[] = {
		{ "Category", "MagicLeap|Performance" },
		{ "Comment", "/** The average GPU duration for internal operations per frame, in milliseconds. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
		{ "ToolTip", "The average GPU duration for internal operations per frame, in milliseconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameInternalDurationGPUTimeMs = { "FrameInternalDurationGPUTimeMs", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapGraphicsClientPerformanceInfo, FrameInternalDurationGPUTimeMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameInternalDurationGPUTimeMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameInternalDurationGPUTimeMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameInternalDurationCPUTimeMs_MetaData[] = {
		{ "Category", "MagicLeap|Performance" },
		{ "Comment", "/** The average CPU duration for internal operations per frame, in milliseconds. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
		{ "ToolTip", "The average CPU duration for internal operations per frame, in milliseconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameInternalDurationCPUTimeMs = { "FrameInternalDurationCPUTimeMs", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapGraphicsClientPerformanceInfo, FrameInternalDurationCPUTimeMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameInternalDurationCPUTimeMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameInternalDurationCPUTimeMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameDurationGPUTimeMs_MetaData[] = {
		{ "Category", "MagicLeap|Performance" },
		{ "Comment", "/** The average frame GPU duration, in milliseconds. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
		{ "ToolTip", "The average frame GPU duration, in milliseconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameDurationGPUTimeMs = { "FrameDurationGPUTimeMs", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapGraphicsClientPerformanceInfo, FrameDurationGPUTimeMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameDurationGPUTimeMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameDurationGPUTimeMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameDurationCPUTimeMs_MetaData[] = {
		{ "Category", "MagicLeap|Performance" },
		{ "Comment", "/** The average frame CPU duration, in milliseconds. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
		{ "ToolTip", "The average frame CPU duration, in milliseconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameDurationCPUTimeMs = { "FrameDurationCPUTimeMs", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapGraphicsClientPerformanceInfo, FrameDurationCPUTimeMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameDurationCPUTimeMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameDurationCPUTimeMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUFrameStartCPUTimeMs_MetaData[] = {
		{ "Category", "MagicLeap|Performance" },
		{ "Comment", "/** The average frame cadence, CPU start to CPU start, in milliseconds. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
		{ "ToolTip", "The average frame cadence, CPU start to CPU start, in milliseconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUFrameStartCPUTimeMs = { "FrameStartCPUFrameStartCPUTimeMs", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapGraphicsClientPerformanceInfo, FrameStartCPUFrameStartCPUTimeMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUFrameStartCPUTimeMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUFrameStartCPUTimeMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUFrameEndGPUTimeMs_MetaData[] = {
		{ "Category", "MagicLeap|Performance" },
		{ "Comment", "/** The average frame start CPU to frame end GPU, in milliseconds. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
		{ "ToolTip", "The average frame start CPU to frame end GPU, in milliseconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUFrameEndGPUTimeMs = { "FrameStartCPUFrameEndGPUTimeMs", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapGraphicsClientPerformanceInfo, FrameStartCPUFrameEndGPUTimeMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUFrameEndGPUTimeMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUFrameEndGPUTimeMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUCompAcquireCPUTimeMs_MetaData[] = {
		{ "Category", "MagicLeap|Performance" },
		{ "Comment", "/** The average frame start CPU to composition acquisition of the frame, in milliseconds. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
		{ "ToolTip", "The average frame start CPU to composition acquisition of the frame, in milliseconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUCompAcquireCPUTimeMs = { "FrameStartCPUCompAcquireCPUTimeMs", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapGraphicsClientPerformanceInfo, FrameStartCPUCompAcquireCPUTimeMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUCompAcquireCPUTimeMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUCompAcquireCPUTimeMs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameInternalDurationGPUTimeMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameInternalDurationCPUTimeMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameDurationGPUTimeMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameDurationCPUTimeMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUFrameStartCPUTimeMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUFrameEndGPUTimeMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::NewProp_FrameStartCPUCompAcquireCPUTimeMs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
		nullptr,
		&NewStructOps,
		"MagicLeapGraphicsClientPerformanceInfo",
		sizeof(FMagicLeapGraphicsClientPerformanceInfo),
		alignof(FMagicLeapGraphicsClientPerformanceInfo),
		Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapGraphicsClientPerformanceInfo"), sizeof(FMagicLeapGraphicsClientPerformanceInfo), Get_Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Hash() { return 1212023851U; }
class UScriptStruct* FMagicLeapHeadTrackingState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAP_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState, Z_Construct_UPackage__Script_MagicLeap(), TEXT("MagicLeapHeadTrackingState"), sizeof(FMagicLeapHeadTrackingState), Get_Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Hash());
	}
	return Singleton;
}
template<> MAGICLEAP_API UScriptStruct* StaticStruct<FMagicLeapHeadTrackingState>()
{
	return FMagicLeapHeadTrackingState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapHeadTrackingState(FMagicLeapHeadTrackingState::StaticStruct, TEXT("/Script/MagicLeap"), TEXT("MagicLeapHeadTrackingState"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapHeadTrackingState
{
	FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapHeadTrackingState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapHeadTrackingState")),new UScriptStruct::TCppStructOps<FMagicLeapHeadTrackingState>);
	}
} ScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapHeadTrackingState;
	struct Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Confidence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapHeadTrackingState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapHeadTrackingState, Confidence), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Confidence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Error_MetaData[] = {
		{ "Category", "MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapHeadTrackingState, Error), Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingError, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapHeadTrackingState, Mode), Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Confidence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Error_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::NewProp_Mode_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
		nullptr,
		&NewStructOps,
		"MagicLeapHeadTrackingState",
		sizeof(FMagicLeapHeadTrackingState),
		alignof(FMagicLeapHeadTrackingState),
		Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapHeadTrackingState"), sizeof(FMagicLeapHeadTrackingState), Get_Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Hash() { return 920806661U; }
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execGetGraphicsClientPerformanceInfo)
	{
		P_GET_STRUCT_REF(FMagicLeapGraphicsClientPerformanceInfo,Z_Param_Out_PerformanceInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHMDFunctionLibrary::GetGraphicsClientPerformanceInfo(Z_Param_Out_PerformanceInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execSetAppReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHMDFunctionLibrary::SetAppReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execGetHeadTrackingMapEvents)
	{
		P_GET_TSET_REF(EMagicLeapHeadTrackingMapEvent,Z_Param_Out_MapEvents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHMDFunctionLibrary::GetHeadTrackingMapEvents(Z_Param_Out_MapEvents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execGetHeadTrackingState)
	{
		P_GET_STRUCT_REF(FMagicLeapHeadTrackingState,Z_Param_Out_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHMDFunctionLibrary::GetHeadTrackingState(Z_Param_Out_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execIsRunningOnMagicLeapHMD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHMDFunctionLibrary::IsRunningOnMagicLeapHMD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execGetPlatformAPILevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMagicLeapHMDFunctionLibrary::GetPlatformAPILevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execGetMinimumAPILevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMagicLeapHMDFunctionLibrary::GetMinimumAPILevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execGetMLSDKVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMagicLeapHMDFunctionLibrary::GetMLSDKVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execGetMLSDKVersionRevision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMagicLeapHMDFunctionLibrary::GetMLSDKVersionRevision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execGetMLSDKVersionMinor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMagicLeapHMDFunctionLibrary::GetMLSDKVersionMinor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execGetMLSDKVersionMajor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMagicLeapHMDFunctionLibrary::GetMLSDKVersionMajor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execSetStabilizationDepthActor)
	{
		P_GET_OBJECT(AActor,Z_Param_InStabilizationDepthActor);
		P_GET_UBOOL(Z_Param_bSetFocusActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMagicLeapHMDFunctionLibrary::SetStabilizationDepthActor(Z_Param_InStabilizationDepthActor,Z_Param_bSetFocusActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execSetFocusActor)
	{
		P_GET_OBJECT(AActor,Z_Param_InFocusActor);
		P_GET_UBOOL(Z_Param_bSetStabilizationActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMagicLeapHMDFunctionLibrary::SetFocusActor(Z_Param_InFocusActor,Z_Param_bSetStabilizationActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execSetBaseRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InBaseRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMagicLeapHMDFunctionLibrary::SetBaseRotation(Z_Param_Out_InBaseRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execSetBaseOrientation)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InBaseOrientation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMagicLeapHMDFunctionLibrary::SetBaseOrientation(Z_Param_Out_InBaseOrientation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHMDFunctionLibrary::execSetBasePosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InBasePosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMagicLeapHMDFunctionLibrary::SetBasePosition(Z_Param_Out_InBasePosition);
		P_NATIVE_END;
	}
	void UMagicLeapHMDFunctionLibrary::StaticRegisterNativesUMagicLeapHMDFunctionLibrary()
	{
		UClass* Class = UMagicLeapHMDFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGraphicsClientPerformanceInfo", &UMagicLeapHMDFunctionLibrary::execGetGraphicsClientPerformanceInfo },
			{ "GetHeadTrackingMapEvents", &UMagicLeapHMDFunctionLibrary::execGetHeadTrackingMapEvents },
			{ "GetHeadTrackingState", &UMagicLeapHMDFunctionLibrary::execGetHeadTrackingState },
			{ "GetMinimumAPILevel", &UMagicLeapHMDFunctionLibrary::execGetMinimumAPILevel },
			{ "GetMLSDKVersion", &UMagicLeapHMDFunctionLibrary::execGetMLSDKVersion },
			{ "GetMLSDKVersionMajor", &UMagicLeapHMDFunctionLibrary::execGetMLSDKVersionMajor },
			{ "GetMLSDKVersionMinor", &UMagicLeapHMDFunctionLibrary::execGetMLSDKVersionMinor },
			{ "GetMLSDKVersionRevision", &UMagicLeapHMDFunctionLibrary::execGetMLSDKVersionRevision },
			{ "GetPlatformAPILevel", &UMagicLeapHMDFunctionLibrary::execGetPlatformAPILevel },
			{ "IsRunningOnMagicLeapHMD", &UMagicLeapHMDFunctionLibrary::execIsRunningOnMagicLeapHMD },
			{ "SetAppReady", &UMagicLeapHMDFunctionLibrary::execSetAppReady },
			{ "SetBaseOrientation", &UMagicLeapHMDFunctionLibrary::execSetBaseOrientation },
			{ "SetBasePosition", &UMagicLeapHMDFunctionLibrary::execSetBasePosition },
			{ "SetBaseRotation", &UMagicLeapHMDFunctionLibrary::execSetBaseRotation },
			{ "SetFocusActor", &UMagicLeapHMDFunctionLibrary::execSetFocusActor },
			{ "SetStabilizationDepthActor", &UMagicLeapHMDFunctionLibrary::execSetStabilizationDepthActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventGetGraphicsClientPerformanceInfo_Parms
		{
			FMagicLeapGraphicsClientPerformanceInfo PerformanceInfo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerformanceInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHMDFunctionLibrary_eventGetGraphicsClientPerformanceInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHMDFunctionLibrary_eventGetGraphicsClientPerformanceInfo_Parms), &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics::NewProp_PerformanceInfo = { "PerformanceInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHMDFunctionLibrary_eventGetGraphicsClientPerformanceInfo_Parms, PerformanceInfo), Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics::NewProp_PerformanceInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "MagicLeap|Performance" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "GetGraphicsClientPerformanceInfo", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventGetGraphicsClientPerformanceInfo_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventGetHeadTrackingMapEvents_Parms
		{
			TSet<EMagicLeapHeadTrackingMapEvent> MapEvents;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_MapEvents;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MapEvents_ElementProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MapEvents_ElementProp_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHMDFunctionLibrary_eventGetHeadTrackingMapEvents_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHMDFunctionLibrary_eventGetHeadTrackingMapEvents_Parms), &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::NewProp_MapEvents = { "MapEvents", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHMDFunctionLibrary_eventGetHeadTrackingMapEvents_Parms, MapEvents), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::NewProp_MapEvents_ElementProp = { "MapEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeap_EMagicLeapHeadTrackingMapEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::NewProp_MapEvents_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::NewProp_MapEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::NewProp_MapEvents_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::NewProp_MapEvents_ElementProp_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "MagicLeap" },
		{ "Comment", "/**\n\x09\x09Get map events.\n\x09\x09""A developer must be aware of certain events that can occur under degenerative conditions\n\x09\x09in order to cleanly handle it. The most important event to be aware of is when a map changes.\n\x09\x09In the case that a new map session begins, or recovery fails, all formerly cached transform\n\x09\x09""and world reconstruction data (raycast, planes, mesh) is invalidated and must be updated.\n\x09\x09@param MapEvents Set of map events occured since the last frame. Valid only if function returns true.\n\x09\x09@return true if call get map events from the platform succeeded, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
		{ "ToolTip", "Get map events.\nA developer must be aware of certain events that can occur under degenerative conditions\nin order to cleanly handle it. The most important event to be aware of is when a map changes.\nIn the case that a new map session begins, or recovery fails, all formerly cached transform\nand world reconstruction data (raycast, planes, mesh) is invalidated and must be updated.\n@param MapEvents Set of map events occured since the last frame. Valid only if function returns true.\n@return true if call get map events from the platform succeeded, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "GetHeadTrackingMapEvents", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventGetHeadTrackingMapEvents_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventGetHeadTrackingState_Parms
		{
			FMagicLeapHeadTrackingState State;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHMDFunctionLibrary_eventGetHeadTrackingState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHMDFunctionLibrary_eventGetHeadTrackingState_Parms), &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHMDFunctionLibrary_eventGetHeadTrackingState_Parms, State), Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "GetHeadTrackingState", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventGetHeadTrackingState_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventGetMinimumAPILevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHMDFunctionLibrary_eventGetMinimumAPILevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "GetMinimumAPILevel", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventGetMinimumAPILevel_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventGetMLSDKVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHMDFunctionLibrary_eventGetMLSDKVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "GetMLSDKVersion", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventGetMLSDKVersion_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventGetMLSDKVersionMajor_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHMDFunctionLibrary_eventGetMLSDKVersionMajor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "GetMLSDKVersionMajor", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventGetMLSDKVersionMajor_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventGetMLSDKVersionMinor_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHMDFunctionLibrary_eventGetMLSDKVersionMinor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "GetMLSDKVersionMinor", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventGetMLSDKVersionMinor_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventGetMLSDKVersionRevision_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHMDFunctionLibrary_eventGetMLSDKVersionRevision_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Statics::Function_MetaDataParams[] = {
		{ "Category", "MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "GetMLSDKVersionRevision", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventGetMLSDKVersionRevision_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventGetPlatformAPILevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHMDFunctionLibrary_eventGetPlatformAPILevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "GetPlatformAPILevel", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventGetPlatformAPILevel_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventIsRunningOnMagicLeapHMD_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHMDFunctionLibrary_eventIsRunningOnMagicLeapHMD_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHMDFunctionLibrary_eventIsRunningOnMagicLeapHMD_Parms), &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Statics::Function_MetaDataParams[] = {
		{ "Category", "MagicLeap" },
		{ "Comment", "/** Returns true if this code is executing on the ML HMD, false otherwise (e.g. it's executing on PC) */" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
		{ "ToolTip", "Returns true if this code is executing on the ML HMD, false otherwise (e.g. it's executing on PC)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "IsRunningOnMagicLeapHMD", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventIsRunningOnMagicLeapHMD_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventSetAppReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHMDFunctionLibrary_eventSetAppReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHMDFunctionLibrary_eventSetAppReady_Parms), &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "MagicLeap" },
		{ "Comment", "/**\n\x09\x09Notifies lifecycle that the app is ready to run (dismisses the loading logo).\n\x09\x09@note This MUST be called if you have checked bManualCallToAppReady in LuminRuntimeSettings.  Failure to do so will cause the \n\x09\x09""application to remain in the loading state.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
		{ "ToolTip", "Notifies lifecycle that the app is ready to run (dismisses the loading logo).\n@note This MUST be called if you have checked bManualCallToAppReady in LuminRuntimeSettings.  Failure to do so will cause the\napplication to remain in the loading state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "SetAppReady", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventSetAppReady_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventSetBaseOrientation_Parms
		{
			FQuat InBaseOrientation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBaseOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBaseOrientation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Statics::NewProp_InBaseOrientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Statics::NewProp_InBaseOrientation = { "InBaseOrientation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHMDFunctionLibrary_eventSetBaseOrientation_Parms, InBaseOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Statics::NewProp_InBaseOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Statics::NewProp_InBaseOrientation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Statics::NewProp_InBaseOrientation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MagicLeap" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use XRPawn setup for coordinate space calibration" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "SetBaseOrientation", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventSetBaseOrientation_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventSetBasePosition_Parms
		{
			FVector InBasePosition;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBasePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBasePosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition_Statics::NewProp_InBasePosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition_Statics::NewProp_InBasePosition = { "InBasePosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHMDFunctionLibrary_eventSetBasePosition_Parms, InBasePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition_Statics::NewProp_InBasePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition_Statics::NewProp_InBasePosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition_Statics::NewProp_InBasePosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MagicLeap" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use XRPawn setup for coordinate space calibration" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "SetBasePosition", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventSetBasePosition_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventSetBaseRotation_Parms
		{
			FRotator InBaseRotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBaseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBaseRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation_Statics::NewProp_InBaseRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation_Statics::NewProp_InBaseRotation = { "InBaseRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHMDFunctionLibrary_eventSetBaseRotation_Parms, InBaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation_Statics::NewProp_InBaseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation_Statics::NewProp_InBaseRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation_Statics::NewProp_InBaseRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MagicLeap" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use XRPawn setup for coordinate space calibration" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "SetBaseRotation", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventSetBaseRotation_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventSetFocusActor_Parms
		{
			const AActor* InFocusActor;
			bool bSetStabilizationActor;
		};
		static void NewProp_bSetStabilizationActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetStabilizationActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFocusActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InFocusActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::NewProp_bSetStabilizationActor_SetBit(void* Obj)
	{
		((MagicLeapHMDFunctionLibrary_eventSetFocusActor_Parms*)Obj)->bSetStabilizationActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::NewProp_bSetStabilizationActor = { "bSetStabilizationActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHMDFunctionLibrary_eventSetFocusActor_Parms), &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::NewProp_bSetStabilizationActor_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::NewProp_InFocusActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::NewProp_InFocusActor = { "InFocusActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHMDFunctionLibrary_eventSetFocusActor_Parms, InFocusActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::NewProp_InFocusActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::NewProp_InFocusActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::NewProp_bSetStabilizationActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::NewProp_InFocusActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|MagicLeap" },
		{ "Comment", "/**\n\x09* Set the actor whose location is used as the focus point. The focus distance is the distance from the HMD to the focus point.\n\x09*\n\x09* @param InFocusActor\x09\x09\x09The actor that will be set as the new focus actor.\n\x09* @param bSetStabilizationActor  True if the function should set the stabilization depth actor to match the passed in focus actor. (RECOMMENDED TO STAY CHECKED)\n\x09*/" },
		{ "CPP_Default_bSetStabilizationActor", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
		{ "ToolTip", "Set the actor whose location is used as the focus point. The focus distance is the distance from the HMD to the focus point.\n\n@param InFocusActor                   The actor that will be set as the new focus actor.\n@param bSetStabilizationActor  True if the function should set the stabilization depth actor to match the passed in focus actor. (RECOMMENDED TO STAY CHECKED)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "SetFocusActor", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventSetFocusActor_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics
	{
		struct MagicLeapHMDFunctionLibrary_eventSetStabilizationDepthActor_Parms
		{
			const AActor* InStabilizationDepthActor;
			bool bSetFocusActor;
		};
		static void NewProp_bSetFocusActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetFocusActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStabilizationDepthActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InStabilizationDepthActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::NewProp_bSetFocusActor_SetBit(void* Obj)
	{
		((MagicLeapHMDFunctionLibrary_eventSetStabilizationDepthActor_Parms*)Obj)->bSetFocusActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::NewProp_bSetFocusActor = { "bSetFocusActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHMDFunctionLibrary_eventSetStabilizationDepthActor_Parms), &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::NewProp_bSetFocusActor_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::NewProp_InStabilizationDepthActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::NewProp_InStabilizationDepthActor = { "InStabilizationDepthActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHMDFunctionLibrary_eventSetStabilizationDepthActor_Parms, InStabilizationDepthActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::NewProp_InStabilizationDepthActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::NewProp_InStabilizationDepthActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::NewProp_bSetFocusActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::NewProp_InStabilizationDepthActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|MagicLeap" },
		{ "Comment", "/**\n\x09* Set the actor whose location is used as the depth for timewarp stabilization.\n\x09*\n\x09* @param InStabilizationDepthActor  The actor that will be set as the new stabilization depth actor.\n\x09* @param bSetFocusActor\x09\x09\x09\x09True if the function should set the focus actor to match the passed in stabilization depth actor. (RECOMMENDED TO STAY CHECKED)\n\x09*/" },
		{ "CPP_Default_bSetFocusActor", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
		{ "ToolTip", "Set the actor whose location is used as the depth for timewarp stabilization.\n\n@param InStabilizationDepthActor  The actor that will be set as the new stabilization depth actor.\n@param bSetFocusActor                         True if the function should set the focus actor to match the passed in stabilization depth actor. (RECOMMENDED TO STAY CHECKED)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, nullptr, "SetStabilizationDepthActor", nullptr, nullptr, sizeof(MagicLeapHMDFunctionLibrary_eventSetStabilizationDepthActor_Parms), Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapHMDFunctionLibrary_NoRegister()
	{
		return UMagicLeapHMDFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapHMDFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapHMDFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapHMDFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo, "GetGraphicsClientPerformanceInfo" }, // 4146397027
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents, "GetHeadTrackingMapEvents" }, // 3162299560
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetHeadTrackingState, "GetHeadTrackingState" }, // 2638301124
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel, "GetMinimumAPILevel" }, // 2781089903
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersion, "GetMLSDKVersion" }, // 970700182
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor, "GetMLSDKVersionMajor" }, // 119332918
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor, "GetMLSDKVersionMinor" }, // 2535028779
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision, "GetMLSDKVersionRevision" }, // 70919126
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel, "GetPlatformAPILevel" }, // 1687309322
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD, "IsRunningOnMagicLeapHMD" }, // 1203877823
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetAppReady, "SetAppReady" }, // 2572865846
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseOrientation, "SetBaseOrientation" }, // 47390593
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBasePosition, "SetBasePosition" }, // 3128160356
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetBaseRotation, "SetBaseRotation" }, // 4154338444
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetFocusActor, "SetFocusActor" }, // 200221538
		{ &Z_Construct_UFunction_UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor, "SetStabilizationDepthActor" }, // 1687785334
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapHMDFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MagicLeap" },
		{ "IncludePath", "MagicLeapHMDFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MagicLeapHMDFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapHMDFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapHMDFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapHMDFunctionLibrary_Statics::ClassParams = {
		&UMagicLeapHMDFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapHMDFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapHMDFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapHMDFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapHMDFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapHMDFunctionLibrary, 644374447);
	template<> MAGICLEAP_API UClass* StaticClass<UMagicLeapHMDFunctionLibrary>()
	{
		return UMagicLeapHMDFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapHMDFunctionLibrary(Z_Construct_UClass_UMagicLeapHMDFunctionLibrary, &UMagicLeapHMDFunctionLibrary::StaticClass, TEXT("/Script/MagicLeap"), TEXT("UMagicLeapHMDFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapHMDFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
