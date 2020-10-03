// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapAR/Public/LuminARSessionConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuminARSessionConfig() {}
// Cross Module References
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ULuminARSessionConfig_NoRegister();
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ULuminARSessionConfig();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig();
	UPackage* Z_Construct_UPackage__Script_MagicLeapAR();
	MAGICLEAPPLANES_API UEnum* Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MAGICLEAPPLANES_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapPlanesQuery();
// End Cross Module References
	void ULuminARSessionConfig::StaticRegisterNativesULuminARSessionConfig()
	{
	}
	UClass* Z_Construct_UClass_ULuminARSessionConfig_NoRegister()
	{
		return ULuminARSessionConfig::StaticClass();
	}
	struct Z_Construct_UClass_ULuminARSessionConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultUseUnreliablePose_MetaData[];
#endif
		static void NewProp_bDefaultUseUnreliablePose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultUseUnreliablePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDiscardZeroExtentPlanes_MetaData[];
#endif
		static void NewProp_bDiscardZeroExtentPlanes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDiscardZeroExtentPlanes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneQueryFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlaneQueryFlags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaneQueryFlags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaneQueryFlags_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneSearchExtents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneSearchExtents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bArbitraryOrientationPlaneDetection_MetaData[];
#endif
		static void NewProp_bArbitraryOrientationPlaneDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bArbitraryOrientationPlaneDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPlaneArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinPlaneArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlaneQueryResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlaneQueryResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanesQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanesQuery;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuminARSessionConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARSessionConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapAR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARSessionConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "IncludePath", "LuminARSessionConfig.h" },
		{ "ModuleRelativePath", "Public/LuminARSessionConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bDefaultUseUnreliablePose_MetaData[] = {
		{ "Category", "Lumin AR Settings|Image Tracking" },
		{ "Comment", "/**\n\x09 For image tracking, Candidate Images may contain both AR Candidate Images and\n\x09 Lumin AR Candidate Images.  The former does not contain info about whether to \n\x09 update the pose when tracking is unreliable.  In that case, this value is used\n\x09 to determine whether to update the pose, instead.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LuminARSessionConfig.h" },
		{ "ToolTip", "For image tracking, Candidate Images may contain both AR Candidate Images and\nLumin AR Candidate Images.  The former does not contain info about whether to\nupdate the pose when tracking is unreliable.  In that case, this value is used\nto determine whether to update the pose, instead." },
	};
#endif
	void Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bDefaultUseUnreliablePose_SetBit(void* Obj)
	{
		((ULuminARSessionConfig*)Obj)->bDefaultUseUnreliablePose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bDefaultUseUnreliablePose = { "bDefaultUseUnreliablePose", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminARSessionConfig), &Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bDefaultUseUnreliablePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bDefaultUseUnreliablePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bDefaultUseUnreliablePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bDiscardZeroExtentPlanes_MetaData[] = {
		{ "Category", "Lumin AR Settings" },
		{ "Comment", "/** If true discard any 'plane' objects that come through with zero extents and only polygon edge data.*/" },
		{ "ModuleRelativePath", "Public/LuminARSessionConfig.h" },
		{ "ToolTip", "If true discard any 'plane' objects that come through with zero extents and only polygon edge data." },
	};
#endif
	void Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bDiscardZeroExtentPlanes_SetBit(void* Obj)
	{
		((ULuminARSessionConfig*)Obj)->bDiscardZeroExtentPlanes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bDiscardZeroExtentPlanes = { "bDiscardZeroExtentPlanes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminARSessionConfig), &Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bDiscardZeroExtentPlanes_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bDiscardZeroExtentPlanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bDiscardZeroExtentPlanes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlaneQueryFlags_MetaData[] = {
		{ "Comment", "/** Additional Flags to apply to the plane queries. Note: the plane orientation detection settings also cause flags to be set.  It is ok to duplicate those here.*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use PlanesQuery instead." },
		{ "ModuleRelativePath", "Public/LuminARSessionConfig.h" },
		{ "ToolTip", "Additional Flags to apply to the plane queries. Note: the plane orientation detection settings also cause flags to be set.  It is ok to duplicate those here." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlaneQueryFlags = { "PlaneQueryFlags", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminARSessionConfig, PlaneQueryFlags_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlaneQueryFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlaneQueryFlags_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlaneQueryFlags_Inner = { "PlaneQueryFlags", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlaneQueryFlags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlaneSearchExtents_MetaData[] = {
		{ "Comment", "/** The dimensions of the box within which plane results will be returned.  The box center and rotation are those of the tracking to world transform origin. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use PlanesQuery instead." },
		{ "ModuleRelativePath", "Public/LuminARSessionConfig.h" },
		{ "ToolTip", "The dimensions of the box within which plane results will be returned.  The box center and rotation are those of the tracking to world transform origin." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlaneSearchExtents = { "PlaneSearchExtents", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminARSessionConfig, PlaneSearchExtents_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlaneSearchExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlaneSearchExtents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bArbitraryOrientationPlaneDetection_MetaData[] = {
		{ "Category", "Lumin AR Settings" },
		{ "Comment", "/** Should we detect planes with any orientation (ie not just horizontal or vertical). */" },
		{ "ModuleRelativePath", "Public/LuminARSessionConfig.h" },
		{ "ToolTip", "Should we detect planes with any orientation (ie not just horizontal or vertical)." },
	};
#endif
	void Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bArbitraryOrientationPlaneDetection_SetBit(void* Obj)
	{
		((ULuminARSessionConfig*)Obj)->bArbitraryOrientationPlaneDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bArbitraryOrientationPlaneDetection = { "bArbitraryOrientationPlaneDetection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminARSessionConfig), &Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bArbitraryOrientationPlaneDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bArbitraryOrientationPlaneDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bArbitraryOrientationPlaneDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_MinPlaneArea_MetaData[] = {
		{ "Comment", "/** The minimum area (in square cm) of planes to be returned. This value cannot be lower than 400 (lower values will be capped to this minimum). A good default value is 2500. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use PlanesQuery instead." },
		{ "ModuleRelativePath", "Public/LuminARSessionConfig.h" },
		{ "ToolTip", "The minimum area (in square cm) of planes to be returned. This value cannot be lower than 400 (lower values will be capped to this minimum). A good default value is 2500." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_MinPlaneArea = { "MinPlaneArea", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminARSessionConfig, MinPlaneArea_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_MinPlaneArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_MinPlaneArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_MaxPlaneQueryResults_MetaData[] = {
		{ "Comment", "/** The maximum number of plane results that will be returned. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use PlanesQuery instead." },
		{ "ModuleRelativePath", "Public/LuminARSessionConfig.h" },
		{ "ToolTip", "The maximum number of plane results that will be returned." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_MaxPlaneQueryResults = { "MaxPlaneQueryResults", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminARSessionConfig, MaxPlaneQueryResults_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_MaxPlaneQueryResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_MaxPlaneQueryResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlanesQuery_MetaData[] = {
		{ "Category", "Lumin AR Settings" },
		{ "Comment", "/** The planes information that the AR session uses when generating a query. */" },
		{ "ModuleRelativePath", "Public/LuminARSessionConfig.h" },
		{ "ToolTip", "The planes information that the AR session uses when generating a query." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlanesQuery = { "PlanesQuery", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminARSessionConfig, PlanesQuery), Z_Construct_UScriptStruct_FMagicLeapPlanesQuery, METADATA_PARAMS(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlanesQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlanesQuery_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuminARSessionConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bDefaultUseUnreliablePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bDiscardZeroExtentPlanes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlaneQueryFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlaneQueryFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlaneQueryFlags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlaneSearchExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_bArbitraryOrientationPlaneDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_MinPlaneArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_MaxPlaneQueryResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminARSessionConfig_Statics::NewProp_PlanesQuery,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuminARSessionConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuminARSessionConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuminARSessionConfig_Statics::ClassParams = {
		&ULuminARSessionConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULuminARSessionConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARSessionConfig_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULuminARSessionConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARSessionConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuminARSessionConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuminARSessionConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuminARSessionConfig, 353291886);
	template<> MAGICLEAPAR_API UClass* StaticClass<ULuminARSessionConfig>()
	{
		return ULuminARSessionConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuminARSessionConfig(Z_Construct_UClass_ULuminARSessionConfig, &ULuminARSessionConfig::StaticClass, TEXT("/Script/MagicLeapAR"), TEXT("ULuminARSessionConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuminARSessionConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
