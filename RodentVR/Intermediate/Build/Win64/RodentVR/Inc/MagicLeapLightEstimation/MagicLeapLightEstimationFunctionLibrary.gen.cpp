// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapLightEstimation/Public/MagicLeapLightEstimationFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapLightEstimationFunctionLibrary() {}
// Cross Module References
	MAGICLEAPLIGHTESTIMATION_API UClass* Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary_NoRegister();
	MAGICLEAPLIGHTESTIMATION_API UClass* Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MagicLeapLightEstimation();
	MAGICLEAPLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState();
	MAGICLEAPLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState();
// End Cross Module References
	DEFINE_FUNCTION(UMagicLeapLightEstimationFunctionLibrary::execGetColorTemperatureState)
	{
		P_GET_STRUCT_REF(FMagicLeapLightEstimationColorTemperatureState,Z_Param_Out_ColorTemperatureState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapLightEstimationFunctionLibrary::GetColorTemperatureState(Z_Param_Out_ColorTemperatureState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapLightEstimationFunctionLibrary::execGetAmbientGlobalState)
	{
		P_GET_STRUCT_REF(FMagicLeapLightEstimationAmbientGlobalState,Z_Param_Out_GlobalAmbientState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapLightEstimationFunctionLibrary::GetAmbientGlobalState(Z_Param_Out_GlobalAmbientState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapLightEstimationFunctionLibrary::execIsTrackerValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapLightEstimationFunctionLibrary::IsTrackerValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapLightEstimationFunctionLibrary::execDestroyTracker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UMagicLeapLightEstimationFunctionLibrary::DestroyTracker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapLightEstimationFunctionLibrary::execCreateTracker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapLightEstimationFunctionLibrary::CreateTracker();
		P_NATIVE_END;
	}
	void UMagicLeapLightEstimationFunctionLibrary::StaticRegisterNativesUMagicLeapLightEstimationFunctionLibrary()
	{
		UClass* Class = UMagicLeapLightEstimationFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTracker", &UMagicLeapLightEstimationFunctionLibrary::execCreateTracker },
			{ "DestroyTracker", &UMagicLeapLightEstimationFunctionLibrary::execDestroyTracker },
			{ "GetAmbientGlobalState", &UMagicLeapLightEstimationFunctionLibrary::execGetAmbientGlobalState },
			{ "GetColorTemperatureState", &UMagicLeapLightEstimationFunctionLibrary::execGetColorTemperatureState },
			{ "IsTrackerValid", &UMagicLeapLightEstimationFunctionLibrary::execIsTrackerValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Statics
	{
		struct MagicLeapLightEstimationFunctionLibrary_eventCreateTracker_Parms
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
	void Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapLightEstimationFunctionLibrary_eventCreateTracker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapLightEstimationFunctionLibrary_eventCreateTracker_Parms), &Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightEstimation Function Library | MagicLeap" },
		{ "Comment", "/**\n\x09\x09""Create a light estimation tracker.\n\x09\x09@return true if tracker was successfully created, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapLightEstimationFunctionLibrary.h" },
		{ "ToolTip", "Create a light estimation tracker.\n@return true if tracker was successfully created, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary, nullptr, "CreateTracker", nullptr, nullptr, sizeof(MagicLeapLightEstimationFunctionLibrary_eventCreateTracker_Parms), Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_DestroyTracker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_DestroyTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightEstimation Function Library | MagicLeap" },
		{ "Comment", "/** Destroy a light estimation tracker. */" },
		{ "ModuleRelativePath", "Public/MagicLeapLightEstimationFunctionLibrary.h" },
		{ "ToolTip", "Destroy a light estimation tracker." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_DestroyTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary, nullptr, "DestroyTracker", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_DestroyTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_DestroyTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_DestroyTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_DestroyTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics
	{
		struct MagicLeapLightEstimationFunctionLibrary_eventGetAmbientGlobalState_Parms
		{
			FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalAmbientState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapLightEstimationFunctionLibrary_eventGetAmbientGlobalState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapLightEstimationFunctionLibrary_eventGetAmbientGlobalState_Parms), &Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics::NewProp_GlobalAmbientState = { "GlobalAmbientState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapLightEstimationFunctionLibrary_eventGetAmbientGlobalState_Parms, GlobalAmbientState), Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics::NewProp_GlobalAmbientState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightEstimation Function Library | MagicLeap" },
		{ "Comment", "/**\n\x09\x09Gets information about the ambient light sensor global state.\n\x09\x09@note Capturing images or video will stop the lighting information update, causing the retrieved data to be stale (old timestamps).\n\x09\x09@param GlobalAmbientState Output param containing the information about the global lighting state (ambient intensity). Valid only if return value of function is true.\n\x09\x09@return true if the global ambient state was succesfully retrieved.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapLightEstimationFunctionLibrary.h" },
		{ "ToolTip", "Gets information about the ambient light sensor global state.\n@note Capturing images or video will stop the lighting information update, causing the retrieved data to be stale (old timestamps).\n@param GlobalAmbientState Output param containing the information about the global lighting state (ambient intensity). Valid only if return value of function is true.\n@return true if the global ambient state was succesfully retrieved." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary, nullptr, "GetAmbientGlobalState", nullptr, nullptr, sizeof(MagicLeapLightEstimationFunctionLibrary_eventGetAmbientGlobalState_Parms), Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics
	{
		struct MagicLeapLightEstimationFunctionLibrary_eventGetColorTemperatureState_Parms
		{
			FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorTemperatureState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapLightEstimationFunctionLibrary_eventGetColorTemperatureState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapLightEstimationFunctionLibrary_eventGetColorTemperatureState_Parms), &Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics::NewProp_ColorTemperatureState = { "ColorTemperatureState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapLightEstimationFunctionLibrary_eventGetColorTemperatureState_Parms, ColorTemperatureState), Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics::NewProp_ColorTemperatureState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightEstimation Function Library | MagicLeap" },
		{ "Comment", "/**\n\x09\x09Gets information about the color temperature state.\n\x09\x09@note Capturing images or video will stop the lighting information update, causing the retrieved data to be stale (old timestamps).\n\x09\x09@param ColorTemperatureState Output param containing the information about the color temperature. Valid only if return value of function is true.\n\x09\x09@return true if the color temperature state was succesfully retrieved.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapLightEstimationFunctionLibrary.h" },
		{ "ToolTip", "Gets information about the color temperature state.\n@note Capturing images or video will stop the lighting information update, causing the retrieved data to be stale (old timestamps).\n@param ColorTemperatureState Output param containing the information about the color temperature. Valid only if return value of function is true.\n@return true if the color temperature state was succesfully retrieved." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary, nullptr, "GetColorTemperatureState", nullptr, nullptr, sizeof(MagicLeapLightEstimationFunctionLibrary_eventGetColorTemperatureState_Parms), Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Statics
	{
		struct MagicLeapLightEstimationFunctionLibrary_eventIsTrackerValid_Parms
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
	void Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapLightEstimationFunctionLibrary_eventIsTrackerValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapLightEstimationFunctionLibrary_eventIsTrackerValid_Parms), &Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightEstimation Function Library | MagicLeap" },
		{ "Comment", "/**\n\x09\x09""Check if a light estimation tracker has already been created.\n\x09\x09@return true if tracker already exists and is valid, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapLightEstimationFunctionLibrary.h" },
		{ "ToolTip", "Check if a light estimation tracker has already been created.\n@return true if tracker already exists and is valid, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary, nullptr, "IsTrackerValid", nullptr, nullptr, sizeof(MagicLeapLightEstimationFunctionLibrary_eventIsTrackerValid_Parms), Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary_NoRegister()
	{
		return UMagicLeapLightEstimationFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapLightEstimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_CreateTracker, "CreateTracker" }, // 2636567710
		{ &Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_DestroyTracker, "DestroyTracker" }, // 938957948
		{ &Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState, "GetAmbientGlobalState" }, // 1611320654
		{ &Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState, "GetColorTemperatureState" }, // 1195735061
		{ &Z_Construct_UFunction_UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid, "IsTrackerValid" }, // 4146705195
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MagicLeap" },
		{ "IncludePath", "MagicLeapLightEstimationFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MagicLeapLightEstimationFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapLightEstimationFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary_Statics::ClassParams = {
		&UMagicLeapLightEstimationFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapLightEstimationFunctionLibrary, 1699492149);
	template<> MAGICLEAPLIGHTESTIMATION_API UClass* StaticClass<UMagicLeapLightEstimationFunctionLibrary>()
	{
		return UMagicLeapLightEstimationFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapLightEstimationFunctionLibrary(Z_Construct_UClass_UMagicLeapLightEstimationFunctionLibrary, &UMagicLeapLightEstimationFunctionLibrary::StaticClass, TEXT("/Script/MagicLeapLightEstimation"), TEXT("UMagicLeapLightEstimationFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapLightEstimationFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
