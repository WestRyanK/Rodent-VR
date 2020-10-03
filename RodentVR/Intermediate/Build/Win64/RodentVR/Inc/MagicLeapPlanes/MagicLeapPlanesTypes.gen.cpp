// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/MagicLeapPlanesTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapPlanesTypes() {}
// Cross Module References
	MAGICLEAPPLANES_API UFunction* Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MagicLeapPlanes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MAGICLEAPPLANES_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries();
	MAGICLEAPPLANES_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapPlaneResult();
	MAGICLEAPPLANES_API UEnum* Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryType();
	MAGICLEAPPLANES_API UFunction* Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature();
	MAGICLEAPPLANES_API UFunction* Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature();
	MAGICLEAPPLANES_API UFunction* Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature();
	MAGICLEAPPLANES_API UEnum* Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags();
	MAGICLEAPPLANES_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary();
	MAGICLEAPPLANES_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapPolygon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MAGICLEAPPLANES_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapPlanesQuery();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics
	{
		struct _Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegateMulti_Parms
		{
			bool bSuccess;
			FGuid QueryHandle;
			EMagicLeapPlaneQueryType QueryType;
			TArray<FMagicLeapPlaneResult> NewPlanes;
			TArray<FGuid> RemovedPlaneIDs;
			TArray<FMagicLeapPlaneBoundaries> NewPolygons;
			TArray<FGuid> RemovedPolygonIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedPolygonIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemovedPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedPolygonIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPolygons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewPolygons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPolygons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedPlaneIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemovedPlaneIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedPlaneIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPlanes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewPlanes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPlanes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QueryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_RemovedPolygonIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_RemovedPolygonIDs = { "RemovedPolygonIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegateMulti_Parms, RemovedPolygonIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_RemovedPolygonIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_RemovedPolygonIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_RemovedPolygonIDs_Inner = { "RemovedPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_NewPolygons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_NewPolygons = { "NewPolygons", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegateMulti_Parms, NewPolygons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_NewPolygons_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_NewPolygons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_NewPolygons_Inner = { "NewPolygons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_RemovedPlaneIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_RemovedPlaneIDs = { "RemovedPlaneIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegateMulti_Parms, RemovedPlaneIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_RemovedPlaneIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_RemovedPlaneIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_RemovedPlaneIDs_Inner = { "RemovedPlaneIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_NewPlanes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_NewPlanes = { "NewPlanes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegateMulti_Parms, NewPlanes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_NewPlanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_NewPlanes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_NewPlanes_Inner = { "NewPlanes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapPlaneResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_QueryType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_QueryType = { "QueryType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegateMulti_Parms, QueryType), Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryType, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_QueryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_QueryType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_QueryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_QueryHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegateMulti_Parms, QueryHandle), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_QueryHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_QueryHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegateMulti_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegateMulti_Parms), &Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_RemovedPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_RemovedPolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_NewPolygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_NewPolygons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_RemovedPlaneIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_RemovedPlaneIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_NewPlanes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_NewPlanes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_QueryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_QueryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_QueryHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MagicLeapPlanes, nullptr, "MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature", nullptr, nullptr, sizeof(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegateMulti_Parms), Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegateMulti__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics
	{
		struct _Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegate_Parms
		{
			bool bSuccess;
			FGuid QueryHandle;
			EMagicLeapPlaneQueryType QueryType;
			TArray<FMagicLeapPlaneResult> NewPlanes;
			TArray<FGuid> RemovedPlaneIDs;
			TArray<FMagicLeapPlaneBoundaries> NewPolygons;
			TArray<FGuid> RemovedPolygonIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedPolygonIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemovedPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedPolygonIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPolygons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewPolygons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPolygons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedPlaneIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemovedPlaneIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedPlaneIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPlanes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewPlanes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPlanes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QueryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_RemovedPolygonIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_RemovedPolygonIDs = { "RemovedPolygonIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegate_Parms, RemovedPolygonIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_RemovedPolygonIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_RemovedPolygonIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_RemovedPolygonIDs_Inner = { "RemovedPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_NewPolygons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_NewPolygons = { "NewPolygons", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegate_Parms, NewPolygons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_NewPolygons_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_NewPolygons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_NewPolygons_Inner = { "NewPolygons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_RemovedPlaneIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_RemovedPlaneIDs = { "RemovedPlaneIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegate_Parms, RemovedPlaneIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_RemovedPlaneIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_RemovedPlaneIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_RemovedPlaneIDs_Inner = { "RemovedPlaneIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_NewPlanes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_NewPlanes = { "NewPlanes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegate_Parms, NewPlanes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_NewPlanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_NewPlanes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_NewPlanes_Inner = { "NewPlanes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapPlaneResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_QueryType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_QueryType = { "QueryType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegate_Parms, QueryType), Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryType, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_QueryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_QueryType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_QueryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_QueryHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegate_Parms, QueryHandle), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_QueryHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_QueryHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegate_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegate_Parms), &Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_RemovedPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_RemovedPolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_NewPolygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_NewPolygons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_RemovedPlaneIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_RemovedPlaneIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_NewPlanes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_NewPlanes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_QueryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_QueryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_QueryHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MagicLeapPlanes, nullptr, "MagicLeapPersistentPlanesResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegate_Parms), Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics
	{
		struct _Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegateMulti_Parms
		{
			bool bSuccess;
			TArray<FMagicLeapPlaneResult> Planes;
			TArray<FMagicLeapPlaneBoundaries> Polygons;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Polygons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Polygons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Polygons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Planes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Planes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Planes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_Polygons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_Polygons = { "Polygons", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegateMulti_Parms, Polygons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_Polygons_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_Polygons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_Polygons_Inner = { "Polygons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_Planes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_Planes = { "Planes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegateMulti_Parms, Planes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_Planes_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_Planes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_Planes_Inner = { "Planes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapPlaneResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegateMulti_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegateMulti_Parms), &Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_Polygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_Polygons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_Planes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_Planes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MagicLeapPlanes, nullptr, "MagicLeapPlanesResultDelegateMulti__DelegateSignature", nullptr, nullptr, sizeof(_Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegateMulti_Parms), Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegateMulti__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics
	{
		struct _Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegate_Parms
		{
			bool bSuccess;
			TArray<FMagicLeapPlaneResult> Planes;
			TArray<FMagicLeapPlaneBoundaries> Polygons;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Polygons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Polygons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Polygons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Planes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Planes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Planes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_Polygons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_Polygons = { "Polygons", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegate_Parms, Polygons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_Polygons_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_Polygons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_Polygons_Inner = { "Polygons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_Planes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_Planes = { "Planes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegate_Parms, Planes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_Planes_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_Planes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_Planes_Inner = { "Planes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapPlaneResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegate_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegate_Parms), &Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_Polygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_Polygons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_Planes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_Planes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MagicLeapPlanes, nullptr, "MagicLeapPlanesResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegate_Parms), Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EMagicLeapPlaneQueryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryType, Z_Construct_UPackage__Script_MagicLeapPlanes(), TEXT("EMagicLeapPlaneQueryType"));
		}
		return Singleton;
	}
	template<> MAGICLEAPPLANES_API UEnum* StaticEnum<EMagicLeapPlaneQueryType>()
	{
		return EMagicLeapPlaneQueryType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapPlaneQueryType(EMagicLeapPlaneQueryType_StaticEnum, TEXT("/Script/MagicLeapPlanes"), TEXT("EMagicLeapPlaneQueryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryType_Hash() { return 2096473662U; }
	UEnum* Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapPlanes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapPlaneQueryType"), 0, Get_Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapPlaneQueryType::Bulk", (int64)EMagicLeapPlaneQueryType::Bulk },
				{ "EMagicLeapPlaneQueryType::Delta", (int64)EMagicLeapPlaneQueryType::Delta },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Bulk.Comment", "/** All planes will be returned every query.*/" },
				{ "Bulk.Name", "EMagicLeapPlaneQueryType::Bulk" },
				{ "Bulk.ToolTip", "All planes will be returned every query." },
				{ "Comment", "/** Persistent query types.\n */" },
				{ "Delta.Comment", "/** Planes will be returned as an array of new and removed planes in relation to the previous request. */" },
				{ "Delta.Name", "EMagicLeapPlaneQueryType::Delta" },
				{ "Delta.ToolTip", "Planes will be returned as an array of new and removed planes in relation to the previous request." },
				{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
				{ "ToolTip", "Persistent query types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapPlanes,
				nullptr,
				"EMagicLeapPlaneQueryType",
				"EMagicLeapPlaneQueryType",
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
	static UEnum* EMagicLeapPlaneQueryFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags, Z_Construct_UPackage__Script_MagicLeapPlanes(), TEXT("EMagicLeapPlaneQueryFlags"));
		}
		return Singleton;
	}
	template<> MAGICLEAPPLANES_API UEnum* StaticEnum<EMagicLeapPlaneQueryFlags>()
	{
		return EMagicLeapPlaneQueryFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapPlaneQueryFlags(EMagicLeapPlaneQueryFlags_StaticEnum, TEXT("/Script/MagicLeapPlanes"), TEXT("EMagicLeapPlaneQueryFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags_Hash() { return 2679818422U; }
	UEnum* Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapPlanes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapPlaneQueryFlags"), 0, Get_Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapPlaneQueryFlags::Vertical", (int64)EMagicLeapPlaneQueryFlags::Vertical },
				{ "EMagicLeapPlaneQueryFlags::Horizontal", (int64)EMagicLeapPlaneQueryFlags::Horizontal },
				{ "EMagicLeapPlaneQueryFlags::Arbitrary", (int64)EMagicLeapPlaneQueryFlags::Arbitrary },
				{ "EMagicLeapPlaneQueryFlags::OrientToGravity", (int64)EMagicLeapPlaneQueryFlags::OrientToGravity },
				{ "EMagicLeapPlaneQueryFlags::PreferInner", (int64)EMagicLeapPlaneQueryFlags::PreferInner },
				{ "EMagicLeapPlaneQueryFlags::Ceiling", (int64)EMagicLeapPlaneQueryFlags::Ceiling },
				{ "EMagicLeapPlaneQueryFlags::Floor", (int64)EMagicLeapPlaneQueryFlags::Floor },
				{ "EMagicLeapPlaneQueryFlags::Wall", (int64)EMagicLeapPlaneQueryFlags::Wall },
				{ "EMagicLeapPlaneQueryFlags::Polygons", (int64)EMagicLeapPlaneQueryFlags::Polygons },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Arbitrary.Comment", "/** Include planes with arbitrary normals. */" },
				{ "Arbitrary.Name", "EMagicLeapPlaneQueryFlags::Arbitrary" },
				{ "Arbitrary.ToolTip", "Include planes with arbitrary normals." },
				{ "BlueprintType", "true" },
				{ "Ceiling.Comment", "/** If set, include planes semantically tagged as ceiling. */" },
				{ "Ceiling.Name", "EMagicLeapPlaneQueryFlags::Ceiling" },
				{ "Ceiling.ToolTip", "If set, include planes semantically tagged as ceiling." },
				{ "Comment", "/** Control flags for plane queries. */" },
				{ "Floor.Comment", "/** If set, include planes semantically tagged as floor. */" },
				{ "Floor.Name", "EMagicLeapPlaneQueryFlags::Floor" },
				{ "Floor.ToolTip", "If set, include planes semantically tagged as floor." },
				{ "Horizontal.Comment", "/** Include planes whose normal is parallel to gravity. */" },
				{ "Horizontal.Name", "EMagicLeapPlaneQueryFlags::Horizontal" },
				{ "Horizontal.ToolTip", "Include planes whose normal is parallel to gravity." },
				{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
				{ "OrientToGravity.Comment", "/** If set, non-horizontal planes will be aligned perpendicular to gravity. */" },
				{ "OrientToGravity.Name", "EMagicLeapPlaneQueryFlags::OrientToGravity" },
				{ "OrientToGravity.ToolTip", "If set, non-horizontal planes will be aligned perpendicular to gravity." },
				{ "Polygons.Comment", "/** Include polygons */" },
				{ "Polygons.Name", "EMagicLeapPlaneQueryFlags::Polygons" },
				{ "Polygons.ToolTip", "Include polygons" },
				{ "PreferInner.Comment", "/** If set, inner planes will be returned; if not set, outer planes will be returned. */" },
				{ "PreferInner.Name", "EMagicLeapPlaneQueryFlags::PreferInner" },
				{ "PreferInner.ToolTip", "If set, inner planes will be returned; if not set, outer planes will be returned." },
				{ "ToolTip", "Control flags for plane queries." },
				{ "Vertical.Comment", "/** Include planes whose normal is perpendicular to gravity. */" },
				{ "Vertical.Name", "EMagicLeapPlaneQueryFlags::Vertical" },
				{ "Vertical.ToolTip", "Include planes whose normal is perpendicular to gravity." },
				{ "Wall.Comment", "/** If set, include planes semantically tagged as wall. */" },
				{ "Wall.Name", "EMagicLeapPlaneQueryFlags::Wall" },
				{ "Wall.ToolTip", "If set, include planes semantically tagged as wall." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapPlanes,
				nullptr,
				"EMagicLeapPlaneQueryFlags",
				"EMagicLeapPlaneQueryFlags",
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
class UScriptStruct* FMagicLeapPlaneBoundaries::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPPLANES_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries, Z_Construct_UPackage__Script_MagicLeapPlanes(), TEXT("MagicLeapPlaneBoundaries"), sizeof(FMagicLeapPlaneBoundaries), Get_Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPPLANES_API UScriptStruct* StaticStruct<FMagicLeapPlaneBoundaries>()
{
	return FMagicLeapPlaneBoundaries::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapPlaneBoundaries(FMagicLeapPlaneBoundaries::StaticStruct, TEXT("/Script/MagicLeapPlanes"), TEXT("MagicLeapPlaneBoundaries"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPlaneBoundaries
{
	FScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPlaneBoundaries()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapPlaneBoundaries")),new UScriptStruct::TCppStructOps<FMagicLeapPlaneBoundaries>);
	}
} ScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPlaneBoundaries;
	struct Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boundaries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Boundaries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Boundaries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Represents multiple regions on a 2D plane. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "Represents multiple regions on a 2D plane." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapPlaneBoundaries>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::NewProp_Boundaries_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/** The polygon that defines the region. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "The polygon that defines the region." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::NewProp_Boundaries = { "Boundaries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlaneBoundaries, Boundaries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::NewProp_Boundaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::NewProp_Boundaries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::NewProp_Boundaries_Inner = { "Boundaries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/** Plane ID, the same value associating to the ID in FMagicLeapPlaneResult if they belong to the same plane. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "Plane ID, the same value associating to the ID in FMagicLeapPlaneResult if they belong to the same plane." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlaneBoundaries, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::NewProp_Boundaries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::NewProp_Boundaries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapPlanes,
		nullptr,
		&NewStructOps,
		"MagicLeapPlaneBoundaries",
		sizeof(FMagicLeapPlaneBoundaries),
		alignof(FMagicLeapPlaneBoundaries),
		Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapPlanes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapPlaneBoundaries"), sizeof(FMagicLeapPlaneBoundaries), Get_Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Hash() { return 3201980733U; }
class UScriptStruct* FMagicLeapPlaneBoundary::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPPLANES_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary, Z_Construct_UPackage__Script_MagicLeapPlanes(), TEXT("MagicLeapPlaneBoundary"), sizeof(FMagicLeapPlaneBoundary), Get_Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPPLANES_API UScriptStruct* StaticStruct<FMagicLeapPlaneBoundary>()
{
	return FMagicLeapPlaneBoundary::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapPlaneBoundary(FMagicLeapPlaneBoundary::StaticStruct, TEXT("/Script/MagicLeapPlanes"), TEXT("MagicLeapPlaneBoundary"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPlaneBoundary
{
	FScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPlaneBoundary()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapPlaneBoundary")),new UScriptStruct::TCppStructOps<FMagicLeapPlaneBoundary>);
	}
} ScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPlaneBoundary;
	struct Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Holes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Holes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Holes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Polygon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Polygon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Coplanar connected line segments representing the outer boundary of an N-sided polygon. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "Coplanar connected line segments representing the outer boundary of an N-sided polygon." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapPlaneBoundary>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::NewProp_Holes_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/** A polygon may contains multiple holes. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "A polygon may contains multiple holes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::NewProp_Holes = { "Holes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlaneBoundary, Holes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::NewProp_Holes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::NewProp_Holes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::NewProp_Holes_Inner = { "Holes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapPolygon, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::NewProp_Polygon_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/** The polygon that defines the region. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "The polygon that defines the region." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlaneBoundary, Polygon), Z_Construct_UScriptStruct_FMagicLeapPolygon, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::NewProp_Polygon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::NewProp_Polygon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::NewProp_Holes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::NewProp_Holes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::NewProp_Polygon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapPlanes,
		nullptr,
		&NewStructOps,
		"MagicLeapPlaneBoundary",
		sizeof(FMagicLeapPlaneBoundary),
		alignof(FMagicLeapPlaneBoundary),
		Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapPlanes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapPlaneBoundary"), sizeof(FMagicLeapPlaneBoundary), Get_Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Hash() { return 674141052U; }
class UScriptStruct* FMagicLeapPolygon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPPLANES_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPolygon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapPolygon, Z_Construct_UPackage__Script_MagicLeapPlanes(), TEXT("MagicLeapPolygon"), sizeof(FMagicLeapPolygon), Get_Z_Construct_UScriptStruct_FMagicLeapPolygon_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPPLANES_API UScriptStruct* StaticStruct<FMagicLeapPolygon>()
{
	return FMagicLeapPolygon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapPolygon(FMagicLeapPolygon::StaticStruct, TEXT("/Script/MagicLeapPlanes"), TEXT("MagicLeapPolygon"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPolygon
{
	FScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPolygon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapPolygon")),new UScriptStruct::TCppStructOps<FMagicLeapPolygon>);
	}
} ScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPolygon;
	struct Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapPolygon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/** The polygon that defines the region. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "The polygon that defines the region." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPolygon, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::NewProp_Vertices_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapPlanes,
		nullptr,
		&NewStructOps,
		"MagicLeapPolygon",
		sizeof(FMagicLeapPolygon),
		alignof(FMagicLeapPolygon),
		Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapPolygon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPolygon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapPlanes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapPolygon"), sizeof(FMagicLeapPolygon), Get_Z_Construct_UScriptStruct_FMagicLeapPolygon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPolygon_Hash() { return 502076742U; }
class UScriptStruct* FMagicLeapPlanesQuery::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPPLANES_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery, Z_Construct_UPackage__Script_MagicLeapPlanes(), TEXT("MagicLeapPlanesQuery"), sizeof(FMagicLeapPlanesQuery), Get_Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPPLANES_API UScriptStruct* StaticStruct<FMagicLeapPlanesQuery>()
{
	return FMagicLeapPlanesQuery::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapPlanesQuery(FMagicLeapPlanesQuery::StaticStruct, TEXT("/Script/MagicLeapPlanes"), TEXT("MagicLeapPlanesQuery"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPlanesQuery
{
	FScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPlanesQuery()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapPlanesQuery")),new UScriptStruct::TCppStructOps<FMagicLeapPlanesQuery>);
	}
} ScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPlanesQuery;
	struct Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResultTrackingSpace_MetaData[];
#endif
		static void NewProp_bResultTrackingSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResultTrackingSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSearchVolumeTrackingSpace_MetaData[];
#endif
		static void NewProp_bSearchVolumeTrackingSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSearchVolumeTrackingSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimilarityThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SimilarityThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchVolumeExtents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchVolumeExtents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchVolumeOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchVolumeOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchVolumePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchVolumePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPlaneArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPlaneArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHoleLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinHoleLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Type used to represent a plane query. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "Type used to represent a plane query." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapPlanesQuery>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_bResultTrackingSpace_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/**\n\x09\x09""A flag representing what coordinate space the results are in.\n\x09\x09If set, the results are in HMD tracking space.\n\x09\x09If unset, the results are is in world space.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "A flag representing what coordinate space the results are in.\nIf set, the results are in HMD tracking space.\nIf unset, the results are is in world space." },
	};
#endif
	void Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_bResultTrackingSpace_SetBit(void* Obj)
	{
		((FMagicLeapPlanesQuery*)Obj)->bResultTrackingSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_bResultTrackingSpace = { "bResultTrackingSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMagicLeapPlanesQuery), &Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_bResultTrackingSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_bResultTrackingSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_bResultTrackingSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_bSearchVolumeTrackingSpace_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/**\n\x09\x09""A flag representing what coordinate space the search volume is in. \n\x09\x09If set, the search volume is in HMD tracking space.\n\x09\x09If unset, the search volume is in world space.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "A flag representing what coordinate space the search volume is in.\nIf set, the search volume is in HMD tracking space.\nIf unset, the search volume is in world space." },
	};
#endif
	void Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_bSearchVolumeTrackingSpace_SetBit(void* Obj)
	{
		((FMagicLeapPlanesQuery*)Obj)->bSearchVolumeTrackingSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_bSearchVolumeTrackingSpace = { "bSearchVolumeTrackingSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMagicLeapPlanesQuery), &Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_bSearchVolumeTrackingSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_bSearchVolumeTrackingSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_bSearchVolumeTrackingSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SimilarityThreshold_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/**\n\x09\x09The threshold used to compare incoming planes with any cached planes.\n\x09\x09Larger values reduce the amount of NewPlanes returned by a persistent query.\n\x09\x09Larger values increase the amount of error in the current set of planes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "The threshold used to compare incoming planes with any cached planes.\nLarger values reduce the amount of NewPlanes returned by a persistent query.\nLarger values increase the amount of error in the current set of planes." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SimilarityThreshold = { "SimilarityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlanesQuery, SimilarityThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SimilarityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SimilarityThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumeExtents_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumeExtents = { "SearchVolumeExtents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlanesQuery, SearchVolumeExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumeExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumeExtents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumeOrientation_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumeOrientation = { "SearchVolumeOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlanesQuery, SearchVolumeOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumeOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumeOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumePosition_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumePosition = { "SearchVolumePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlanesQuery, SearchVolumePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MinPlaneArea_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/**\n\x09\x09The minimum area (in squared meters) of planes to be returned.  This value cannot be lower than 400 (lower values\n\x09\x09will be capped to this minimum).\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "The minimum area (in squared meters) of planes to be returned.  This value cannot be lower than 400 (lower values\nwill be capped to this minimum)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MinPlaneArea = { "MinPlaneArea", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlanesQuery, MinPlaneArea), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MinPlaneArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MinPlaneArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MinHoleLength_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/**\n\x09\x09If #MLPlanesQueryFlag_IgnoreHoles is set to false, holes with a perimeter (in meters) smaller than this value will be\n\x09\x09ignored, and can be part of the plane.  This value cannot be lower than 0 (lower values will be capped to this minimum).\n\x09\x09""A good default value is 50cm.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "If #MLPlanesQueryFlag_IgnoreHoles is set to false, holes with a perimeter (in meters) smaller than this value will be\nignored, and can be part of the plane.  This value cannot be lower than 0 (lower values will be capped to this minimum).\nA good default value is 50cm." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MinHoleLength = { "MinHoleLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlanesQuery, MinHoleLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MinHoleLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MinHoleLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MaxResults_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/**\n\x09\x09The maximum number of results that should be returned.  This is also the minimum expected size of the array of results\n\x09\x09passed to the MLPlanesGetResult function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "The maximum number of results that should be returned.  This is also the minimum expected size of the array of results\npassed to the MLPlanesGetResult function." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlanesQuery, MaxResults), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MaxResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MaxResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolume_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/** DEPRECATED. Use individual fields for setting search volume position, orientation and extents. */" },
		{ "DeprecatedProperty", "" },
		{ "DisplayName", "SearchVolume_DEPRECATED" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "DEPRECATED. Use individual fields for setting search volume position, orientation and extents." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolume = { "SearchVolume", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlanesQuery, SearchVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/** The flags to apply to this query. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "The flags to apply to this query." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlanesQuery, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_bResultTrackingSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_bSearchVolumeTrackingSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SimilarityThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumeExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumeOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolumePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MinPlaneArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MinHoleLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_SearchVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::NewProp_Flags_Inner_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapPlanes,
		nullptr,
		&NewStructOps,
		"MagicLeapPlanesQuery",
		sizeof(FMagicLeapPlanesQuery),
		alignof(FMagicLeapPlanesQuery),
		Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapPlanesQuery()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapPlanes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapPlanesQuery"), sizeof(FMagicLeapPlanesQuery), Get_Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Hash() { return 18466806U; }
class UScriptStruct* FMagicLeapPlaneResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPPLANES_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapPlaneResult, Z_Construct_UPackage__Script_MagicLeapPlanes(), TEXT("MagicLeapPlaneResult"), sizeof(FMagicLeapPlaneResult), Get_Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPPLANES_API UScriptStruct* StaticStruct<FMagicLeapPlaneResult>()
{
	return FMagicLeapPlaneResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapPlaneResult(FMagicLeapPlaneResult::StaticStruct, TEXT("/Script/MagicLeapPlanes"), TEXT("MagicLeapPlaneResult"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPlaneResult
{
	FScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPlaneResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapPlaneResult")),new UScriptStruct::TCppStructOps<FMagicLeapPlaneResult>);
	}
} ScriptStruct_MagicLeapPlanes_StaticRegisterNativesFMagicLeapPlaneResult;
	struct Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InnerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlaneFlags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaneFlags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaneFlags_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneDimensions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanePosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Represents a plane returned from the ML-API. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "Represents a plane returned from the ML-API." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapPlaneResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_InnerID_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/** ID of the inner plane. This ID is persistent across queries */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "ID of the inner plane. This ID is persistent across queries" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_InnerID = { "InnerID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlaneResult, InnerID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_InnerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_InnerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/** ID of the plane result. This ID is persistent across queries */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "ID of the plane result. This ID is persistent across queries" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlaneResult, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneFlags_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/** The flags which describe this plane. TODO: Should be a TSet but that is misbehaving in the editor.*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "The flags which describe this plane. TODO: Should be a TSet but that is misbehaving in the editor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneFlags = { "PlaneFlags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlaneResult, PlaneFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneFlags_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneFlags_Inner = { "PlaneFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneFlags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneDimensions_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/** Width and height of the plane (in Unreal units). */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "Width and height of the plane (in Unreal units)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneDimensions = { "PlaneDimensions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlaneResult, PlaneDimensions), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneDimensions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_ContentOrientation_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/** Orientation of the content with its up-vector orthogonal to the plane. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "Orientation of the content with its up-vector orthogonal to the plane." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_ContentOrientation = { "ContentOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlaneResult, ContentOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_ContentOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_ContentOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneOrientation_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/** Orientation of the plane. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "Orientation of the plane." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneOrientation = { "PlaneOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlaneResult, PlaneOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlanePosition_MetaData[] = {
		{ "Category", "Planes|MagicLeap" },
		{ "Comment", "/** Position of the center of the plane in world coordinates. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesTypes.h" },
		{ "ToolTip", "Position of the center of the plane in world coordinates." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlanePosition = { "PlanePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapPlaneResult, PlanePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlanePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlanePosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_InnerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneFlags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneDimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_ContentOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlaneOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::NewProp_PlanePosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapPlanes,
		nullptr,
		&NewStructOps,
		"MagicLeapPlaneResult",
		sizeof(FMagicLeapPlaneResult),
		alignof(FMagicLeapPlaneResult),
		Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapPlaneResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapPlanes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapPlaneResult"), sizeof(FMagicLeapPlaneResult), Get_Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Hash() { return 3400255427U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
