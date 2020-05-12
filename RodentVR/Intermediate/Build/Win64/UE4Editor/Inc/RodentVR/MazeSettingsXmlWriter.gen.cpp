// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
// End Cross Module References
	void UMazeSettingsXmlWriter::StaticRegisterNativesUMazeSettingsXmlWriter()
	{
	}
	UClass* Z_Construct_UClass_UMazeSettingsXmlWriter_NoRegister()
	{
		return UMazeSettingsXmlWriter::StaticClass();
	}
	struct Z_Construct_UClass_UMazeSettingsXmlWriter_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSettingsXmlWriter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Settings/MazeSettingsXmlWriter.h" },
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
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMazeSettingsXmlWriter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMazeSettingsXmlWriter_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UMazeSettingsXmlWriter, 799198797);
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
