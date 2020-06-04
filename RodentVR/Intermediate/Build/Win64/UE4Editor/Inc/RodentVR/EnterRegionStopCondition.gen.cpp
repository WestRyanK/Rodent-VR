// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/StopConditions/EnterRegionStopCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnterRegionStopCondition() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UEnterRegionStopCondition_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UEnterRegionStopCondition();
	RODENTVR_API UClass* Z_Construct_UClass_UStopCondition();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	DEFINE_FUNCTION(UEnterRegionStopCondition::execSetEnterRegionDelaySec)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EnterRegionDelaySecValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnterRegionDelaySec(Z_Param_EnterRegionDelaySecValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnterRegionStopCondition::execGetEnterRegionDelaySec)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnterRegionDelaySec();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnterRegionStopCondition::execGetEnterRegionCounts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,int32>*)Z_Param__Result=P_THIS->GetEnterRegionCounts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnterRegionStopCondition::execAddRegionCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionId);
		P_GET_PROPERTY(FIntProperty,Z_Param_EnterRegionCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRegionCount(Z_Param_RegionId,Z_Param_EnterRegionCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnterRegionStopCondition::execRemoveRegionCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveRegionCount(Z_Param_RegionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnterRegionStopCondition::execClearRegionCounts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearRegionCounts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnterRegionStopCondition::execOnRewardRegionEnter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionEnteredId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardRegionEnter(Z_Param_RegionEnteredId);
		P_NATIVE_END;
	}
	void UEnterRegionStopCondition::StaticRegisterNativesUEnterRegionStopCondition()
	{
		UClass* Class = UEnterRegionStopCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRegionCount", &UEnterRegionStopCondition::execAddRegionCount },
			{ "ClearRegionCounts", &UEnterRegionStopCondition::execClearRegionCounts },
			{ "GetEnterRegionCounts", &UEnterRegionStopCondition::execGetEnterRegionCounts },
			{ "GetEnterRegionDelaySec", &UEnterRegionStopCondition::execGetEnterRegionDelaySec },
			{ "OnRewardRegionEnter", &UEnterRegionStopCondition::execOnRewardRegionEnter },
			{ "RemoveRegionCount", &UEnterRegionStopCondition::execRemoveRegionCount },
			{ "SetEnterRegionDelaySec", &UEnterRegionStopCondition::execSetEnterRegionDelaySec },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount_Statics
	{
		struct EnterRegionStopCondition_eventAddRegionCount_Parms
		{
			int32 RegionId;
			int32 EnterRegionCount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EnterRegionCount;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RegionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount_Statics::NewProp_EnterRegionCount = { "EnterRegionCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnterRegionStopCondition_eventAddRegionCount_Parms, EnterRegionCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount_Statics::NewProp_RegionId = { "RegionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnterRegionStopCondition_eventAddRegionCount_Parms, RegionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount_Statics::NewProp_EnterRegionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount_Statics::NewProp_RegionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "AddRegionCount", nullptr, nullptr, sizeof(EnterRegionStopCondition_eventAddRegionCount_Parms), Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionCounts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionCounts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "ClearRegionCounts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics
	{
		struct EnterRegionStopCondition_eventGetEnterRegionCounts_Parms
		{
			TMap<int32,int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnterRegionStopCondition_eventGetEnterRegionCounts_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "GetEnterRegionCounts", nullptr, nullptr, sizeof(EnterRegionStopCondition_eventGetEnterRegionCounts_Parms), Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionDelaySec_Statics
	{
		struct EnterRegionStopCondition_eventGetEnterRegionDelaySec_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionDelaySec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnterRegionStopCondition_eventGetEnterRegionDelaySec_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionDelaySec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionDelaySec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionDelaySec_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionDelaySec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "GetEnterRegionDelaySec", nullptr, nullptr, sizeof(EnterRegionStopCondition_eventGetEnterRegionDelaySec_Parms), Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionDelaySec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionDelaySec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionDelaySec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionDelaySec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionDelaySec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionDelaySec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics
	{
		struct EnterRegionStopCondition_eventOnRewardRegionEnter_Parms
		{
			int32 RegionEnteredId;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RegionEnteredId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::NewProp_RegionEnteredId = { "RegionEnteredId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnterRegionStopCondition_eventOnRewardRegionEnter_Parms, RegionEnteredId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::NewProp_RegionEnteredId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "OnRewardRegionEnter", nullptr, nullptr, sizeof(EnterRegionStopCondition_eventOnRewardRegionEnter_Parms), Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionCount_Statics
	{
		struct EnterRegionStopCondition_eventRemoveRegionCount_Parms
		{
			int32 RegionId;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RegionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionCount_Statics::NewProp_RegionId = { "RegionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnterRegionStopCondition_eventRemoveRegionCount_Parms, RegionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionCount_Statics::NewProp_RegionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "RemoveRegionCount", nullptr, nullptr, sizeof(EnterRegionStopCondition_eventRemoveRegionCount_Parms), Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnterRegionStopCondition_SetEnterRegionDelaySec_Statics
	{
		struct EnterRegionStopCondition_eventSetEnterRegionDelaySec_Parms
		{
			float EnterRegionDelaySecValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnterRegionDelaySecValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_SetEnterRegionDelaySec_Statics::NewProp_EnterRegionDelaySecValue = { "EnterRegionDelaySecValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnterRegionStopCondition_eventSetEnterRegionDelaySec_Parms, EnterRegionDelaySecValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterRegionStopCondition_SetEnterRegionDelaySec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_SetEnterRegionDelaySec_Statics::NewProp_EnterRegionDelaySecValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_SetEnterRegionDelaySec_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_SetEnterRegionDelaySec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "SetEnterRegionDelaySec", nullptr, nullptr, sizeof(EnterRegionStopCondition_eventSetEnterRegionDelaySec_Parms), Z_Construct_UFunction_UEnterRegionStopCondition_SetEnterRegionDelaySec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_SetEnterRegionDelaySec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_SetEnterRegionDelaySec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_SetEnterRegionDelaySec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_SetEnterRegionDelaySec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_SetEnterRegionDelaySec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnterRegionStopCondition_NoRegister()
	{
		return UEnterRegionStopCondition::StaticClass();
	}
	struct Z_Construct_UClass_UEnterRegionStopCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterRegionDelaySec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnterRegionDelaySec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnterRegionStopCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStopCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnterRegionStopCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionCount, "AddRegionCount" }, // 4285107827
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionCounts, "ClearRegionCounts" }, // 2761729717
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionCounts, "GetEnterRegionCounts" }, // 3697053870
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionDelaySec, "GetEnterRegionDelaySec" }, // 4031828807
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter, "OnRewardRegionEnter" }, // 275696285
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionCount, "RemoveRegionCount" }, // 444179216
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_SetEnterRegionDelaySec, "SetEnterRegionDelaySec" }, // 1185409540
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnterRegionStopCondition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "StopConditions/EnterRegionStopCondition.h" },
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_EnterRegionDelaySec_MetaData[] = {
		{ "BlueprintGetter", "GetEnterRegionDelaySec" },
		{ "BlueprintSetter", "SetEnterRegionDelaySec" },
		{ "Category", "EnterRegionStopCondition" },
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_EnterRegionDelaySec = { "EnterRegionDelaySec", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnterRegionStopCondition, EnterRegionDelaySec), METADATA_PARAMS(Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_EnterRegionDelaySec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_EnterRegionDelaySec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnterRegionStopCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_EnterRegionDelaySec,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnterRegionStopCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnterRegionStopCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnterRegionStopCondition_Statics::ClassParams = {
		&UEnterRegionStopCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnterRegionStopCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnterRegionStopCondition_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnterRegionStopCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnterRegionStopCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnterRegionStopCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnterRegionStopCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnterRegionStopCondition, 1442644466);
	template<> RODENTVR_API UClass* StaticClass<UEnterRegionStopCondition>()
	{
		return UEnterRegionStopCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnterRegionStopCondition(Z_Construct_UClass_UEnterRegionStopCondition, &UEnterRegionStopCondition::StaticClass, TEXT("/Script/RodentVR"), TEXT("UEnterRegionStopCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnterRegionStopCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
