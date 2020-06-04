// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/MazeSettingsXmlWriter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeSettingsXmlWriter() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UMazeSettingsXmlWriter_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeSettingsXmlWriter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMazeSettingsXmlWriter::execSaveMazeSettings)
	{
		P_GET_OBJECT(UMazeSettings,Z_Param_MazeSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMazeSettingsXmlWriter::SaveMazeSettings(Z_Param_MazeSettings);
		P_NATIVE_END;
	}
	void UMazeSettingsXmlWriter::StaticRegisterNativesUMazeSettingsXmlWriter()
	{
		UClass* Class = UMazeSettingsXmlWriter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveMazeSettings", &UMazeSettingsXmlWriter::execSaveMazeSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMazeSettingsXmlWriter_SaveMazeSettings_Statics
	{
		struct MazeSettingsXmlWriter_eventSaveMazeSettings_Parms
		{
			UMazeSettings* MazeSettings;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSettingsXmlWriter_SaveMazeSettings_Statics::NewProp_MazeSettings = { "MazeSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettingsXmlWriter_eventSaveMazeSettings_Parms, MazeSettings), Z_Construct_UClass_UMazeSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettingsXmlWriter_SaveMazeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettingsXmlWriter_SaveMazeSettings_Statics::NewProp_MazeSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettingsXmlWriter_SaveMazeSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettingsXmlWriter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettingsXmlWriter_SaveMazeSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettingsXmlWriter, nullptr, "SaveMazeSettings", nullptr, nullptr, sizeof(MazeSettingsXmlWriter_eventSaveMazeSettings_Parms), Z_Construct_UFunction_UMazeSettingsXmlWriter_SaveMazeSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettingsXmlWriter_SaveMazeSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettingsXmlWriter_SaveMazeSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeSettingsXmlWriter_SaveMazeSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettingsXmlWriter_SaveMazeSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettingsXmlWriter_SaveMazeSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMazeSettingsXmlWriter_NoRegister()
	{
		return UMazeSettingsXmlWriter::StaticClass();
	}
	struct Z_Construct_UClass_UMazeSettingsXmlWriter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMazeSettingsXmlWriter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMazeSettingsXmlWriter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMazeSettingsXmlWriter_SaveMazeSettings, "SaveMazeSettings" }, // 3510597225
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettingsXmlWriter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Settings/MazeSettingsXmlWriter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettingsXmlWriter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMazeSettingsXmlWriter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMazeSettingsXmlWriter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMazeSettingsXmlWriter_Statics::ClassParams = {
		&UMazeSettingsXmlWriter::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMazeSettingsXmlWriter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeSettingsXmlWriter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMazeSettingsXmlWriter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMazeSettingsXmlWriter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMazeSettingsXmlWriter, 4155906172);
	template<> RODENTVR_API UClass* StaticClass<UMazeSettingsXmlWriter>()
	{
		return UMazeSettingsXmlWriter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMazeSettingsXmlWriter(Z_Construct_UClass_UMazeSettingsXmlWriter, &UMazeSettingsXmlWriter::StaticClass, TEXT("/Script/RodentVR"), TEXT("UMazeSettingsXmlWriter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMazeSettingsXmlWriter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
