// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/LiveLinkFramePreProcessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkFramePreProcessor() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkFramePreProcessor::StaticRegisterNativesULiveLinkFramePreProcessor()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister()
	{
		return ULiveLinkFramePreProcessor::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "/**\n * Basic object to apply preprocessing to a live link frame. \n * Inherit from it to add specific operations / options for a certain type of data\n * @note It can only be used on the Game Thread. See ILiveLinkFramePreProcessorWorker for the any thread implementation.\n */" },
		{ "IncludePath", "LiveLinkFramePreProcessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkFramePreProcessor.h" },
		{ "ToolTip", "Basic object to apply preprocessing to a live link frame.\nInherit from it to add specific operations / options for a certain type of data\n@note It can only be used on the Game Thread. See ILiveLinkFramePreProcessorWorker for the any thread implementation." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkFramePreProcessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics::ClassParams = {
		&ULiveLinkFramePreProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkFramePreProcessor, 1113151389);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkFramePreProcessor>()
	{
		return ULiveLinkFramePreProcessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkFramePreProcessor(Z_Construct_UClass_ULiveLinkFramePreProcessor, &ULiveLinkFramePreProcessor::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkFramePreProcessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkFramePreProcessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
