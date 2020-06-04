// Copyright Epic Games, Inc. All Rights Reserved.
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
	RODENTVR_API UClass* Z_Construct_UClass_UMazeObjectSettings_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UStopCondition_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UMazeSettings::execGetMazeObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMazeObjectSettings*>*)Z_Param__Result=P_THIS->GetMazeObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execAddMazeObject)
	{
		P_GET_OBJECT(UMazeObjectSettings,Z_Param_MazeObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMazeObject(Z_Param_MazeObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execRemoveMazeObject)
	{
		P_GET_OBJECT(UMazeObjectSettings,Z_Param_MazeObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMazeObject(Z_Param_MazeObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execClearMazeObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMazeObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execGetStopConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UStopCondition*>*)Z_Param__Result=P_THIS->GetStopConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execAddStopCondition)
	{
		P_GET_OBJECT(UStopCondition,Z_Param_StopCondition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStopCondition(Z_Param_StopCondition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execRemoveStopCondition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveStopCondition(Z_Param_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execClearStopConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearStopConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execAddTexture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TextureFileNameValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTexture(Z_Param_SlotName,Z_Param_TextureFileNameValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execRemoveTexture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTexture(Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execClearTextures)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearTextures();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execGetTextures)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetTextures();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execSetAreRegionsVisible)
	{
		P_GET_UBOOL(Z_Param_AreRegionsVisibleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAreRegionsVisible(Z_Param_AreRegionsVisibleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execGetAreRegionsVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAreRegionsVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execSetPlayerStart)
	{
		P_GET_STRUCT(FTransform,Z_Param_PlayerStartValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerStart(Z_Param_PlayerStartValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execGetPlayerStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetPlayerStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execSetBehaviorRecordingFileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BehaviorRecordingFileNameValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBehaviorRecordingFileName(Z_Param_BehaviorRecordingFileNameValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execGetBehaviorRecordingFileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBehaviorRecordingFileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execSetMazeSettingsFileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MazeSettingsFileNameValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMazeSettingsFileName(Z_Param_MazeSettingsFileNameValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execGetMazeSettingsFileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMazeSettingsFileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execSetMazeName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MazeNameValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMazeName(Z_Param_MazeNameValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execGetMazeName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMazeName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeSettings::execDoesMazeHaveSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesMazeHaveSettings();
		P_NATIVE_END;
	}
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
			{ "DoesMazeHaveSettings", &UMazeSettings::execDoesMazeHaveSettings },
			{ "GetAreRegionsVisible", &UMazeSettings::execGetAreRegionsVisible },
			{ "GetBehaviorRecordingFileName", &UMazeSettings::execGetBehaviorRecordingFileName },
			{ "GetMazeName", &UMazeSettings::execGetMazeName },
			{ "GetMazeObjects", &UMazeSettings::execGetMazeObjects },
			{ "GetMazeSettingsFileName", &UMazeSettings::execGetMazeSettingsFileName },
			{ "GetPlayerStart", &UMazeSettings::execGetPlayerStart },
			{ "GetStopConditions", &UMazeSettings::execGetStopConditions },
			{ "GetTextures", &UMazeSettings::execGetTextures },
			{ "RemoveMazeObject", &UMazeSettings::execRemoveMazeObject },
			{ "RemoveStopCondition", &UMazeSettings::execRemoveStopCondition },
			{ "RemoveTexture", &UMazeSettings::execRemoveTexture },
			{ "SetAreRegionsVisible", &UMazeSettings::execSetAreRegionsVisible },
			{ "SetBehaviorRecordingFileName", &UMazeSettings::execSetBehaviorRecordingFileName },
			{ "SetMazeName", &UMazeSettings::execSetMazeName },
			{ "SetMazeSettingsFileName", &UMazeSettings::execSetMazeSettingsFileName },
			{ "SetPlayerStart", &UMazeSettings::execSetPlayerStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics
	{
		struct MazeSettings_eventAddMazeObject_Parms
		{
			UMazeObjectSettings* MazeObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::NewProp_MazeObject = { "MazeObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventAddMazeObject_Parms, MazeObject), Z_Construct_UClass_UMazeObjectSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::NewProp_MazeObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "AddMazeObject", nullptr, nullptr, sizeof(MazeSettings_eventAddMazeObject_Parms), Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_AddMazeObject_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "AddStopCondition", nullptr, nullptr, sizeof(MazeSettings_eventAddStopCondition_Parms), Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_AddStopCondition_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "AddTexture", nullptr, nullptr, sizeof(MazeSettings_eventAddTexture_Parms), Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_AddTexture_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_ClearMazeObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "ClearMazeObjects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_ClearMazeObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_ClearMazeObjects_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_ClearStopConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "ClearStopConditions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_ClearStopConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_ClearStopConditions_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_ClearTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "ClearTextures", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_ClearTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_ClearTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_ClearTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_ClearTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings_Statics
	{
		struct MazeSettings_eventDoesMazeHaveSettings_Parms
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
	void Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeSettings_eventDoesMazeHaveSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeSettings_eventDoesMazeHaveSettings_Parms), &Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "DoesMazeHaveSettings", nullptr, nullptr, sizeof(MazeSettings_eventDoesMazeHaveSettings_Parms), Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings_Statics::FuncParams);
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
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "GetAreRegionsVisible", nullptr, nullptr, sizeof(MazeSettings_eventGetAreRegionsVisible_Parms), Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible_Statics::Function_MetaDataParams)) };
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
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventGetBehaviorRecordingFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "GetBehaviorRecordingFileName", nullptr, nullptr, sizeof(MazeSettings_eventGetBehaviorRecordingFileName_Parms), Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName_Statics::Function_MetaDataParams)) };
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
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventGetMazeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "GetMazeName", nullptr, nullptr, sizeof(MazeSettings_eventGetMazeName_Parms), Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_GetMazeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_GetMazeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_GetMazeObjects_Statics
	{
		struct MazeSettings_eventGetMazeObjects_Parms
		{
			TArray<UMazeObjectSettings*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMazeSettings_GetMazeObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventGetMazeObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSettings_GetMazeObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMazeObjectSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_GetMazeObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetMazeObjects_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetMazeObjects_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_GetMazeObjects_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_GetMazeObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "GetMazeObjects", nullptr, nullptr, sizeof(MazeSettings_eventGetMazeObjects_Parms), Z_Construct_UFunction_UMazeSettings_GetMazeObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetMazeObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_GetMazeObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetMazeObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_GetMazeObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_GetMazeObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics
	{
		struct MazeSettings_eventGetMazeSettingsFileName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventGetMazeSettingsFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "GetMazeSettingsFileName", nullptr, nullptr, sizeof(MazeSettings_eventGetMazeSettingsFileName_Parms), Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName_Statics::Function_MetaDataParams)) };
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
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "GetPlayerStart", nullptr, nullptr, sizeof(MazeSettings_eventGetPlayerStart_Parms), Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_GetPlayerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_GetPlayerStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_GetStopConditions_Statics
	{
		struct MazeSettings_eventGetStopConditions_Parms
		{
			TArray<UStopCondition*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMazeSettings_GetStopConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventGetStopConditions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSettings_GetStopConditions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStopCondition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_GetStopConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetStopConditions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetStopConditions_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_GetStopConditions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_GetStopConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "GetStopConditions", nullptr, nullptr, sizeof(MazeSettings_eventGetStopConditions_Parms), Z_Construct_UFunction_UMazeSettings_GetStopConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetStopConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_GetStopConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetStopConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_GetStopConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_GetStopConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_GetTextures_Statics
	{
		struct MazeSettings_eventGetTextures_Parms
		{
			TMap<FString,FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMazeSettings_GetTextures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventGetTextures_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeSettings_GetTextures_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeSettings_GetTextures_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_GetTextures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetTextures_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetTextures_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_GetTextures_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_GetTextures_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_GetTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "GetTextures", nullptr, nullptr, sizeof(MazeSettings_eventGetTextures_Parms), Z_Construct_UFunction_UMazeSettings_GetTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_GetTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_GetTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettings_GetTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettings_GetTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics
	{
		struct MazeSettings_eventRemoveMazeObject_Parms
		{
			UMazeObjectSettings* MazeObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::NewProp_MazeObject = { "MazeObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventRemoveMazeObject_Parms, MazeObject), Z_Construct_UClass_UMazeObjectSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::NewProp_MazeObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "RemoveMazeObject", nullptr, nullptr, sizeof(MazeSettings_eventRemoveMazeObject_Parms), Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_RemoveMazeObject_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "RemoveStopCondition", nullptr, nullptr, sizeof(MazeSettings_eventRemoveStopCondition_Parms), Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_RemoveStopCondition_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "RemoveTexture", nullptr, nullptr, sizeof(MazeSettings_eventRemoveTexture_Parms), Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_RemoveTexture_Statics::Function_MetaDataParams)) };
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
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "SetAreRegionsVisible", nullptr, nullptr, sizeof(MazeSettings_eventSetAreRegionsVisible_Parms), Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible_Statics::Function_MetaDataParams)) };
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
			FString BehaviorRecordingFileNameValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BehaviorRecordingFileNameValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::NewProp_BehaviorRecordingFileNameValue = { "BehaviorRecordingFileNameValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventSetBehaviorRecordingFileName_Parms, BehaviorRecordingFileNameValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::NewProp_BehaviorRecordingFileNameValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "SetBehaviorRecordingFileName", nullptr, nullptr, sizeof(MazeSettings_eventSetBehaviorRecordingFileName_Parms), Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName_Statics::Function_MetaDataParams)) };
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
			FString MazeNameValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MazeNameValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::NewProp_MazeNameValue = { "MazeNameValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventSetMazeName_Parms, MazeNameValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::NewProp_MazeNameValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "SetMazeName", nullptr, nullptr, sizeof(MazeSettings_eventSetMazeName_Parms), Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetMazeName_Statics::Function_MetaDataParams)) };
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
			FString MazeSettingsFileNameValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MazeSettingsFileNameValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::NewProp_MazeSettingsFileNameValue = { "MazeSettingsFileNameValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettings_eventSetMazeSettingsFileName_Parms, MazeSettingsFileNameValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::NewProp_MazeSettingsFileNameValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "SetMazeSettingsFileName", nullptr, nullptr, sizeof(MazeSettings_eventSetMazeSettingsFileName_Parms), Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName_Statics::Function_MetaDataParams)) };
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
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettings, nullptr, "SetPlayerStart", nullptr, nullptr, sizeof(MazeSettings_eventSetPlayerStart_Parms), Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettings_SetPlayerStart_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Textures_ValueProp;
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BehaviorRecordingFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeSettingsFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MazeSettingsFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MazeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMazeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMazeSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMazeSettings_AddMazeObject, "AddMazeObject" }, // 3582315479
		{ &Z_Construct_UFunction_UMazeSettings_AddStopCondition, "AddStopCondition" }, // 1722703317
		{ &Z_Construct_UFunction_UMazeSettings_AddTexture, "AddTexture" }, // 1970456574
		{ &Z_Construct_UFunction_UMazeSettings_ClearMazeObjects, "ClearMazeObjects" }, // 1723975550
		{ &Z_Construct_UFunction_UMazeSettings_ClearStopConditions, "ClearStopConditions" }, // 1665003266
		{ &Z_Construct_UFunction_UMazeSettings_ClearTextures, "ClearTextures" }, // 2674807709
		{ &Z_Construct_UFunction_UMazeSettings_DoesMazeHaveSettings, "DoesMazeHaveSettings" }, // 2590142011
		{ &Z_Construct_UFunction_UMazeSettings_GetAreRegionsVisible, "GetAreRegionsVisible" }, // 2290042088
		{ &Z_Construct_UFunction_UMazeSettings_GetBehaviorRecordingFileName, "GetBehaviorRecordingFileName" }, // 1048659242
		{ &Z_Construct_UFunction_UMazeSettings_GetMazeName, "GetMazeName" }, // 107716458
		{ &Z_Construct_UFunction_UMazeSettings_GetMazeObjects, "GetMazeObjects" }, // 1719434711
		{ &Z_Construct_UFunction_UMazeSettings_GetMazeSettingsFileName, "GetMazeSettingsFileName" }, // 2050445734
		{ &Z_Construct_UFunction_UMazeSettings_GetPlayerStart, "GetPlayerStart" }, // 3641592264
		{ &Z_Construct_UFunction_UMazeSettings_GetStopConditions, "GetStopConditions" }, // 1909070999
		{ &Z_Construct_UFunction_UMazeSettings_GetTextures, "GetTextures" }, // 1707977822
		{ &Z_Construct_UFunction_UMazeSettings_RemoveMazeObject, "RemoveMazeObject" }, // 3332634280
		{ &Z_Construct_UFunction_UMazeSettings_RemoveStopCondition, "RemoveStopCondition" }, // 2552311480
		{ &Z_Construct_UFunction_UMazeSettings_RemoveTexture, "RemoveTexture" }, // 77044070
		{ &Z_Construct_UFunction_UMazeSettings_SetAreRegionsVisible, "SetAreRegionsVisible" }, // 3037658440
		{ &Z_Construct_UFunction_UMazeSettings_SetBehaviorRecordingFileName, "SetBehaviorRecordingFileName" }, // 44804568
		{ &Z_Construct_UFunction_UMazeSettings_SetMazeName, "SetMazeName" }, // 340270229
		{ &Z_Construct_UFunction_UMazeSettings_SetMazeSettingsFileName, "SetMazeSettingsFileName" }, // 1848414016
		{ &Z_Construct_UFunction_UMazeSettings_SetPlayerStart, "SetPlayerStart" }, // 3996832
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Settings/MazeSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_StopConditions_MetaData[] = {
		{ "BlueprintGetter", "GetStopConditions" },
		{ "Category", "MazeSettings" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_StopConditions = { "StopConditions", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeSettings, StopConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_StopConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_StopConditions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_StopConditions_Inner = { "StopConditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStopCondition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures_MetaData[] = {
		{ "BlueprintGetter", "GetTextures" },
		{ "Category", "MazeSettings" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeSettings, Textures), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures_Key_KeyProp = { "Textures_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_Textures_ValueProp = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeObjects_MetaData[] = {
		{ "BlueprintGetter", "GetMazeObjects" },
		{ "Category", "MazeSettings" },
		{ "Comment", "//UPROPERTY()\n//TArray<Region> \n" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
		{ "ToolTip", "UPROPERTY()\nTArray<Region>" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeObjects = { "MazeObjects", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeSettings, MazeObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeObjects_Inner = { "MazeObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMazeObjectSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_AreRegionsVisible_MetaData[] = {
		{ "BlueprintGetter", "GetAreRegionsVisible" },
		{ "BlueprintSetter", "SetAreRegionsVisible" },
		{ "Category", "MazeSettings" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMazeSettings_Statics::NewProp_AreRegionsVisible_SetBit(void* Obj)
	{
		((UMazeSettings*)Obj)->AreRegionsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_AreRegionsVisible = { "AreRegionsVisible", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMazeSettings), &Z_Construct_UClass_UMazeSettings_Statics::NewProp_AreRegionsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_AreRegionsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_AreRegionsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_PlayerStart_MetaData[] = {
		{ "BlueprintGetter", "GetPlayerStart" },
		{ "BlueprintSetter", "SetPlayerStart" },
		{ "Category", "MazeSettings" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_PlayerStart = { "PlayerStart", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeSettings, PlayerStart), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_PlayerStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_PlayerStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_BehaviorRecordingFileName_MetaData[] = {
		{ "BlueprintGetter", "GetBehaviorRecordingFileName" },
		{ "BlueprintSetter", "SetBehaviorRecordingFileName" },
		{ "Category", "MazeSettings" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_BehaviorRecordingFileName = { "BehaviorRecordingFileName", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeSettings, BehaviorRecordingFileName), METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_BehaviorRecordingFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_BehaviorRecordingFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeSettingsFileName_MetaData[] = {
		{ "BlueprintGetter", "GetMazeSettingsFileName" },
		{ "BlueprintSetter", "SetMazeSettingsFileName" },
		{ "Category", "MazeSettings" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeSettingsFileName = { "MazeSettingsFileName", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeSettings, MazeSettingsFileName), METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeSettingsFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeSettingsFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeName_MetaData[] = {
		{ "BlueprintGetter", "GetMazeName" },
		{ "BlueprintSetter", "SetMazeName" },
		{ "Category", "MazeSettings" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeName = { "MazeName", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeSettings, MazeName), METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::NewProp_MazeName_MetaData)) };
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
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMazeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSettings_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UMazeSettings, 210621492);
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
