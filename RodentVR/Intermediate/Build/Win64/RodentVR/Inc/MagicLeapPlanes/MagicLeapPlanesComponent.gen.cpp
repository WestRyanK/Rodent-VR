// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/MagicLeapPlanesComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapPlanesComponent() {}
// Cross Module References
	MAGICLEAPPLANES_API UClass* Z_Construct_UClass_UMagicLeapPlanesComponent_NoRegister();
	MAGICLEAPPLANES_API UClass* Z_Construct_UClass_UMagicLeapPlanesComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MagicLeapPlanes();
	MAGICLEAPPLANES_API UFunction* Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature();
	MAGICLEAPPLANES_API UFunction* Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature();
	MAGICLEAPPLANES_API UEnum* Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryType();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	MAGICLEAPPLANES_API UEnum* Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags();
// End Cross Module References
	DEFINE_FUNCTION(UMagicLeapPlanesComponent::execRequestPlanesAsync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestPlanesAsync();
		P_NATIVE_END;
	}
	void UMagicLeapPlanesComponent::StaticRegisterNativesUMagicLeapPlanesComponent()
	{
		UClass* Class = UMagicLeapPlanesComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestPlanesAsync", &UMagicLeapPlanesComponent::execRequestPlanesAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync_Statics
	{
		struct MagicLeapPlanesComponent_eventRequestPlanesAsync_Parms
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
	void Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapPlanesComponent_eventRequestPlanesAsync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapPlanesComponent_eventRequestPlanesAsync_Parms), &Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Planes | MagicLeap" },
		{ "Comment", "/** Initiates a plane query. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesComponent.h" },
		{ "ToolTip", "Initiates a plane query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapPlanesComponent, nullptr, "RequestPlanesAsync", nullptr, nullptr, sizeof(MagicLeapPlanesComponent_eventRequestPlanesAsync_Parms), Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapPlanesComponent_NoRegister()
	{
		return UMagicLeapPlanesComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapPlanesComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPersistentPlanesQueryResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPersistentPlanesQueryResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlanesQueryResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlanesQueryResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimilarityThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SimilarityThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QueryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPlaneArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPlaneArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHolePerimeter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinHolePerimeter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueryFlags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QueryFlags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryFlags_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapPlanes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapPlanesComponent_RequestPlanesAsync, "RequestPlanesAsync" }, // 1616673373
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MagicLeap" },
		{ "Comment", "/**\n\x09""Component that provides access to the Planes API functionality.\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MagicLeapPlanesComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesComponent.h" },
		{ "ToolTip", "Component that provides access to the Planes API functionality." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_OnPersistentPlanesQueryResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Planes | MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_OnPersistentPlanesQueryResult = { "OnPersistentPlanesQueryResult", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapPlanesComponent, OnPersistentPlanesQueryResult), Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_OnPersistentPlanesQueryResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_OnPersistentPlanesQueryResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_OnPlanesQueryResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Planes | MagicLeap" },
		{ "Comment", "// Delegate instances\n" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesComponent.h" },
		{ "ToolTip", "Delegate instances" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_OnPlanesQueryResult = { "OnPlanesQueryResult", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapPlanesComponent, OnPlanesQueryResult), Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_OnPlanesQueryResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_OnPlanesQueryResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_SimilarityThreshold_MetaData[] = {
		{ "Category", "Planes | MagicLeap" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09\x09The threshold used to compare incoming planes with any cached planes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesComponent.h" },
		{ "ToolTip", "The threshold used to compare incoming planes with any cached planes." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_SimilarityThreshold = { "SimilarityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapPlanesComponent, SimilarityThreshold), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_SimilarityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_SimilarityThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryType_MetaData[] = {
		{ "Category", "Planes | MagicLeap" },
		{ "Comment", "/**\n\x09  The type of plane query to perform.\n\x09  Bulk: Use OnPlanesQueryResult to retrieve results.\n\x09  Delta: Use OnPersistentPlanesQueryResult to retrieve results.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesComponent.h" },
		{ "ToolTip", "The type of plane query to perform.\nBulk: Use OnPlanesQueryResult to retrieve results.\nDelta: Use OnPersistentPlanesQueryResult to retrieve results." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryType = { "QueryType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapPlanesComponent, QueryType), Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryType, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MinPlaneArea_MetaData[] = {
		{ "Category", "Planes | MagicLeap" },
		{ "ClampMin", "400" },
		{ "Comment", "/**\n\x09  The minimum area (in squared Unreal Units) of planes to be returned.\n\x09  This value cannot be lower than 400 (lower values will be capped to this minimum).\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesComponent.h" },
		{ "ToolTip", "The minimum area (in squared Unreal Units) of planes to be returned.\nThis value cannot be lower than 400 (lower values will be capped to this minimum)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MinPlaneArea = { "MinPlaneArea", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapPlanesComponent, MinPlaneArea), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MinPlaneArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MinPlaneArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MinHolePerimeter_MetaData[] = {
		{ "Category", "Planes | MagicLeap" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09  If EMagicLeapPlaneQueryFlags::IgnoreHoles is not a query flag then holes with a perimeter (in Unreal Units)\n\x09  smaller than this value will be ignored, and can be part of the plane.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesComponent.h" },
		{ "ToolTip", "If EMagicLeapPlaneQueryFlags::IgnoreHoles is not a query flag then holes with a perimeter (in Unreal Units)\nsmaller than this value will be ignored, and can be part of the plane." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MinHolePerimeter = { "MinHolePerimeter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapPlanesComponent, MinHolePerimeter), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MinHolePerimeter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MinHolePerimeter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MaxResults_MetaData[] = {
		{ "Category", "Planes | MagicLeap" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The maximum number of planes that should be returned in the result. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesComponent.h" },
		{ "ToolTip", "The maximum number of planes that should be returned in the result." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapPlanesComponent, MaxResults), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MaxResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MaxResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_SearchVolume_MetaData[] = {
		{ "Category", "Planes | MagicLeap" },
		{ "Comment", "/** Bounding box for searching planes in. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesComponent.h" },
		{ "ToolTip", "Bounding box for searching planes in." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_SearchVolume = { "SearchVolume", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapPlanesComponent, SearchVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_SearchVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_SearchVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryFlags_MetaData[] = {
		{ "Category", "Planes | MagicLeap" },
		{ "Comment", "/** The flags to apply to this query. TODO: Should be a TSet but that is misbehaving in the editor. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesComponent.h" },
		{ "ToolTip", "The flags to apply to this query. TODO: Should be a TSet but that is misbehaving in the editor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryFlags = { "QueryFlags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapPlanesComponent, QueryFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryFlags_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryFlags_Inner = { "QueryFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryFlags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_OnPersistentPlanesQueryResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_OnPlanesQueryResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_SimilarityThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MinPlaneArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MinHolePerimeter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_SearchVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::NewProp_QueryFlags_Inner_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapPlanesComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::ClassParams = {
		&UMagicLeapPlanesComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapPlanesComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapPlanesComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapPlanesComponent, 111825808);
	template<> MAGICLEAPPLANES_API UClass* StaticClass<UMagicLeapPlanesComponent>()
	{
		return UMagicLeapPlanesComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapPlanesComponent(Z_Construct_UClass_UMagicLeapPlanesComponent, &UMagicLeapPlanesComponent::StaticClass, TEXT("/Script/MagicLeapPlanes"), TEXT("UMagicLeapPlanesComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapPlanesComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
