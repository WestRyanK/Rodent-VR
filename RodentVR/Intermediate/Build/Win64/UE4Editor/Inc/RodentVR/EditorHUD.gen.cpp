// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Editor/EditorHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorHUD() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_AEditorHUD_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_AEditorHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	void AEditorHUD::StaticRegisterNativesAEditorHUD()
	{
	}
	UClass* Z_Construct_UClass_AEditorHUD_NoRegister()
	{
		return AEditorHUD::StaticClass();
	}
	struct Z_Construct_UClass_AEditorHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEditorHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEditorHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Editor/EditorHUD.h" },
		{ "ModuleRelativePath", "Private/Editor/EditorHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEditorHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEditorHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEditorHUD_Statics::ClassParams = {
		&AEditorHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEditorHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEditorHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEditorHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEditorHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEditorHUD, 4235186918);
	template<> RODENTVR_API UClass* StaticClass<AEditorHUD>()
	{
		return AEditorHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEditorHUD(Z_Construct_UClass_AEditorHUD, &AEditorHUD::StaticClass, TEXT("/Script/RodentVR"), TEXT("AEditorHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEditorHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
