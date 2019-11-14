// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/MazeLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeLoader() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UMazeLoader_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeLoader();
	RODENTVR_API UClass* Z_Construct_UClass_UXmlFileReader();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	void UMazeLoader::StaticRegisterNativesUMazeLoader()
	{
	}
	UClass* Z_Construct_UClass_UMazeLoader_NoRegister()
	{
		return UMazeLoader::StaticClass();
	}
	struct Z_Construct_UClass_UMazeLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMazeLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UXmlFileReader,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeLoader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MazeLoader.h" },
		{ "ModuleRelativePath", "Private/MazeLoader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMazeLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMazeLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMazeLoader_Statics::ClassParams = {
		&UMazeLoader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMazeLoader_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMazeLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMazeLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMazeLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMazeLoader, 2469974187);
	template<> RODENTVR_API UClass* StaticClass<UMazeLoader>()
	{
		return UMazeLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMazeLoader(Z_Construct_UClass_UMazeLoader, &UMazeLoader::StaticClass, TEXT("/Script/RodentVR"), TEXT("UMazeLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMazeLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
