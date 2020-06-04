// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/ActorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSettings() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UActorSettings_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UActorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UActorSettings::execSetScale)
	{
		P_GET_STRUCT(FVector,Z_Param_ScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScale(Z_Param_ScaleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorSettings::execGetScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorSettings::execSetRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_RotationValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotation(Z_Param_RotationValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorSettings::execGetRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorSettings::execSetPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_PositionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPosition(Z_Param_PositionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorSettings::execGetPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPosition();
		P_NATIVE_END;
	}
	void UActorSettings::StaticRegisterNativesUActorSettings()
	{
		UClass* Class = UActorSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPosition", &UActorSettings::execGetPosition },
			{ "GetRotation", &UActorSettings::execGetRotation },
			{ "GetScale", &UActorSettings::execGetScale },
			{ "SetPosition", &UActorSettings::execSetPosition },
			{ "SetRotation", &UActorSettings::execSetRotation },
			{ "SetScale", &UActorSettings::execSetScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorSettings_GetPosition_Statics
	{
		struct ActorSettings_eventGetPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorSettings_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorSettings_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorSettings_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorSettings_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSettings_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/ActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSettings_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSettings, nullptr, "GetPosition", nullptr, nullptr, sizeof(ActorSettings_eventGetPosition_Parms), Z_Construct_UFunction_UActorSettings_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSettings_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSettings_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSettings_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSettings_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorSettings_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorSettings_GetRotation_Statics
	{
		struct ActorSettings_eventGetRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorSettings_GetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorSettings_eventGetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorSettings_GetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorSettings_GetRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSettings_GetRotation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/ActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSettings_GetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSettings, nullptr, "GetRotation", nullptr, nullptr, sizeof(ActorSettings_eventGetRotation_Parms), Z_Construct_UFunction_UActorSettings_GetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSettings_GetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSettings_GetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSettings_GetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSettings_GetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorSettings_GetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorSettings_GetScale_Statics
	{
		struct ActorSettings_eventGetScale_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorSettings_GetScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorSettings_eventGetScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorSettings_GetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorSettings_GetScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSettings_GetScale_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/ActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSettings_GetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSettings, nullptr, "GetScale", nullptr, nullptr, sizeof(ActorSettings_eventGetScale_Parms), Z_Construct_UFunction_UActorSettings_GetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSettings_GetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSettings_GetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSettings_GetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSettings_GetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorSettings_GetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorSettings_SetPosition_Statics
	{
		struct ActorSettings_eventSetPosition_Parms
		{
			FVector PositionValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorSettings_SetPosition_Statics::NewProp_PositionValue = { "PositionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorSettings_eventSetPosition_Parms, PositionValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorSettings_SetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorSettings_SetPosition_Statics::NewProp_PositionValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSettings_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/ActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSettings_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSettings, nullptr, "SetPosition", nullptr, nullptr, sizeof(ActorSettings_eventSetPosition_Parms), Z_Construct_UFunction_UActorSettings_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSettings_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSettings_SetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSettings_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSettings_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorSettings_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorSettings_SetRotation_Statics
	{
		struct ActorSettings_eventSetRotation_Parms
		{
			FRotator RotationValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorSettings_SetRotation_Statics::NewProp_RotationValue = { "RotationValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorSettings_eventSetRotation_Parms, RotationValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorSettings_SetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorSettings_SetRotation_Statics::NewProp_RotationValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSettings_SetRotation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/ActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSettings_SetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSettings, nullptr, "SetRotation", nullptr, nullptr, sizeof(ActorSettings_eventSetRotation_Parms), Z_Construct_UFunction_UActorSettings_SetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSettings_SetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSettings_SetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSettings_SetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSettings_SetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorSettings_SetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorSettings_SetScale_Statics
	{
		struct ActorSettings_eventSetScale_Parms
		{
			FVector ScaleValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorSettings_SetScale_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorSettings_eventSetScale_Parms, ScaleValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorSettings_SetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorSettings_SetScale_Statics::NewProp_ScaleValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSettings_SetScale_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/ActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSettings_SetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSettings, nullptr, "SetScale", nullptr, nullptr, sizeof(ActorSettings_eventSetScale_Parms), Z_Construct_UFunction_UActorSettings_SetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSettings_SetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSettings_SetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSettings_SetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSettings_SetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorSettings_SetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorSettings_NoRegister()
	{
		return UActorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UActorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorSettings_GetPosition, "GetPosition" }, // 1722741975
		{ &Z_Construct_UFunction_UActorSettings_GetRotation, "GetRotation" }, // 315076513
		{ &Z_Construct_UFunction_UActorSettings_GetScale, "GetScale" }, // 1850623037
		{ &Z_Construct_UFunction_UActorSettings_SetPosition, "SetPosition" }, // 4106800864
		{ &Z_Construct_UFunction_UActorSettings_SetRotation, "SetRotation" }, // 2896997532
		{ &Z_Construct_UFunction_UActorSettings_SetScale, "SetScale" }, // 3100926579
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Settings/ActorSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Settings/ActorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "BlueprintGetter", "GetScale" },
		{ "BlueprintSetter", "SetScale" },
		{ "Category", "ActorSettings" },
		{ "ModuleRelativePath", "Private/Settings/ActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UActorSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSettings_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSettings_Statics::NewProp_Rotation_MetaData[] = {
		{ "BlueprintGetter", "GetRotation" },
		{ "BlueprintSetter", "SetRotation" },
		{ "Category", "ActorSettings" },
		{ "ModuleRelativePath", "Private/Settings/ActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSettings, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UActorSettings_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSettings_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSettings_Statics::NewProp_Position_MetaData[] = {
		{ "BlueprintGetter", "GetPosition" },
		{ "BlueprintSetter", "SetPosition" },
		{ "Category", "ActorSettings" },
		{ "ModuleRelativePath", "Private/Settings/ActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorSettings_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSettings, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UActorSettings_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSettings_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSettings_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSettings_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSettings_Statics::NewProp_Position,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorSettings_Statics::ClassParams = {
		&UActorSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorSettings, 3711569496);
	template<> RODENTVR_API UClass* StaticClass<UActorSettings>()
	{
		return UActorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorSettings(Z_Construct_UClass_UActorSettings, &UActorSettings::StaticClass, TEXT("/Script/RodentVR"), TEXT("UActorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
