// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Simulator/StartPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartPosition() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_AStartPosition_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_AStartPosition();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UClass* Z_Construct_UClass_UStartPositionSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStartPosition::execGetStartPositionTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=AStartPosition::GetStartPositionTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStartPosition::execUpdateFromSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFromSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStartPosition::execSetSettings)
	{
		P_GET_OBJECT(UStartPositionSettings,Z_Param_SettingsValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_SettingsValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStartPosition::execGetSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStartPositionSettings**)Z_Param__Result=P_THIS->GetSettings();
		P_NATIVE_END;
	}
	void AStartPosition::StaticRegisterNativesAStartPosition()
	{
		UClass* Class = AStartPosition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSettings", &AStartPosition::execGetSettings },
			{ "GetStartPositionTag", &AStartPosition::execGetStartPositionTag },
			{ "SetSettings", &AStartPosition::execSetSettings },
			{ "UpdateFromSettings", &AStartPosition::execUpdateFromSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStartPosition_GetSettings_Statics
	{
		struct StartPosition_eventGetSettings_Parms
		{
			UStartPositionSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStartPosition_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StartPosition_eventGetSettings_Parms, ReturnValue), Z_Construct_UClass_UStartPositionSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStartPosition_GetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStartPosition_GetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStartPosition_GetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Simulator/StartPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStartPosition_GetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStartPosition, nullptr, "GetSettings", nullptr, nullptr, sizeof(StartPosition_eventGetSettings_Parms), Z_Construct_UFunction_AStartPosition_GetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStartPosition_GetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStartPosition_GetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStartPosition_GetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStartPosition_GetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStartPosition_GetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStartPosition_GetStartPositionTag_Statics
	{
		struct StartPosition_eventGetStartPositionTag_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AStartPosition_GetStartPositionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StartPosition_eventGetStartPositionTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStartPosition_GetStartPositionTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStartPosition_GetStartPositionTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStartPosition_GetStartPositionTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/StartPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStartPosition_GetStartPositionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStartPosition, nullptr, "GetStartPositionTag", nullptr, nullptr, sizeof(StartPosition_eventGetStartPositionTag_Parms), Z_Construct_UFunction_AStartPosition_GetStartPositionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStartPosition_GetStartPositionTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStartPosition_GetStartPositionTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStartPosition_GetStartPositionTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStartPosition_GetStartPositionTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStartPosition_GetStartPositionTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStartPosition_SetSettings_Statics
	{
		struct StartPosition_eventSetSettings_Parms
		{
			UStartPositionSettings* SettingsValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingsValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStartPosition_SetSettings_Statics::NewProp_SettingsValue = { "SettingsValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StartPosition_eventSetSettings_Parms, SettingsValue), Z_Construct_UClass_UStartPositionSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStartPosition_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStartPosition_SetSettings_Statics::NewProp_SettingsValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStartPosition_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Simulator/StartPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStartPosition_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStartPosition, nullptr, "SetSettings", nullptr, nullptr, sizeof(StartPosition_eventSetSettings_Parms), Z_Construct_UFunction_AStartPosition_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStartPosition_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStartPosition_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStartPosition_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStartPosition_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStartPosition_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStartPosition_UpdateFromSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStartPosition_UpdateFromSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/StartPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStartPosition_UpdateFromSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStartPosition, nullptr, "UpdateFromSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStartPosition_UpdateFromSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStartPosition_UpdateFromSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStartPosition_UpdateFromSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStartPosition_UpdateFromSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStartPosition_NoRegister()
	{
		return AStartPosition::StaticClass();
	}
	struct Z_Construct_UClass_AStartPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStartPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStartPosition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStartPosition_GetSettings, "GetSettings" }, // 3770094197
		{ &Z_Construct_UFunction_AStartPosition_GetStartPositionTag, "GetStartPositionTag" }, // 3221701757
		{ &Z_Construct_UFunction_AStartPosition_SetSettings, "SetSettings" }, // 3997540743
		{ &Z_Construct_UFunction_AStartPosition_UpdateFromSettings, "UpdateFromSettings" }, // 2932015467
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartPosition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Simulator/StartPosition.h" },
		{ "ModuleRelativePath", "Private/Simulator/StartPosition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartPosition_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Simulator/StartPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStartPosition_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStartPosition, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStartPosition_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStartPosition_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartPosition_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintGetter", "GetSettings" },
		{ "BlueprintSetter", "SetSettings" },
		{ "Category", "StartPosition" },
		{ "ModuleRelativePath", "Private/Simulator/StartPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStartPosition_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStartPosition, Settings), Z_Construct_UClass_UStartPositionSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStartPosition_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStartPosition_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStartPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartPosition_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartPosition_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStartPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStartPosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStartPosition_Statics::ClassParams = {
		&AStartPosition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStartPosition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStartPosition_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStartPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStartPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStartPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStartPosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStartPosition, 1683886366);
	template<> RODENTVR_API UClass* StaticClass<AStartPosition>()
	{
		return AStartPosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStartPosition(Z_Construct_UClass_AStartPosition, &AStartPosition::StaticClass, TEXT("/Script/RodentVR"), TEXT("AStartPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStartPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
