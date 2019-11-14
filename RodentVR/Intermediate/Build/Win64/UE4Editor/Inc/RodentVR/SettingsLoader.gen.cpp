// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/SettingsLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsLoader() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_USettingsLoader_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_USettingsLoader();
	RODENTVR_API UClass* Z_Construct_UClass_UXmlFileReader();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UFunction* Z_Construct_UFunction_USettingsLoader_LoadSettings();
	RODENTVR_API UClass* Z_Construct_UClass_ARodentGameMode_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void USettingsLoader::StaticRegisterNativesUSettingsLoader()
	{
		UClass* Class = USettingsLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadSettings", &USettingsLoader::execLoadSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USettingsLoader_LoadSettings_Statics
	{
		struct SettingsLoader_eventLoadSettings_Parms
		{
			UObject* WorldContextObject;
			ARodentGameMode* InRodentGameMode;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRodentGameMode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingsLoader_LoadSettings_Statics::NewProp_InRodentGameMode = { "InRodentGameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsLoader_eventLoadSettings_Parms, InRodentGameMode), Z_Construct_UClass_ARodentGameMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingsLoader_LoadSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsLoader_eventLoadSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsLoader_LoadSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsLoader_LoadSettings_Statics::NewProp_InRodentGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsLoader_LoadSettings_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsLoader_LoadSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Private/SettingsLoader.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsLoader_LoadSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsLoader, nullptr, "LoadSettings", nullptr, nullptr, sizeof(SettingsLoader_eventLoadSettings_Parms), Z_Construct_UFunction_USettingsLoader_LoadSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USettingsLoader_LoadSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsLoader_LoadSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USettingsLoader_LoadSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsLoader_LoadSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsLoader_LoadSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USettingsLoader_NoRegister()
	{
		return USettingsLoader::StaticClass();
	}
	struct Z_Construct_UClass_USettingsLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingsLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UXmlFileReader,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USettingsLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingsLoader_LoadSettings, "LoadSettings" }, // 1697490194
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsLoader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SettingsLoader.h" },
		{ "ModuleRelativePath", "Private/SettingsLoader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingsLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USettingsLoader_Statics::ClassParams = {
		&USettingsLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USettingsLoader_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USettingsLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USettingsLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USettingsLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USettingsLoader, 366292839);
	template<> RODENTVR_API UClass* StaticClass<USettingsLoader>()
	{
		return USettingsLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USettingsLoader(Z_Construct_UClass_USettingsLoader, &USettingsLoader::StaticClass, TEXT("/Script/RodentVR"), TEXT("USettingsLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
