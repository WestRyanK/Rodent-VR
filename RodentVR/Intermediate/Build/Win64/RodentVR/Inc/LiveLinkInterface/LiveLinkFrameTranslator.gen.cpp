// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/LiveLinkFrameTranslator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkFrameTranslator() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkFrameTranslator::StaticRegisterNativesULiveLinkFrameTranslator()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister()
	{
		return ULiveLinkFrameTranslator::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkFrameTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkFrameTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkFrameTranslator_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "/**\n * Basic object to translate data from one role to another\n * @note It can only be used on the Game Thread. See ILiveLinkFrameTranslatorWorker for the any thread implementation.\n */" },
		{ "IncludePath", "LiveLinkFrameTranslator.h" },
		{ "ModuleRelativePath", "Public/LiveLinkFrameTranslator.h" },
		{ "ToolTip", "Basic object to translate data from one role to another\n@note It can only be used on the Game Thread. See ILiveLinkFrameTranslatorWorker for the any thread implementation." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkFrameTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkFrameTranslator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkFrameTranslator_Statics::ClassParams = {
		&ULiveLinkFrameTranslator::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkFrameTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFrameTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkFrameTranslator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkFrameTranslator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkFrameTranslator, 1099245500);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkFrameTranslator>()
	{
		return ULiveLinkFrameTranslator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkFrameTranslator(Z_Construct_UClass_ULiveLinkFrameTranslator, &ULiveLinkFrameTranslator::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkFrameTranslator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkFrameTranslator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
