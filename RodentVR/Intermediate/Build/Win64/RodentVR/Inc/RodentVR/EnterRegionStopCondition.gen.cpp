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
	RODENTVR_API UClass* Z_Construct_UClass_URegionSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEnterRegionStopCondition::execSetRequireAllConditions)
	{
		P_GET_UBOOL(Z_Param_RequireAllConditionsValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRequireAllConditions(Z_Param_RequireAllConditionsValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnterRegionStopCondition::execGetRequireAllConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRequireAllConditions();
		P_NATIVE_END;
	}
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
	DEFINE_FUNCTION(UEnterRegionStopCondition::execGetEnterRegionStopConditionCounts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<URegionSettings*,int32>*)Z_Param__Result=P_THIS->GetEnterRegionStopConditionCounts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnterRegionStopCondition::execAddRegionStopConditionCount)
	{
		P_GET_OBJECT(URegionSettings,Z_Param_Region);
		P_GET_PROPERTY(FIntProperty,Z_Param_EnterRegionCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRegionStopConditionCount(Z_Param_Region,Z_Param_EnterRegionCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnterRegionStopCondition::execRemoveRegionStopConditionCount)
	{
		P_GET_OBJECT(URegionSettings,Z_Param_Region);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveRegionStopConditionCount(Z_Param_Region);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnterRegionStopCondition::execClearRegionStopConditionCounts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearRegionStopConditionCounts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnterRegionStopCondition::execOnRegionEnter)
	{
		P_GET_OBJECT(URegionSettings,Z_Param_RegionEntered);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRegionEnter(Z_Param_RegionEntered);
		P_NATIVE_END;
	}
	void UEnterRegionStopCondition::StaticRegisterNativesUEnterRegionStopCondition()
	{
		UClass* Class = UEnterRegionStopCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRegionStopConditionCount", &UEnterRegionStopCondition::execAddRegionStopConditionCount },
			{ "ClearRegionStopConditionCounts", &UEnterRegionStopCondition::execClearRegionStopConditionCounts },
			{ "GetEnterRegionDelaySec", &UEnterRegionStopCondition::execGetEnterRegionDelaySec },
			{ "GetEnterRegionStopConditionCounts", &UEnterRegionStopCondition::execGetEnterRegionStopConditionCounts },
			{ "GetRequireAllConditions", &UEnterRegionStopCondition::execGetRequireAllConditions },
			{ "OnRegionEnter", &UEnterRegionStopCondition::execOnRegionEnter },
			{ "RemoveRegionStopConditionCount", &UEnterRegionStopCondition::execRemoveRegionStopConditionCount },
			{ "SetEnterRegionDelaySec", &UEnterRegionStopCondition::execSetEnterRegionDelaySec },
			{ "SetRequireAllConditions", &UEnterRegionStopCondition::execSetRequireAllConditions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount_Statics
	{
		struct EnterRegionStopCondition_eventAddRegionStopConditionCount_Parms
		{
			URegionSettings* Region;
			int32 EnterRegionCount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EnterRegionCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Region;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount_Statics::NewProp_EnterRegionCount = { "EnterRegionCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnterRegionStopCondition_eventAddRegionStopConditionCount_Parms, EnterRegionCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnterRegionStopCondition_eventAddRegionStopConditionCount_Parms, Region), Z_Construct_UClass_URegionSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount_Statics::NewProp_EnterRegionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount_Statics::NewProp_Region,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "AddRegionStopConditionCount", nullptr, nullptr, sizeof(EnterRegionStopCondition_eventAddRegionStopConditionCount_Parms), Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionStopConditionCounts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionStopConditionCounts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionStopConditionCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "ClearRegionStopConditionCounts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionStopConditionCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionStopConditionCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionStopConditionCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionStopConditionCounts_Statics::FuncParams);
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
	struct Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics
	{
		struct EnterRegionStopCondition_eventGetEnterRegionStopConditionCounts_Parms
		{
			TMap<URegionSettings*,int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnterRegionStopCondition_eventGetEnterRegionStopConditionCounts_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URegionSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "GetEnterRegionStopConditionCounts", nullptr, nullptr, sizeof(EnterRegionStopCondition_eventGetEnterRegionStopConditionCounts_Parms), Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions_Statics
	{
		struct EnterRegionStopCondition_eventGetRequireAllConditions_Parms
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
	void Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnterRegionStopCondition_eventGetRequireAllConditions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnterRegionStopCondition_eventGetRequireAllConditions_Parms), &Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "GetRequireAllConditions", nullptr, nullptr, sizeof(EnterRegionStopCondition_eventGetRequireAllConditions_Parms), Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnterRegionStopCondition_OnRegionEnter_Statics
	{
		struct EnterRegionStopCondition_eventOnRegionEnter_Parms
		{
			URegionSettings* RegionEntered;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegionEntered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_OnRegionEnter_Statics::NewProp_RegionEntered = { "RegionEntered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnterRegionStopCondition_eventOnRegionEnter_Parms, RegionEntered), Z_Construct_UClass_URegionSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterRegionStopCondition_OnRegionEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_OnRegionEnter_Statics::NewProp_RegionEntered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_OnRegionEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_OnRegionEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "OnRegionEnter", nullptr, nullptr, sizeof(EnterRegionStopCondition_eventOnRegionEnter_Parms), Z_Construct_UFunction_UEnterRegionStopCondition_OnRegionEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_OnRegionEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_OnRegionEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_OnRegionEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_OnRegionEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_OnRegionEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionStopConditionCount_Statics
	{
		struct EnterRegionStopCondition_eventRemoveRegionStopConditionCount_Parms
		{
			URegionSettings* Region;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Region;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionStopConditionCount_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnterRegionStopCondition_eventRemoveRegionStopConditionCount_Parms, Region), Z_Construct_UClass_URegionSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionStopConditionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionStopConditionCount_Statics::NewProp_Region,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionStopConditionCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionStopConditionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "RemoveRegionStopConditionCount", nullptr, nullptr, sizeof(EnterRegionStopCondition_eventRemoveRegionStopConditionCount_Parms), Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionStopConditionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionStopConditionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionStopConditionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionStopConditionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionStopConditionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionStopConditionCount_Statics::FuncParams);
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
	struct Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions_Statics
	{
		struct EnterRegionStopCondition_eventSetRequireAllConditions_Parms
		{
			bool RequireAllConditionsValue;
		};
		static void NewProp_RequireAllConditionsValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RequireAllConditionsValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions_Statics::NewProp_RequireAllConditionsValue_SetBit(void* Obj)
	{
		((EnterRegionStopCondition_eventSetRequireAllConditions_Parms*)Obj)->RequireAllConditionsValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions_Statics::NewProp_RequireAllConditionsValue = { "RequireAllConditionsValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnterRegionStopCondition_eventSetRequireAllConditions_Parms), &Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions_Statics::NewProp_RequireAllConditionsValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions_Statics::NewProp_RequireAllConditionsValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "SetRequireAllConditions", nullptr, nullptr, sizeof(EnterRegionStopCondition_eventSetRequireAllConditions_Parms), Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequireAllConditions_MetaData[];
#endif
		static void NewProp_RequireAllConditions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RequireAllConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterRegionStopConditionCounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EnterRegionStopConditionCounts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnterRegionStopConditionCounts_Key_KeyProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EnterRegionStopConditionCounts_ValueProp;
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
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_AddRegionStopConditionCount, "AddRegionStopConditionCount" }, // 3824232671
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_ClearRegionStopConditionCounts, "ClearRegionStopConditionCounts" }, // 312130659
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionDelaySec, "GetEnterRegionDelaySec" }, // 4031828807
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_GetEnterRegionStopConditionCounts, "GetEnterRegionStopConditionCounts" }, // 2420691256
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_GetRequireAllConditions, "GetRequireAllConditions" }, // 2644014888
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_OnRegionEnter, "OnRegionEnter" }, // 1906527186
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_RemoveRegionStopConditionCount, "RemoveRegionStopConditionCount" }, // 258351145
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_SetEnterRegionDelaySec, "SetEnterRegionDelaySec" }, // 1185409540
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_SetRequireAllConditions, "SetRequireAllConditions" }, // 1969199662
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnterRegionStopCondition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "StopConditions/EnterRegionStopCondition.h" },
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_RequireAllConditions_MetaData[] = {
		{ "BlueprintGetter", "GetRequireAllConditions" },
		{ "BlueprintSetter", "SetRequireAllConditions" },
		{ "Category", "EnterRegionStopCondition" },
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	void Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_RequireAllConditions_SetBit(void* Obj)
	{
		((UEnterRegionStopCondition*)Obj)->RequireAllConditions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_RequireAllConditions = { "RequireAllConditions", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnterRegionStopCondition), &Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_RequireAllConditions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_RequireAllConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_RequireAllConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_EnterRegionStopConditionCounts_MetaData[] = {
		{ "BlueprintGetter", "GetEnterRegionStopConditionCounts" },
		{ "Category", "EnterRegionStopCondition" },
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_EnterRegionStopConditionCounts = { "EnterRegionStopConditionCounts", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnterRegionStopCondition, EnterRegionStopConditionCounts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_EnterRegionStopConditionCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_EnterRegionStopConditionCounts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_EnterRegionStopConditionCounts_Key_KeyProp = { "EnterRegionStopConditionCounts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URegionSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_EnterRegionStopConditionCounts_ValueProp = { "EnterRegionStopConditionCounts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_RequireAllConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_EnterRegionStopConditionCounts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_EnterRegionStopConditionCounts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnterRegionStopCondition_Statics::NewProp_EnterRegionStopConditionCounts_ValueProp,
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
	IMPLEMENT_CLASS(UEnterRegionStopCondition, 1885282617);
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
