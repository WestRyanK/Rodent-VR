// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/ToneGenerationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToneGenerationSettings() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UToneGenerationSettings_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UToneGenerationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	DEFINE_FUNCTION(UToneGenerationSettings::execSetToneVolumePercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ToneVolumePercentValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToneVolumePercent(Z_Param_ToneVolumePercentValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToneGenerationSettings::execGetToneVolumePercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetToneVolumePercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToneGenerationSettings::execSetTonePitchHz)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TonePitchHzValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTonePitchHz(Z_Param_TonePitchHzValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToneGenerationSettings::execGetTonePitchHz)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTonePitchHz();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToneGenerationSettings::execSetToneDurationSec)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ToneDurationSecValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToneDurationSec(Z_Param_ToneDurationSecValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToneGenerationSettings::execGetToneDurationSec)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetToneDurationSec();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToneGenerationSettings::execSetIsToneGenerationEnabled)
	{
		P_GET_UBOOL(Z_Param_IsToneGenerationEnabledValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsToneGenerationEnabled(Z_Param_IsToneGenerationEnabledValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToneGenerationSettings::execGetIsToneGenerationEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsToneGenerationEnabled();
		P_NATIVE_END;
	}
	void UToneGenerationSettings::StaticRegisterNativesUToneGenerationSettings()
	{
		UClass* Class = UToneGenerationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsToneGenerationEnabled", &UToneGenerationSettings::execGetIsToneGenerationEnabled },
			{ "GetToneDurationSec", &UToneGenerationSettings::execGetToneDurationSec },
			{ "GetTonePitchHz", &UToneGenerationSettings::execGetTonePitchHz },
			{ "GetToneVolumePercent", &UToneGenerationSettings::execGetToneVolumePercent },
			{ "SetIsToneGenerationEnabled", &UToneGenerationSettings::execSetIsToneGenerationEnabled },
			{ "SetToneDurationSec", &UToneGenerationSettings::execSetToneDurationSec },
			{ "SetTonePitchHz", &UToneGenerationSettings::execSetTonePitchHz },
			{ "SetToneVolumePercent", &UToneGenerationSettings::execSetToneVolumePercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled_Statics
	{
		struct ToneGenerationSettings_eventGetIsToneGenerationEnabled_Parms
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
	void Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ToneGenerationSettings_eventGetIsToneGenerationEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ToneGenerationSettings_eventGetIsToneGenerationEnabled_Parms), &Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/ToneGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToneGenerationSettings, nullptr, "GetIsToneGenerationEnabled", nullptr, nullptr, sizeof(ToneGenerationSettings_eventGetIsToneGenerationEnabled_Parms), Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToneGenerationSettings_GetToneDurationSec_Statics
	{
		struct ToneGenerationSettings_eventGetToneDurationSec_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UToneGenerationSettings_GetToneDurationSec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToneGenerationSettings_eventGetToneDurationSec_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToneGenerationSettings_GetToneDurationSec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneGenerationSettings_GetToneDurationSec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToneGenerationSettings_GetToneDurationSec_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/ToneGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToneGenerationSettings_GetToneDurationSec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToneGenerationSettings, nullptr, "GetToneDurationSec", nullptr, nullptr, sizeof(ToneGenerationSettings_eventGetToneDurationSec_Parms), Z_Construct_UFunction_UToneGenerationSettings_GetToneDurationSec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_GetToneDurationSec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToneGenerationSettings_GetToneDurationSec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_GetToneDurationSec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToneGenerationSettings_GetToneDurationSec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToneGenerationSettings_GetToneDurationSec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToneGenerationSettings_GetTonePitchHz_Statics
	{
		struct ToneGenerationSettings_eventGetTonePitchHz_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UToneGenerationSettings_GetTonePitchHz_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToneGenerationSettings_eventGetTonePitchHz_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToneGenerationSettings_GetTonePitchHz_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneGenerationSettings_GetTonePitchHz_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToneGenerationSettings_GetTonePitchHz_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/ToneGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToneGenerationSettings_GetTonePitchHz_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToneGenerationSettings, nullptr, "GetTonePitchHz", nullptr, nullptr, sizeof(ToneGenerationSettings_eventGetTonePitchHz_Parms), Z_Construct_UFunction_UToneGenerationSettings_GetTonePitchHz_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_GetTonePitchHz_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToneGenerationSettings_GetTonePitchHz_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_GetTonePitchHz_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToneGenerationSettings_GetTonePitchHz()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToneGenerationSettings_GetTonePitchHz_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToneGenerationSettings_GetToneVolumePercent_Statics
	{
		struct ToneGenerationSettings_eventGetToneVolumePercent_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UToneGenerationSettings_GetToneVolumePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToneGenerationSettings_eventGetToneVolumePercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToneGenerationSettings_GetToneVolumePercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneGenerationSettings_GetToneVolumePercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToneGenerationSettings_GetToneVolumePercent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/ToneGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToneGenerationSettings_GetToneVolumePercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToneGenerationSettings, nullptr, "GetToneVolumePercent", nullptr, nullptr, sizeof(ToneGenerationSettings_eventGetToneVolumePercent_Parms), Z_Construct_UFunction_UToneGenerationSettings_GetToneVolumePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_GetToneVolumePercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToneGenerationSettings_GetToneVolumePercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_GetToneVolumePercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToneGenerationSettings_GetToneVolumePercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToneGenerationSettings_GetToneVolumePercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled_Statics
	{
		struct ToneGenerationSettings_eventSetIsToneGenerationEnabled_Parms
		{
			bool IsToneGenerationEnabledValue;
		};
		static void NewProp_IsToneGenerationEnabledValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsToneGenerationEnabledValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled_Statics::NewProp_IsToneGenerationEnabledValue_SetBit(void* Obj)
	{
		((ToneGenerationSettings_eventSetIsToneGenerationEnabled_Parms*)Obj)->IsToneGenerationEnabledValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled_Statics::NewProp_IsToneGenerationEnabledValue = { "IsToneGenerationEnabledValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ToneGenerationSettings_eventSetIsToneGenerationEnabled_Parms), &Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled_Statics::NewProp_IsToneGenerationEnabledValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled_Statics::NewProp_IsToneGenerationEnabledValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/ToneGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToneGenerationSettings, nullptr, "SetIsToneGenerationEnabled", nullptr, nullptr, sizeof(ToneGenerationSettings_eventSetIsToneGenerationEnabled_Parms), Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToneGenerationSettings_SetToneDurationSec_Statics
	{
		struct ToneGenerationSettings_eventSetToneDurationSec_Parms
		{
			float ToneDurationSecValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToneDurationSecValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UToneGenerationSettings_SetToneDurationSec_Statics::NewProp_ToneDurationSecValue = { "ToneDurationSecValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToneGenerationSettings_eventSetToneDurationSec_Parms, ToneDurationSecValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToneGenerationSettings_SetToneDurationSec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneGenerationSettings_SetToneDurationSec_Statics::NewProp_ToneDurationSecValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToneGenerationSettings_SetToneDurationSec_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/ToneGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToneGenerationSettings_SetToneDurationSec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToneGenerationSettings, nullptr, "SetToneDurationSec", nullptr, nullptr, sizeof(ToneGenerationSettings_eventSetToneDurationSec_Parms), Z_Construct_UFunction_UToneGenerationSettings_SetToneDurationSec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_SetToneDurationSec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToneGenerationSettings_SetToneDurationSec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_SetToneDurationSec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToneGenerationSettings_SetToneDurationSec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToneGenerationSettings_SetToneDurationSec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToneGenerationSettings_SetTonePitchHz_Statics
	{
		struct ToneGenerationSettings_eventSetTonePitchHz_Parms
		{
			float TonePitchHzValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TonePitchHzValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UToneGenerationSettings_SetTonePitchHz_Statics::NewProp_TonePitchHzValue = { "TonePitchHzValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToneGenerationSettings_eventSetTonePitchHz_Parms, TonePitchHzValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToneGenerationSettings_SetTonePitchHz_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneGenerationSettings_SetTonePitchHz_Statics::NewProp_TonePitchHzValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToneGenerationSettings_SetTonePitchHz_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/ToneGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToneGenerationSettings_SetTonePitchHz_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToneGenerationSettings, nullptr, "SetTonePitchHz", nullptr, nullptr, sizeof(ToneGenerationSettings_eventSetTonePitchHz_Parms), Z_Construct_UFunction_UToneGenerationSettings_SetTonePitchHz_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_SetTonePitchHz_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToneGenerationSettings_SetTonePitchHz_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_SetTonePitchHz_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToneGenerationSettings_SetTonePitchHz()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToneGenerationSettings_SetTonePitchHz_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToneGenerationSettings_SetToneVolumePercent_Statics
	{
		struct ToneGenerationSettings_eventSetToneVolumePercent_Parms
		{
			float ToneVolumePercentValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToneVolumePercentValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UToneGenerationSettings_SetToneVolumePercent_Statics::NewProp_ToneVolumePercentValue = { "ToneVolumePercentValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToneGenerationSettings_eventSetToneVolumePercent_Parms, ToneVolumePercentValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToneGenerationSettings_SetToneVolumePercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneGenerationSettings_SetToneVolumePercent_Statics::NewProp_ToneVolumePercentValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToneGenerationSettings_SetToneVolumePercent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/ToneGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToneGenerationSettings_SetToneVolumePercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToneGenerationSettings, nullptr, "SetToneVolumePercent", nullptr, nullptr, sizeof(ToneGenerationSettings_eventSetToneVolumePercent_Parms), Z_Construct_UFunction_UToneGenerationSettings_SetToneVolumePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_SetToneVolumePercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToneGenerationSettings_SetToneVolumePercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerationSettings_SetToneVolumePercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToneGenerationSettings_SetToneVolumePercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToneGenerationSettings_SetToneVolumePercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UToneGenerationSettings_NoRegister()
	{
		return UToneGenerationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UToneGenerationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToneVolumePercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToneVolumePercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TonePitchHz_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TonePitchHz;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToneDurationSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToneDurationSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsToneGenerationEnabled_MetaData[];
#endif
		static void NewProp_IsToneGenerationEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsToneGenerationEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToneGenerationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToneGenerationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToneGenerationSettings_GetIsToneGenerationEnabled, "GetIsToneGenerationEnabled" }, // 2587456896
		{ &Z_Construct_UFunction_UToneGenerationSettings_GetToneDurationSec, "GetToneDurationSec" }, // 1810833715
		{ &Z_Construct_UFunction_UToneGenerationSettings_GetTonePitchHz, "GetTonePitchHz" }, // 2926018490
		{ &Z_Construct_UFunction_UToneGenerationSettings_GetToneVolumePercent, "GetToneVolumePercent" }, // 215729551
		{ &Z_Construct_UFunction_UToneGenerationSettings_SetIsToneGenerationEnabled, "SetIsToneGenerationEnabled" }, // 3436593116
		{ &Z_Construct_UFunction_UToneGenerationSettings_SetToneDurationSec, "SetToneDurationSec" }, // 1790448135
		{ &Z_Construct_UFunction_UToneGenerationSettings_SetTonePitchHz, "SetTonePitchHz" }, // 3208357674
		{ &Z_Construct_UFunction_UToneGenerationSettings_SetToneVolumePercent, "SetToneVolumePercent" }, // 1669580539
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToneGenerationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Settings/ToneGenerationSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/ToneGenerationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_ToneVolumePercent_MetaData[] = {
		{ "BlueprintGetter", "GetToneVolumePercent" },
		{ "BlueprintSetter", "SetToneVolumePercent" },
		{ "Category", "ToneGenerationSettings" },
		{ "ModuleRelativePath", "Private/Settings/ToneGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_ToneVolumePercent = { "ToneVolumePercent", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UToneGenerationSettings, ToneVolumePercent), METADATA_PARAMS(Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_ToneVolumePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_ToneVolumePercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_TonePitchHz_MetaData[] = {
		{ "BlueprintGetter", "GetTonePitchHz" },
		{ "BlueprintSetter", "SetTonePitchHz" },
		{ "Category", "ToneGenerationSettings" },
		{ "ModuleRelativePath", "Private/Settings/ToneGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_TonePitchHz = { "TonePitchHz", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UToneGenerationSettings, TonePitchHz), METADATA_PARAMS(Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_TonePitchHz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_TonePitchHz_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_ToneDurationSec_MetaData[] = {
		{ "BlueprintGetter", "GetToneDurationSec" },
		{ "BlueprintSetter", "SetToneDurationSec" },
		{ "Category", "ToneGenerationSettings" },
		{ "ModuleRelativePath", "Private/Settings/ToneGenerationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_ToneDurationSec = { "ToneDurationSec", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UToneGenerationSettings, ToneDurationSec), METADATA_PARAMS(Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_ToneDurationSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_ToneDurationSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_IsToneGenerationEnabled_MetaData[] = {
		{ "BlueprintGetter", "GetIsToneGenerationEnabled" },
		{ "BlueprintSetter", "SetIsToneGenerationEnabled" },
		{ "Category", "ToneGenerationSettings" },
		{ "ModuleRelativePath", "Private/Settings/ToneGenerationSettings.h" },
	};
#endif
	void Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_IsToneGenerationEnabled_SetBit(void* Obj)
	{
		((UToneGenerationSettings*)Obj)->IsToneGenerationEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_IsToneGenerationEnabled = { "IsToneGenerationEnabled", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UToneGenerationSettings), &Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_IsToneGenerationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_IsToneGenerationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_IsToneGenerationEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToneGenerationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_ToneVolumePercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_TonePitchHz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_ToneDurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToneGenerationSettings_Statics::NewProp_IsToneGenerationEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToneGenerationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToneGenerationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToneGenerationSettings_Statics::ClassParams = {
		&UToneGenerationSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UToneGenerationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UToneGenerationSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UToneGenerationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToneGenerationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToneGenerationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToneGenerationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToneGenerationSettings, 173512326);
	template<> RODENTVR_API UClass* StaticClass<UToneGenerationSettings>()
	{
		return UToneGenerationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToneGenerationSettings(Z_Construct_UClass_UToneGenerationSettings, &UToneGenerationSettings::StaticClass, TEXT("/Script/RodentVR"), TEXT("UToneGenerationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToneGenerationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
