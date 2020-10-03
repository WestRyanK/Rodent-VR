// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/XML/XmlFileWriter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXmlFileWriter() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UXmlFileWriter_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UXmlFileWriter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	void UXmlFileWriter::StaticRegisterNativesUXmlFileWriter()
	{
	}
	UClass* Z_Construct_UClass_UXmlFileWriter_NoRegister()
	{
		return UXmlFileWriter::StaticClass();
	}
	struct Z_Construct_UClass_UXmlFileWriter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXmlFileWriter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXmlFileWriter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XML/XmlFileWriter.h" },
		{ "ModuleRelativePath", "Private/XML/XmlFileWriter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXmlFileWriter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXmlFileWriter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXmlFileWriter_Statics::ClassParams = {
		&UXmlFileWriter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXmlFileWriter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXmlFileWriter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXmlFileWriter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXmlFileWriter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXmlFileWriter, 609174034);
	template<> RODENTVR_API UClass* StaticClass<UXmlFileWriter>()
	{
		return UXmlFileWriter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXmlFileWriter(Z_Construct_UClass_UXmlFileWriter, &UXmlFileWriter::StaticClass, TEXT("/Script/RodentVR"), TEXT("UXmlFileWriter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXmlFileWriter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
