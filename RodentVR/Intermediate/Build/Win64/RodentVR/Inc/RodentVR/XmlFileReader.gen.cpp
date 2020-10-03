// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/XML/XmlFileReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXmlFileReader() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UXmlFileReader_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UXmlFileReader();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	void UXmlFileReader::StaticRegisterNativesUXmlFileReader()
	{
	}
	UClass* Z_Construct_UClass_UXmlFileReader_NoRegister()
	{
		return UXmlFileReader::StaticClass();
	}
	struct Z_Construct_UClass_UXmlFileReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXmlFileReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXmlFileReader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XML/XmlFileReader.h" },
		{ "ModuleRelativePath", "Private/XML/XmlFileReader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXmlFileReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXmlFileReader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXmlFileReader_Statics::ClassParams = {
		&UXmlFileReader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXmlFileReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXmlFileReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXmlFileReader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXmlFileReader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXmlFileReader, 1322229125);
	template<> RODENTVR_API UClass* StaticClass<UXmlFileReader>()
	{
		return UXmlFileReader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXmlFileReader(Z_Construct_UClass_UXmlFileReader, &UXmlFileReader::StaticClass, TEXT("/Script/RodentVR"), TEXT("UXmlFileReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXmlFileReader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
