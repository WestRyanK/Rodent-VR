// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/RewardRegion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewardRegion() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_ARewardRegion_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_ARewardRegion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	void ARewardRegion::StaticRegisterNativesARewardRegion()
	{
	}
	UClass* Z_Construct_UClass_ARewardRegion_NoRegister()
	{
		return ARewardRegion::StaticClass();
	}
	struct Z_Construct_UClass_ARewardRegion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsToneEnabled_MetaData[];
#endif
		static void NewProp_IsToneEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsToneEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToneVolumeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToneVolumeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TonePitchHz_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TonePitchHz;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToneDurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToneDurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardDurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RewardDurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardDeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RewardDeviceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRewardDispensingEnabled_MetaData[];
#endif
		static void NewProp_IsRewardDispensingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRewardDispensingEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RegionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARewardRegion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARewardRegion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RewardRegion.h" },
		{ "ModuleRelativePath", "Private/RewardRegion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARewardRegion_Statics::NewProp_IsToneEnabled_MetaData[] = {
		{ "Category", "RewardRegion" },
		{ "ModuleRelativePath", "Private/RewardRegion.h" },
	};
#endif
	void Z_Construct_UClass_ARewardRegion_Statics::NewProp_IsToneEnabled_SetBit(void* Obj)
	{
		((ARewardRegion*)Obj)->IsToneEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARewardRegion_Statics::NewProp_IsToneEnabled = { "IsToneEnabled", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARewardRegion), &Z_Construct_UClass_ARewardRegion_Statics::NewProp_IsToneEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARewardRegion_Statics::NewProp_IsToneEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARewardRegion_Statics::NewProp_IsToneEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARewardRegion_Statics::NewProp_ToneVolumeMultiplier_MetaData[] = {
		{ "Category", "RewardRegion" },
		{ "ModuleRelativePath", "Private/RewardRegion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARewardRegion_Statics::NewProp_ToneVolumeMultiplier = { "ToneVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARewardRegion, ToneVolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_ARewardRegion_Statics::NewProp_ToneVolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARewardRegion_Statics::NewProp_ToneVolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARewardRegion_Statics::NewProp_TonePitchHz_MetaData[] = {
		{ "Category", "RewardRegion" },
		{ "ModuleRelativePath", "Private/RewardRegion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARewardRegion_Statics::NewProp_TonePitchHz = { "TonePitchHz", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARewardRegion, TonePitchHz), METADATA_PARAMS(Z_Construct_UClass_ARewardRegion_Statics::NewProp_TonePitchHz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARewardRegion_Statics::NewProp_TonePitchHz_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARewardRegion_Statics::NewProp_ToneDurationSec_MetaData[] = {
		{ "Category", "RewardRegion" },
		{ "ModuleRelativePath", "Private/RewardRegion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARewardRegion_Statics::NewProp_ToneDurationSec = { "ToneDurationSec", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARewardRegion, ToneDurationSec), METADATA_PARAMS(Z_Construct_UClass_ARewardRegion_Statics::NewProp_ToneDurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARewardRegion_Statics::NewProp_ToneDurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARewardRegion_Statics::NewProp_RewardDurationSec_MetaData[] = {
		{ "Category", "RewardRegion" },
		{ "ModuleRelativePath", "Private/RewardRegion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARewardRegion_Statics::NewProp_RewardDurationSec = { "RewardDurationSec", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARewardRegion, RewardDurationSec), METADATA_PARAMS(Z_Construct_UClass_ARewardRegion_Statics::NewProp_RewardDurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARewardRegion_Statics::NewProp_RewardDurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARewardRegion_Statics::NewProp_RewardDeviceId_MetaData[] = {
		{ "Category", "RewardRegion" },
		{ "ModuleRelativePath", "Private/RewardRegion.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARewardRegion_Statics::NewProp_RewardDeviceId = { "RewardDeviceId", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARewardRegion, RewardDeviceId), METADATA_PARAMS(Z_Construct_UClass_ARewardRegion_Statics::NewProp_RewardDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARewardRegion_Statics::NewProp_RewardDeviceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARewardRegion_Statics::NewProp_IsRewardDispensingEnabled_MetaData[] = {
		{ "Category", "RewardRegion" },
		{ "ModuleRelativePath", "Private/RewardRegion.h" },
	};
#endif
	void Z_Construct_UClass_ARewardRegion_Statics::NewProp_IsRewardDispensingEnabled_SetBit(void* Obj)
	{
		((ARewardRegion*)Obj)->IsRewardDispensingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARewardRegion_Statics::NewProp_IsRewardDispensingEnabled = { "IsRewardDispensingEnabled", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARewardRegion), &Z_Construct_UClass_ARewardRegion_Statics::NewProp_IsRewardDispensingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARewardRegion_Statics::NewProp_IsRewardDispensingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARewardRegion_Statics::NewProp_IsRewardDispensingEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARewardRegion_Statics::NewProp_RegionId_MetaData[] = {
		{ "Category", "RewardRegion" },
		{ "ModuleRelativePath", "Private/RewardRegion.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARewardRegion_Statics::NewProp_RegionId = { "RegionId", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARewardRegion, RegionId), METADATA_PARAMS(Z_Construct_UClass_ARewardRegion_Statics::NewProp_RegionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARewardRegion_Statics::NewProp_RegionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARewardRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARewardRegion_Statics::NewProp_IsToneEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARewardRegion_Statics::NewProp_ToneVolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARewardRegion_Statics::NewProp_TonePitchHz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARewardRegion_Statics::NewProp_ToneDurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARewardRegion_Statics::NewProp_RewardDurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARewardRegion_Statics::NewProp_RewardDeviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARewardRegion_Statics::NewProp_IsRewardDispensingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARewardRegion_Statics::NewProp_RegionId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARewardRegion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARewardRegion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARewardRegion_Statics::ClassParams = {
		&ARewardRegion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARewardRegion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARewardRegion_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARewardRegion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARewardRegion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARewardRegion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARewardRegion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARewardRegion, 677082117);
	template<> RODENTVR_API UClass* StaticClass<ARewardRegion>()
	{
		return ARewardRegion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARewardRegion(Z_Construct_UClass_ARewardRegion, &ARewardRegion::StaticClass, TEXT("/Script/RodentVR"), TEXT("ARewardRegion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARewardRegion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
