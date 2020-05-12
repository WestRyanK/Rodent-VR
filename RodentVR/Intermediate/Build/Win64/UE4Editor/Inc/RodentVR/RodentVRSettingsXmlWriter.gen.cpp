// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/RodentVRSettingsXmlWriter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRodentVRSettingsXmlWriter() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_URodentVRSettingsXmlWriter_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_URodentVRSettingsXmlWriter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UFunction* Z_Construct_UFunction_URodentVRSettingsXmlWriter_SaveRodentVRSettings();
	RODENTVR_API UClass* Z_Construct_UClass_URodentVRSettings_NoRegister();
// End Cross Module References
	void URodentVRSettingsXmlWriter::StaticRegisterNativesURodentVRSettingsXmlWriter()
	{
		UClass* Class = URodentVRSettingsXmlWriter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveRodentVRSettings", &URodentVRSettingsXmlWriter::execSaveRodentVRSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URodentVRSettingsXmlWriter_SaveRodentVRSettings_Statics
	{
		struct RodentVRSettingsXmlWriter_eventSaveRodentVRSettings_Parms
		{
			URodentVRSettings* Settings;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRSettingsXmlWriter_SaveRodentVRSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettingsXmlWriter_eventSaveRodentVRSettings_Parms, Settings), Z_Construct_UClass_URodentVRSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettingsXmlWriter_SaveRodentVRSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettingsXmlWriter_SaveRodentVRSettings_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettingsXmlWriter_SaveRodentVRSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettingsXmlWriter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettingsXmlWriter_SaveRodentVRSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettingsXmlWriter, nullptr, "SaveRodentVRSettings", nullptr, nullptr, sizeof(RodentVRSettingsXmlWriter_eventSaveRodentVRSettings_Parms), Z_Construct_UFunction_URodentVRSettingsXmlWriter_SaveRodentVRSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettingsXmlWriter_SaveRodentVRSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettingsXmlWriter_SaveRodentVRSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettingsXmlWriter_SaveRodentVRSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettingsXmlWriter_SaveRodentVRSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettingsXmlWriter_SaveRodentVRSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URodentVRSettingsXmlWriter_NoRegister()
	{
		return URodentVRSettingsXmlWriter::StaticClass();
	}
	struct Z_Construct_UClass_URodentVRSettingsXmlWriter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URodentVRSettingsXmlWriter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URodentVRSettingsXmlWriter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URodentVRSettingsXmlWriter_SaveRodentVRSettings, "SaveRodentVRSettings" }, // 3025009867
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSettingsXmlWriter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Settings/RodentVRSettingsXmlWriter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettingsXmlWriter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URodentVRSettingsXmlWriter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URodentVRSettingsXmlWriter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URodentVRSettingsXmlWriter_Statics::ClassParams = {
		&URodentVRSettingsXmlWriter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URodentVRSettingsXmlWriter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URodentVRSettingsXmlWriter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URodentVRSettingsXmlWriter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URodentVRSettingsXmlWriter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URodentVRSettingsXmlWriter, 1755309501);
	template<> RODENTVR_API UClass* StaticClass<URodentVRSettingsXmlWriter>()
	{
		return URodentVRSettingsXmlWriter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URodentVRSettingsXmlWriter(Z_Construct_UClass_URodentVRSettingsXmlWriter, &URodentVRSettingsXmlWriter::StaticClass, TEXT("/Script/RodentVR"), TEXT("URodentVRSettingsXmlWriter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URodentVRSettingsXmlWriter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
