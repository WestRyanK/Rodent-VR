// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/MazeSettingsXmlReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeSettingsXmlReader() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UMazeSettingsXmlReader_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeSettingsXmlReader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeSettings_NoRegister();
// End Cross Module References
	void UMazeSettingsXmlReader::StaticRegisterNativesUMazeSettingsXmlReader()
	{
		UClass* Class = UMazeSettingsXmlReader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadMazeFromFile", &UMazeSettingsXmlReader::execLoadMazeFromFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile_Statics
	{
		struct MazeSettingsXmlReader_eventLoadMazeFromFile_Parms
		{
			FText MazeFileName;
			UMazeSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MazeFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettingsXmlReader_eventLoadMazeFromFile_Parms, ReturnValue), Z_Construct_UClass_UMazeSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile_Statics::NewProp_MazeFileName = { "MazeFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeSettingsXmlReader_eventLoadMazeFromFile_Parms, MazeFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile_Statics::NewProp_MazeFileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeSettingsXmlReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSettingsXmlReader, nullptr, "LoadMazeFromFile", nullptr, nullptr, sizeof(MazeSettingsXmlReader_eventLoadMazeFromFile_Parms), Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMazeSettingsXmlReader_NoRegister()
	{
		return UMazeSettingsXmlReader::StaticClass();
	}
	struct Z_Construct_UClass_UMazeSettingsXmlReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMazeSettingsXmlReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMazeSettingsXmlReader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMazeSettingsXmlReader_LoadMazeFromFile, "LoadMazeFromFile" }, // 3159710785
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettingsXmlReader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Settings/MazeSettingsXmlReader.h" },
		{ "ModuleRelativePath", "Private/Settings/MazeSettingsXmlReader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMazeSettingsXmlReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMazeSettingsXmlReader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMazeSettingsXmlReader_Statics::ClassParams = {
		&UMazeSettingsXmlReader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMazeSettingsXmlReader_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMazeSettingsXmlReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMazeSettingsXmlReader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMazeSettingsXmlReader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMazeSettingsXmlReader, 91783502);
	template<> RODENTVR_API UClass* StaticClass<UMazeSettingsXmlReader>()
	{
		return UMazeSettingsXmlReader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMazeSettingsXmlReader(Z_Construct_UClass_UMazeSettingsXmlReader, &UMazeSettingsXmlReader::StaticClass, TEXT("/Script/RodentVR"), TEXT("UMazeSettingsXmlReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMazeSettingsXmlReader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
