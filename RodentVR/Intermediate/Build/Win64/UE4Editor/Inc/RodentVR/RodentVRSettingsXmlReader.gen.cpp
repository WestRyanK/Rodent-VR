// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/RodentVRSettingsXmlReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRodentVRSettingsXmlReader() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_URodentVRSettingsXmlReader_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_URodentVRSettingsXmlReader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UClass* Z_Construct_UClass_URodentVRSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URodentVRSettingsXmlReader::execLoadRodentVRSettingsFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RodentVRSettingsFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URodentVRSettings**)Z_Param__Result=URodentVRSettingsXmlReader::LoadRodentVRSettingsFromFile(Z_Param_RodentVRSettingsFileName);
		P_NATIVE_END;
	}
	void URodentVRSettingsXmlReader::StaticRegisterNativesURodentVRSettingsXmlReader()
	{
		UClass* Class = URodentVRSettingsXmlReader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadRodentVRSettingsFromFile", &URodentVRSettingsXmlReader::execLoadRodentVRSettingsFromFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile_Statics
	{
		struct RodentVRSettingsXmlReader_eventLoadRodentVRSettingsFromFile_Parms
		{
			FString RodentVRSettingsFileName;
			URodentVRSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RodentVRSettingsFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettingsXmlReader_eventLoadRodentVRSettingsFromFile_Parms, ReturnValue), Z_Construct_UClass_URodentVRSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile_Statics::NewProp_RodentVRSettingsFileName = { "RodentVRSettingsFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSettingsXmlReader_eventLoadRodentVRSettingsFromFile_Parms, RodentVRSettingsFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile_Statics::NewProp_RodentVRSettingsFileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettingsXmlReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSettingsXmlReader, nullptr, "LoadRodentVRSettingsFromFile", nullptr, nullptr, sizeof(RodentVRSettingsXmlReader_eventLoadRodentVRSettingsFromFile_Parms), Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URodentVRSettingsXmlReader_NoRegister()
	{
		return URodentVRSettingsXmlReader::StaticClass();
	}
	struct Z_Construct_UClass_URodentVRSettingsXmlReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URodentVRSettingsXmlReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URodentVRSettingsXmlReader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URodentVRSettingsXmlReader_LoadRodentVRSettingsFromFile, "LoadRodentVRSettingsFromFile" }, // 3464855418
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSettingsXmlReader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Settings/RodentVRSettingsXmlReader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Settings/RodentVRSettingsXmlReader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URodentVRSettingsXmlReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URodentVRSettingsXmlReader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URodentVRSettingsXmlReader_Statics::ClassParams = {
		&URodentVRSettingsXmlReader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URodentVRSettingsXmlReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSettingsXmlReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URodentVRSettingsXmlReader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URodentVRSettingsXmlReader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URodentVRSettingsXmlReader, 2930414020);
	template<> RODENTVR_API UClass* StaticClass<URodentVRSettingsXmlReader>()
	{
		return URodentVRSettingsXmlReader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URodentVRSettingsXmlReader(Z_Construct_UClass_URodentVRSettingsXmlReader, &URodentVRSettingsXmlReader::StaticClass, TEXT("/Script/RodentVR"), TEXT("URodentVRSettingsXmlReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URodentVRSettingsXmlReader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
