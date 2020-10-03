// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/RegionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRegionSettings() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_URegionSettings_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_URegionSettings();
	RODENTVR_API UClass* Z_Construct_UClass_UActorSettings();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UClass* Z_Construct_UClass_UDevice_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UToneGenerationSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URegionSettings::execSetIsNosePoke)
	{
		P_GET_UBOOL(Z_Param_IsNosePokeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsNosePoke(Z_Param_IsNosePokeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URegionSettings::execGetIsNosePoke)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsNosePoke();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URegionSettings::execSetToneGenerationSettings)
	{
		P_GET_OBJECT(UToneGenerationSettings,Z_Param_ToneGenerationSettingsValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToneGenerationSettings(Z_Param_ToneGenerationSettingsValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URegionSettings::execGetToneGenerationSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UToneGenerationSettings**)Z_Param__Result=P_THIS->GetToneGenerationSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URegionSettings::execSetRewardDeviceDispensingDurationSec)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RewardDeviceDispensingDurationSecValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRewardDeviceDispensingDurationSec(Z_Param_RewardDeviceDispensingDurationSecValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URegionSettings::execGetRewardDeviceDispensingDurationSec)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRewardDeviceDispensingDurationSec();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URegionSettings::execSetRewardDevice)
	{
		P_GET_OBJECT(UDevice,Z_Param_RewardDeviceValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRewardDevice(Z_Param_RewardDeviceValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URegionSettings::execGetRewardDevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDevice**)Z_Param__Result=P_THIS->GetRewardDevice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URegionSettings::execSetIsRewardDispensingEnabled)
	{
		P_GET_UBOOL(Z_Param_IsRewardDispensingEnabledValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsRewardDispensingEnabled(Z_Param_IsRewardDispensingEnabledValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URegionSettings::execGetIsRewardDispensingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsRewardDispensingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URegionSettings::execSetRegionId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RegionIdValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegionId(Z_Param_RegionIdValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URegionSettings::execGetRegionId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRegionId();
		P_NATIVE_END;
	}
	void URegionSettings::StaticRegisterNativesURegionSettings()
	{
		UClass* Class = URegionSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsNosePoke", &URegionSettings::execGetIsNosePoke },
			{ "GetIsRewardDispensingEnabled", &URegionSettings::execGetIsRewardDispensingEnabled },
			{ "GetRegionId", &URegionSettings::execGetRegionId },
			{ "GetRewardDevice", &URegionSettings::execGetRewardDevice },
			{ "GetRewardDeviceDispensingDurationSec", &URegionSettings::execGetRewardDeviceDispensingDurationSec },
			{ "GetToneGenerationSettings", &URegionSettings::execGetToneGenerationSettings },
			{ "SetIsNosePoke", &URegionSettings::execSetIsNosePoke },
			{ "SetIsRewardDispensingEnabled", &URegionSettings::execSetIsRewardDispensingEnabled },
			{ "SetRegionId", &URegionSettings::execSetRegionId },
			{ "SetRewardDevice", &URegionSettings::execSetRewardDevice },
			{ "SetRewardDeviceDispensingDurationSec", &URegionSettings::execSetRewardDeviceDispensingDurationSec },
			{ "SetToneGenerationSettings", &URegionSettings::execSetToneGenerationSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URegionSettings_GetIsNosePoke_Statics
	{
		struct RegionSettings_eventGetIsNosePoke_Parms
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
	void Z_Construct_UFunction_URegionSettings_GetIsNosePoke_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RegionSettings_eventGetIsNosePoke_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URegionSettings_GetIsNosePoke_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RegionSettings_eventGetIsNosePoke_Parms), &Z_Construct_UFunction_URegionSettings_GetIsNosePoke_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionSettings_GetIsNosePoke_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionSettings_GetIsNosePoke_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegionSettings_GetIsNosePoke_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionSettings_GetIsNosePoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegionSettings, nullptr, "GetIsNosePoke", nullptr, nullptr, sizeof(RegionSettings_eventGetIsNosePoke_Parms), Z_Construct_UFunction_URegionSettings_GetIsNosePoke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_GetIsNosePoke_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URegionSettings_GetIsNosePoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_GetIsNosePoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URegionSettings_GetIsNosePoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URegionSettings_GetIsNosePoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled_Statics
	{
		struct RegionSettings_eventGetIsRewardDispensingEnabled_Parms
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
	void Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RegionSettings_eventGetIsRewardDispensingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RegionSettings_eventGetIsRewardDispensingEnabled_Parms), &Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegionSettings, nullptr, "GetIsRewardDispensingEnabled", nullptr, nullptr, sizeof(RegionSettings_eventGetIsRewardDispensingEnabled_Parms), Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URegionSettings_GetRegionId_Statics
	{
		struct RegionSettings_eventGetRegionId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URegionSettings_GetRegionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RegionSettings_eventGetRegionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionSettings_GetRegionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionSettings_GetRegionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegionSettings_GetRegionId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionSettings_GetRegionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegionSettings, nullptr, "GetRegionId", nullptr, nullptr, sizeof(RegionSettings_eventGetRegionId_Parms), Z_Construct_UFunction_URegionSettings_GetRegionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_GetRegionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URegionSettings_GetRegionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_GetRegionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URegionSettings_GetRegionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URegionSettings_GetRegionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URegionSettings_GetRewardDevice_Statics
	{
		struct RegionSettings_eventGetRewardDevice_Parms
		{
			UDevice* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URegionSettings_GetRewardDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RegionSettings_eventGetRewardDevice_Parms, ReturnValue), Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionSettings_GetRewardDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionSettings_GetRewardDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegionSettings_GetRewardDevice_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionSettings_GetRewardDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegionSettings, nullptr, "GetRewardDevice", nullptr, nullptr, sizeof(RegionSettings_eventGetRewardDevice_Parms), Z_Construct_UFunction_URegionSettings_GetRewardDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_GetRewardDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URegionSettings_GetRewardDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_GetRewardDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URegionSettings_GetRewardDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URegionSettings_GetRewardDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URegionSettings_GetRewardDeviceDispensingDurationSec_Statics
	{
		struct RegionSettings_eventGetRewardDeviceDispensingDurationSec_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URegionSettings_GetRewardDeviceDispensingDurationSec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RegionSettings_eventGetRewardDeviceDispensingDurationSec_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionSettings_GetRewardDeviceDispensingDurationSec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionSettings_GetRewardDeviceDispensingDurationSec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegionSettings_GetRewardDeviceDispensingDurationSec_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionSettings_GetRewardDeviceDispensingDurationSec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegionSettings, nullptr, "GetRewardDeviceDispensingDurationSec", nullptr, nullptr, sizeof(RegionSettings_eventGetRewardDeviceDispensingDurationSec_Parms), Z_Construct_UFunction_URegionSettings_GetRewardDeviceDispensingDurationSec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_GetRewardDeviceDispensingDurationSec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URegionSettings_GetRewardDeviceDispensingDurationSec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_GetRewardDeviceDispensingDurationSec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URegionSettings_GetRewardDeviceDispensingDurationSec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URegionSettings_GetRewardDeviceDispensingDurationSec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URegionSettings_GetToneGenerationSettings_Statics
	{
		struct RegionSettings_eventGetToneGenerationSettings_Parms
		{
			UToneGenerationSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URegionSettings_GetToneGenerationSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RegionSettings_eventGetToneGenerationSettings_Parms, ReturnValue), Z_Construct_UClass_UToneGenerationSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionSettings_GetToneGenerationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionSettings_GetToneGenerationSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegionSettings_GetToneGenerationSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionSettings_GetToneGenerationSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegionSettings, nullptr, "GetToneGenerationSettings", nullptr, nullptr, sizeof(RegionSettings_eventGetToneGenerationSettings_Parms), Z_Construct_UFunction_URegionSettings_GetToneGenerationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_GetToneGenerationSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URegionSettings_GetToneGenerationSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_GetToneGenerationSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URegionSettings_GetToneGenerationSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URegionSettings_GetToneGenerationSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URegionSettings_SetIsNosePoke_Statics
	{
		struct RegionSettings_eventSetIsNosePoke_Parms
		{
			bool IsNosePokeValue;
		};
		static void NewProp_IsNosePokeValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNosePokeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URegionSettings_SetIsNosePoke_Statics::NewProp_IsNosePokeValue_SetBit(void* Obj)
	{
		((RegionSettings_eventSetIsNosePoke_Parms*)Obj)->IsNosePokeValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URegionSettings_SetIsNosePoke_Statics::NewProp_IsNosePokeValue = { "IsNosePokeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RegionSettings_eventSetIsNosePoke_Parms), &Z_Construct_UFunction_URegionSettings_SetIsNosePoke_Statics::NewProp_IsNosePokeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionSettings_SetIsNosePoke_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionSettings_SetIsNosePoke_Statics::NewProp_IsNosePokeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegionSettings_SetIsNosePoke_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionSettings_SetIsNosePoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegionSettings, nullptr, "SetIsNosePoke", nullptr, nullptr, sizeof(RegionSettings_eventSetIsNosePoke_Parms), Z_Construct_UFunction_URegionSettings_SetIsNosePoke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_SetIsNosePoke_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URegionSettings_SetIsNosePoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_SetIsNosePoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URegionSettings_SetIsNosePoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URegionSettings_SetIsNosePoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled_Statics
	{
		struct RegionSettings_eventSetIsRewardDispensingEnabled_Parms
		{
			bool IsRewardDispensingEnabledValue;
		};
		static void NewProp_IsRewardDispensingEnabledValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRewardDispensingEnabledValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled_Statics::NewProp_IsRewardDispensingEnabledValue_SetBit(void* Obj)
	{
		((RegionSettings_eventSetIsRewardDispensingEnabled_Parms*)Obj)->IsRewardDispensingEnabledValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled_Statics::NewProp_IsRewardDispensingEnabledValue = { "IsRewardDispensingEnabledValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RegionSettings_eventSetIsRewardDispensingEnabled_Parms), &Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled_Statics::NewProp_IsRewardDispensingEnabledValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled_Statics::NewProp_IsRewardDispensingEnabledValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegionSettings, nullptr, "SetIsRewardDispensingEnabled", nullptr, nullptr, sizeof(RegionSettings_eventSetIsRewardDispensingEnabled_Parms), Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URegionSettings_SetRegionId_Statics
	{
		struct RegionSettings_eventSetRegionId_Parms
		{
			FString RegionIdValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegionIdValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URegionSettings_SetRegionId_Statics::NewProp_RegionIdValue = { "RegionIdValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RegionSettings_eventSetRegionId_Parms, RegionIdValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionSettings_SetRegionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionSettings_SetRegionId_Statics::NewProp_RegionIdValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegionSettings_SetRegionId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionSettings_SetRegionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegionSettings, nullptr, "SetRegionId", nullptr, nullptr, sizeof(RegionSettings_eventSetRegionId_Parms), Z_Construct_UFunction_URegionSettings_SetRegionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_SetRegionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URegionSettings_SetRegionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_SetRegionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URegionSettings_SetRegionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URegionSettings_SetRegionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URegionSettings_SetRewardDevice_Statics
	{
		struct RegionSettings_eventSetRewardDevice_Parms
		{
			UDevice* RewardDeviceValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardDeviceValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URegionSettings_SetRewardDevice_Statics::NewProp_RewardDeviceValue = { "RewardDeviceValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RegionSettings_eventSetRewardDevice_Parms, RewardDeviceValue), Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionSettings_SetRewardDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionSettings_SetRewardDevice_Statics::NewProp_RewardDeviceValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegionSettings_SetRewardDevice_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionSettings_SetRewardDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegionSettings, nullptr, "SetRewardDevice", nullptr, nullptr, sizeof(RegionSettings_eventSetRewardDevice_Parms), Z_Construct_UFunction_URegionSettings_SetRewardDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_SetRewardDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URegionSettings_SetRewardDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_SetRewardDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URegionSettings_SetRewardDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URegionSettings_SetRewardDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URegionSettings_SetRewardDeviceDispensingDurationSec_Statics
	{
		struct RegionSettings_eventSetRewardDeviceDispensingDurationSec_Parms
		{
			float RewardDeviceDispensingDurationSecValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RewardDeviceDispensingDurationSecValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URegionSettings_SetRewardDeviceDispensingDurationSec_Statics::NewProp_RewardDeviceDispensingDurationSecValue = { "RewardDeviceDispensingDurationSecValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RegionSettings_eventSetRewardDeviceDispensingDurationSec_Parms, RewardDeviceDispensingDurationSecValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionSettings_SetRewardDeviceDispensingDurationSec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionSettings_SetRewardDeviceDispensingDurationSec_Statics::NewProp_RewardDeviceDispensingDurationSecValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegionSettings_SetRewardDeviceDispensingDurationSec_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionSettings_SetRewardDeviceDispensingDurationSec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegionSettings, nullptr, "SetRewardDeviceDispensingDurationSec", nullptr, nullptr, sizeof(RegionSettings_eventSetRewardDeviceDispensingDurationSec_Parms), Z_Construct_UFunction_URegionSettings_SetRewardDeviceDispensingDurationSec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_SetRewardDeviceDispensingDurationSec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URegionSettings_SetRewardDeviceDispensingDurationSec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_SetRewardDeviceDispensingDurationSec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URegionSettings_SetRewardDeviceDispensingDurationSec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URegionSettings_SetRewardDeviceDispensingDurationSec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URegionSettings_SetToneGenerationSettings_Statics
	{
		struct RegionSettings_eventSetToneGenerationSettings_Parms
		{
			UToneGenerationSettings* ToneGenerationSettingsValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToneGenerationSettingsValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URegionSettings_SetToneGenerationSettings_Statics::NewProp_ToneGenerationSettingsValue = { "ToneGenerationSettingsValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RegionSettings_eventSetToneGenerationSettings_Parms, ToneGenerationSettingsValue), Z_Construct_UClass_UToneGenerationSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionSettings_SetToneGenerationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionSettings_SetToneGenerationSettings_Statics::NewProp_ToneGenerationSettingsValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegionSettings_SetToneGenerationSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionSettings_SetToneGenerationSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegionSettings, nullptr, "SetToneGenerationSettings", nullptr, nullptr, sizeof(RegionSettings_eventSetToneGenerationSettings_Parms), Z_Construct_UFunction_URegionSettings_SetToneGenerationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_SetToneGenerationSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URegionSettings_SetToneGenerationSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionSettings_SetToneGenerationSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URegionSettings_SetToneGenerationSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URegionSettings_SetToneGenerationSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URegionSettings_NoRegister()
	{
		return URegionSettings::StaticClass();
	}
	struct Z_Construct_UClass_URegionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNosePoke_MetaData[];
#endif
		static void NewProp_IsNosePoke_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNosePoke;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToneGenerationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToneGenerationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardDeviceDispensingDurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RewardDeviceDispensingDurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRewardDispensingEnabled_MetaData[];
#endif
		static void NewProp_IsRewardDispensingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRewardDispensingEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URegionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URegionSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URegionSettings_GetIsNosePoke, "GetIsNosePoke" }, // 2950033413
		{ &Z_Construct_UFunction_URegionSettings_GetIsRewardDispensingEnabled, "GetIsRewardDispensingEnabled" }, // 519173742
		{ &Z_Construct_UFunction_URegionSettings_GetRegionId, "GetRegionId" }, // 3211157651
		{ &Z_Construct_UFunction_URegionSettings_GetRewardDevice, "GetRewardDevice" }, // 3897688002
		{ &Z_Construct_UFunction_URegionSettings_GetRewardDeviceDispensingDurationSec, "GetRewardDeviceDispensingDurationSec" }, // 3691610727
		{ &Z_Construct_UFunction_URegionSettings_GetToneGenerationSettings, "GetToneGenerationSettings" }, // 48828497
		{ &Z_Construct_UFunction_URegionSettings_SetIsNosePoke, "SetIsNosePoke" }, // 1784231816
		{ &Z_Construct_UFunction_URegionSettings_SetIsRewardDispensingEnabled, "SetIsRewardDispensingEnabled" }, // 2954426768
		{ &Z_Construct_UFunction_URegionSettings_SetRegionId, "SetRegionId" }, // 2843274837
		{ &Z_Construct_UFunction_URegionSettings_SetRewardDevice, "SetRewardDevice" }, // 773998161
		{ &Z_Construct_UFunction_URegionSettings_SetRewardDeviceDispensingDurationSec, "SetRewardDeviceDispensingDurationSec" }, // 1964670971
		{ &Z_Construct_UFunction_URegionSettings_SetToneGenerationSettings, "SetToneGenerationSettings" }, // 3228960724
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URegionSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Settings/RegionSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URegionSettings_Statics::NewProp_IsNosePoke_MetaData[] = {
		{ "BlueprintGetter", "GetIsNosePoke" },
		{ "BlueprintSetter", "SetIsNosePoke" },
		{ "Category", "RegionSettings" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	void Z_Construct_UClass_URegionSettings_Statics::NewProp_IsNosePoke_SetBit(void* Obj)
	{
		((URegionSettings*)Obj)->IsNosePoke = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URegionSettings_Statics::NewProp_IsNosePoke = { "IsNosePoke", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URegionSettings), &Z_Construct_UClass_URegionSettings_Statics::NewProp_IsNosePoke_SetBit, METADATA_PARAMS(Z_Construct_UClass_URegionSettings_Statics::NewProp_IsNosePoke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URegionSettings_Statics::NewProp_IsNosePoke_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URegionSettings_Statics::NewProp_ToneGenerationSettings_MetaData[] = {
		{ "BlueprintGetter", "GetToneGenerationSettings" },
		{ "BlueprintSetter", "SetToneGenerationSettings" },
		{ "Category", "RegionSettings" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URegionSettings_Statics::NewProp_ToneGenerationSettings = { "ToneGenerationSettings", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URegionSettings, ToneGenerationSettings), Z_Construct_UClass_UToneGenerationSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URegionSettings_Statics::NewProp_ToneGenerationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URegionSettings_Statics::NewProp_ToneGenerationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URegionSettings_Statics::NewProp_RewardDeviceDispensingDurationSec_MetaData[] = {
		{ "BlueprintGetter", "GetRewardDeviceDispensingDurationSec" },
		{ "BlueprintSetter", "SetRewardDeviceDispensingDurationSec" },
		{ "Category", "RegionSettings" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URegionSettings_Statics::NewProp_RewardDeviceDispensingDurationSec = { "RewardDeviceDispensingDurationSec", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URegionSettings, RewardDeviceDispensingDurationSec), METADATA_PARAMS(Z_Construct_UClass_URegionSettings_Statics::NewProp_RewardDeviceDispensingDurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URegionSettings_Statics::NewProp_RewardDeviceDispensingDurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URegionSettings_Statics::NewProp_RewardDevice_MetaData[] = {
		{ "BlueprintGetter", "GetRewardDevice" },
		{ "BlueprintSetter", "SetRewardDevice" },
		{ "Category", "RegionSettings" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URegionSettings_Statics::NewProp_RewardDevice = { "RewardDevice", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URegionSettings, RewardDevice), Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URegionSettings_Statics::NewProp_RewardDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URegionSettings_Statics::NewProp_RewardDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URegionSettings_Statics::NewProp_IsRewardDispensingEnabled_MetaData[] = {
		{ "BlueprintGetter", "GetIsRewardDispensingEnabled" },
		{ "BlueprintSetter", "SetIsRewardDispensingEnabled" },
		{ "Category", "RegionSettings" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	void Z_Construct_UClass_URegionSettings_Statics::NewProp_IsRewardDispensingEnabled_SetBit(void* Obj)
	{
		((URegionSettings*)Obj)->IsRewardDispensingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URegionSettings_Statics::NewProp_IsRewardDispensingEnabled = { "IsRewardDispensingEnabled", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URegionSettings), &Z_Construct_UClass_URegionSettings_Statics::NewProp_IsRewardDispensingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_URegionSettings_Statics::NewProp_IsRewardDispensingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URegionSettings_Statics::NewProp_IsRewardDispensingEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URegionSettings_Statics::NewProp_RegionId_MetaData[] = {
		{ "BlueprintGetter", "GetRegionId" },
		{ "BlueprintSetter", "SetRegionId" },
		{ "Category", "RegionSettings" },
		{ "ModuleRelativePath", "Private/Settings/RegionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URegionSettings_Statics::NewProp_RegionId = { "RegionId", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URegionSettings, RegionId), METADATA_PARAMS(Z_Construct_UClass_URegionSettings_Statics::NewProp_RegionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URegionSettings_Statics::NewProp_RegionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URegionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionSettings_Statics::NewProp_IsNosePoke,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionSettings_Statics::NewProp_ToneGenerationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionSettings_Statics::NewProp_RewardDeviceDispensingDurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionSettings_Statics::NewProp_RewardDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionSettings_Statics::NewProp_IsRewardDispensingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegionSettings_Statics::NewProp_RegionId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URegionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URegionSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URegionSettings_Statics::ClassParams = {
		&URegionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URegionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URegionSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URegionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URegionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URegionSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URegionSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URegionSettings, 3704261384);
	template<> RODENTVR_API UClass* StaticClass<URegionSettings>()
	{
		return URegionSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URegionSettings(Z_Construct_UClass_URegionSettings, &URegionSettings::StaticClass, TEXT("/Script/RodentVR"), TEXT("URegionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URegionSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
