// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/TextureLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureLoader() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UTextureLoader_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UTextureLoader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	void UTextureLoader::StaticRegisterNativesUTextureLoader()
	{
	}
	UClass* Z_Construct_UClass_UTextureLoader_NoRegister()
	{
		return UTextureLoader::StaticClass();
	}
	struct Z_Construct_UClass_UTextureLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureLoader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Settings/TextureLoader.h" },
		{ "ModuleRelativePath", "Private/Settings/TextureLoader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureLoader_Statics::ClassParams = {
		&UTextureLoader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextureLoader_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextureLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureLoader, 2853252710);
	template<> RODENTVR_API UClass* StaticClass<UTextureLoader>()
	{
		return UTextureLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureLoader(Z_Construct_UClass_UTextureLoader, &UTextureLoader::StaticClass, TEXT("/Script/RodentVR"), TEXT("UTextureLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
