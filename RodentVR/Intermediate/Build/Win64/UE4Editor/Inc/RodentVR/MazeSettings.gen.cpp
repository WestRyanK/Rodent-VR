// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/MazeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeSettings() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UMazeSettings_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_AddMazeObject();
	RODENTVR_API UClass* Z_Construct_UClass_AMazeObject_NoRegister();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_AddStopCondition();
	RODENTVR_API UClass* Z_Construct_UClass_UStopCondition_NoRegister();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_AddTexture();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_ClearMazeObjects();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_ClearStopConditions();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_ClearTextures();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_GetMazeName();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_GetPlayerStart();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_RemoveMazeObject();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_RemoveStopCondition();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_RemoveTexture();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_SetMazeName();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettings_SetPlayerStart();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UMazeSettings::StaticRegisterNativesUMazeSettings()
	{
		UClass* Class = UMazeSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMazeObject", &UMazeSettings::execAddMazeObject },
			{ "AddStopCondition", &UMazeSettings::execAddStopCondition },
			{ "AddTexture", &UMazeSettings::execAddTexture },
			{ "ClearMazeObjects", &UMazeSettings::execClearMazeObjects },
			{ "ClearStopConditions", &UMazeSettings::execClearStopConditions },
			{ "ClearTextures", &UMazeSettings::execClearTextures },
			{ "GetAreRegionsVisible", &UMazeSettings::execGetAreRegionsVisible },
			{ "GetBehaviorRecordingFileName", &UMazeSettings::execGetBehaviorRecordingFileName },
			{ "GetMazeName", &UMazeSettings::execGetMazeName },
			{ "GetMazeSettingsFileName", &UMazeSettings::execGetMazeSettingsFileName },
			{ "GetPlayerStart", &UMazeSettings::execGetPlayerStart },
			{ "RemoveMazeObject", &UMazeSettings::execRemoveMazeObject },
			{ "RemoveStopCondition", &UMazeSettings::execRemoveStopCondition },
			{ "RemoveTexture", &UMazeSettings::execRemoveTexture },
			{ "SetAreRegionsVisible", &UMazeSettings::execSetAreRegionsVisible },
			{ "SetBehaviorRecordingFileName", &UMazeSettings::execSetBehaviorRecordingFileName },
			{ "SetMazeName", &UMazeSettings::execSetMazeName },
			{ "SetMazeSettingsFileName", &UMazeSettings::execSetMazeSettingsFileName },
			{ "SetPlayerStart", &UMazeSettings::execSetPlayerStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics
	{
		struct MazeSettings_eventAddMazeObject_Parms
		{
			AMazeObject* MazeObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::NewProp_MazeObject = { "MazeObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventAddMazeObject_Parms, MazeObject), Z_Construct_UClass_AMazeObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::NewProp_MazeObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "AddMazeObject", nullptr, nullptr, sizeof(MazeSettings_eventAddMazeObject_Parms), Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_AddMazeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics
	{
		struct MazeSettings_eventAddStopCondition_Parms
		{
			UStopCondition* StopCondition;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopCondition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::NewProp_StopCondition = { "StopCondition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventAddStopCondition_Parms, StopCondition), Z_Construct_UClass_UStopCondition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::NewProp_StopCondition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "AddStopCondition", nullptr, nullptr, sizeof(MazeSettings_eventAddStopCondition_Parms), Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_AddStopCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_AddTexture_Statics
	{
		struct MazeSettings_eventAddTexture_Parms
		{
			FString SlotName;
			FString TextureFileNameValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextureFileNameValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::NewProp_TextureFileNameValue = { "TextureFileNameValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventAddTexture_Parms, TextureFileNameValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventAddTexture_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::NewProp_TextureFileNameValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::NewProp_SlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "AddTexture", nullptr, nullptr, sizeof(MazeSettings_eventAddTexture_Parms), Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_AddTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_ClearMazeObjects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_ClearMazeObjects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_ClearMazeObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "ClearMazeObjects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_ClearMazeObjects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_ClearMazeObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_ClearMazeObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_ClearMazeObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_ClearStopConditions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_ClearStopConditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_ClearStopConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "ClearStopConditions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_ClearStopConditions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_ClearStopConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_ClearStopConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_ClearStopConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_ClearTextures_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_ClearTextures_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_ClearTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "ClearTextures", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_ClearTextures_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_ClearTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_ClearTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_ClearTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics
	{
		struct MazeSettings_eventGetAreRegionsVisible_Parms
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
	void Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeSettings_eventGetAreRegionsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeSettings_eventGetAreRegionsVisible_Parms), &Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "GetAreRegionsVisible", nullptr, nullptr, sizeof(MazeSettings_eventGetAreRegionsVisible_Parms), Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics
	{
		struct MazeSettings_eventGetBehaviorRecordingFileName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventGetBehaviorRecordingFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "GetBehaviorRecordingFileName", nullptr, nullptr, sizeof(MazeSettings_eventGetBehaviorRecordingFileName_Parms), Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics
	{
		struct MazeSettings_eventGetMazeName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventGetMazeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "GetMazeName", nullptr, nullptr, sizeof(MazeSettings_eventGetMazeName_Parms), Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_GetMazeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics
	{
		struct MazeSettings_eventGetMazeSettingsFileName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventGetMazeSettingsFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "GetMazeSettingsFileName", nullptr, nullptr, sizeof(MazeSettings_eventGetMazeSettingsFileName_Parms), Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics
	{
		struct MazeSettings_eventGetPlayerStart_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventGetPlayerStart_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "GetPlayerStart", nullptr, nullptr, sizeof(MazeSettings_eventGetPlayerStart_Parms), Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_GetPlayerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics
	{
		struct MazeSettings_eventRemoveMazeObject_Parms
		{
			int32 position;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventRemoveMazeObject_Parms, position), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "RemoveMazeObject", nullptr, nullptr, sizeof(MazeSettings_eventRemoveMazeObject_Parms), Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_RemoveMazeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics
	{
		struct MazeSettings_eventRemoveStopCondition_Parms
		{
			int32 position;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventRemoveStopCondition_Parms, position), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "RemoveStopCondition", nullptr, nullptr, sizeof(MazeSettings_eventRemoveStopCondition_Parms), Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_RemoveStopCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics
	{
		struct MazeSettings_eventRemoveTexture_Parms
		{
			FString SlotName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventRemoveTexture_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::NewProp_SlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "RemoveTexture", nullptr, nullptr, sizeof(MazeSettings_eventRemoveTexture_Parms), Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_RemoveTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics
	{
		struct MazeSettings_eventSetAreRegionsVisible_Parms
		{
			bool AreRegionsVisibleValue;
		};
		static void NewProp_AreRegionsVisibleValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AreRegionsVisibleValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::NewProp_AreRegionsVisibleValue_SetBit(void* Obj)
	{
		((MazeSettings_eventSetAreRegionsVisible_Parms*)Obj)->AreRegionsVisibleValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::NewProp_AreRegionsVisibleValue = { "AreRegionsVisibleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeSettings_eventSetAreRegionsVisible_Parms), &Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::NewProp_AreRegionsVisibleValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::NewProp_AreRegionsVisibleValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "SetAreRegionsVisible", nullptr, nullptr, sizeof(MazeSettings_eventSetAreRegionsVisible_Parms), Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics
	{
		struct MazeSettings_eventSetBehaviorRecordingFileName_Parms
		{
			FText BehaviorRecordingFileNameValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_BehaviorRecordingFileNameValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::NewProp_BehaviorRecordingFileNameValue = { "BehaviorRecordingFileNameValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventSetBehaviorRecordingFileName_Parms, BehaviorRecordingFileNameValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::NewProp_BehaviorRecordingFileNameValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "SetBehaviorRecordingFileName", nullptr, nullptr, sizeof(MazeSettings_eventSetBehaviorRecordingFileName_Parms), Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics
	{
		struct MazeSettings_eventSetMazeName_Parms
		{
			FText MazeNameValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MazeNameValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::NewProp_MazeNameValue = { "MazeNameValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventSetMazeName_Parms, MazeNameValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::NewProp_MazeNameValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "SetMazeName", nullptr, nullptr, sizeof(MazeSettings_eventSetMazeName_Parms), Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_SetMazeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics
	{
		struct MazeSettings_eventSetMazeSettingsFileName_Parms
		{
			FText MazeSettingsFileNameValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MazeSettingsFileNameValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::NewProp_MazeSettingsFileNameValue = { "MazeSettingsFileNameValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventSetMazeSettingsFileName_Parms, MazeSettingsFileNameValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::NewProp_MazeSettingsFileNameValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "SetMazeSettingsFileName", nullptr, nullptr, sizeof(MazeSettings_eventSetMazeSettingsFileName_Parms), Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics
	{
		struct MazeSettings_eventSetPlayerStart_Parms
		{
			FTransform PlayerStartValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerStartValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::NewProp_PlayerStartValue = { "PlayerStartValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventSetPlayerStart_Parms, PlayerStartValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::NewProp_PlayerStartValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "SetPlayerStart", nullptr, nullptr, sizeof(MazeSettings_eventSetPlayerStart_Parms), Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_SetPlayerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMazeSettings_NoRegister()
	{
		return UMazeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMazeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StopConditions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopConditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Textures;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Textures_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Textures_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MazeObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreRegionsVisible_MetaData[];
#endif
		static void NewProp_AreRegionsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AreRegionsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorRecordingFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_BehaviorRecordingFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeSettingsFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MazeSettingsFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MazeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMazeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMazeSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMazeSettings_AddMazeObject, "AddMazeObject" }, // 2294303214
		{ &Z_Construct_UFunction_UMazeSettings_AddStopCondition, "AddStopCondition" }, // 4249149538
		{ &Z_Construct_UFunction_UMazeSettings_AddTexture, "AddTexture" }, // 152305781
		{ &Z_Construct_UFunction_UMazeSettings_ClearMazeObjects, "ClearMazeObjects" }, // 3158433166
		{ &Z_Construct_UFunction_UMazeSettings_ClearStopConditions, "ClearStopConditions" }, // 2350259342
		{ &Z_Construct_UFunction_UMazeSettings_ClearTextures, "ClearTextures" }, // 261844562
		{ &Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible, "GetAreRegionsVisible" }, // 712063478
		{ &Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName, "GetBehaviorRecordingFileName" }, // 181509970
		{ &Z_Construct_UFunction_UMazeSettings_GetMazeName, "GetMazeName" }, // 1533521199
		{ &Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName, "GetMazeSettingsFileName" }, // 2508934581
		{ &Z_Construct_UFunction_UMazeSettings_GetPlayerStart, "GetPlayerStart" }, // 2174144035
		{ &Z_Construct_UFunction_UMazeSettings_RemoveMazeObject, "RemoveMazeObject" }, // 2090218455
		{ &Z_Construct_UFunction_UMazeSettings_RemoveStopCondition, "RemoveStopCondition" }, // 3970227289
		{ &Z_Construct_UFunction_UMazeSettings_RemoveTexture, "RemoveTexture" }, // 2953403180
		{ &Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible, "SetAreRegionsVisible" }, // 3700685515
		{ &Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName, "SetBehaviorRecordingFileName" }, // 3222898614
		{ &Z_Construct_UFunction_UMazeSettings_SetMazeName, "SetMazeName" }, // 115867785
		{ &Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName, "SetMazeSettingsFileName" }, // 647246240
		{ &Z_Construct_UFunction_UMazeSettings_SetPlayerStart, "SetPlayerStart" }, // 3424899133
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Settings/MazeSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_StopConditions_MetaData[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_StopConditions = { "StopConditions", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeSettings, StopConditions), METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_StopConditions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_StopConditions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_StopConditions_Inner = { "StopConditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStopCondition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures_MetaData[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeSettings, Textures), METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures_Key_KeyProp = { "Textures_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures_ValueProp = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeObjects_MetaData[] = {
		{ "Comment", "//UPROPERTY()\n//TArray<Region> \n" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
		{ "ToolTip", "UPROPERTY()\nTArray<Region>" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeObjects = { "MazeObjects", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeSettings, MazeObjects), METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeObjects_Inner = { "MazeObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMazeObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_AreRegionsVisible_MetaData[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMazeSettings_Statics::NewProp_AreRegionsVisible_SetBit(void* Obj)
	{
		((UMazeSettings*)Obj)->AreRegionsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_AreRegionsVisible = { "AreRegionsVisible", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMazeSettings), &Z_Construct_UClass_UMazeSettings_Statics::NewProp_AreRegionsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_AreRegionsVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_AreRegionsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_PlayerStart_MetaData[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_PlayerStart = { "PlayerStart", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeSettings, PlayerStart), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_PlayerStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_PlayerStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_BehaviorRecordingFileName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_BehaviorRecordingFileName = { "BehaviorRecordingFileName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeSettings, BehaviorRecordingFileName), METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_BehaviorRecordingFileName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_BehaviorRecordingFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeSettingsFileName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeSettingsFileName = { "MazeSettingsFileName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeSettings, MazeSettingsFileName), METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeSettingsFileName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeSettingsFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeName = { "MazeName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeSettings, MazeName), METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMazeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSettings_Statics::NewProp_StopConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSettings_Statics::NewProp_StopConditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSettings_Statics::NewProp_AreRegionsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSettings_Statics::NewProp_PlayerStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSettings_Statics::NewProp_BehaviorRecordingFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeSettingsFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMazeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMazeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMazeSettings_Statics::ClassParams = {
		&UMazeSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMazeSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMazeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMazeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMazeSettings, 921271613);
	template<> RODENTVR_API UClass* StaticClass<UMazeSettings>()
	{
		return UMazeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMazeSettings(Z_Construct_UClass_UMazeSettings, &UMazeSettings::StaticClass, TEXT("/Script/RodentVR"), TEXT("UMazeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMazeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
