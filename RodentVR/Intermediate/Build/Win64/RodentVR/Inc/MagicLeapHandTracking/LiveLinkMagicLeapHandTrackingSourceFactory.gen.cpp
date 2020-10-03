// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapHandTracking/Private/LiveLinkMagicLeapHandTrackingSourceFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMagicLeapHandTrackingSourceFactory() {}
// Cross Module References
	MAGICLEAPHANDTRACKING_API UClass* Z_Construct_UClass_ULiveLinkMagicLeapHandTrackingSourceFactory_NoRegister();
	MAGICLEAPHANDTRACKING_API UClass* Z_Construct_UClass_ULiveLinkMagicLeapHandTrackingSourceFactory();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	UPackage* Z_Construct_UPackage__Script_MagicLeapHandTracking();
// End Cross Module References
	void ULiveLinkMagicLeapHandTrackingSourceFactory::StaticRegisterNativesULiveLinkMagicLeapHandTrackingSourceFactory()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkMagicLeapHandTrackingSourceFactory_NoRegister()
	{
		return ULiveLinkMagicLeapHandTrackingSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkMagicLeapHandTrackingSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkMagicLeapHandTrackingSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapHandTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMagicLeapHandTrackingSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkMagicLeapHandTrackingSourceFactory.h" },
		{ "ModuleRelativePath", "Private/LiveLinkMagicLeapHandTrackingSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkMagicLeapHandTrackingSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMagicLeapHandTrackingSourceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMagicLeapHandTrackingSourceFactory_Statics::ClassParams = {
		&ULiveLinkMagicLeapHandTrackingSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkMagicLeapHandTrackingSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMagicLeapHandTrackingSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkMagicLeapHandTrackingSourceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkMagicLeapHandTrackingSourceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkMagicLeapHandTrackingSourceFactory, 902581514);
	template<> MAGICLEAPHANDTRACKING_API UClass* StaticClass<ULiveLinkMagicLeapHandTrackingSourceFactory>()
	{
		return ULiveLinkMagicLeapHandTrackingSourceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkMagicLeapHandTrackingSourceFactory(Z_Construct_UClass_ULiveLinkMagicLeapHandTrackingSourceFactory, &ULiveLinkMagicLeapHandTrackingSourceFactory::StaticClass, TEXT("/Script/MagicLeapHandTracking"), TEXT("ULiveLinkMagicLeapHandTrackingSourceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMagicLeapHandTrackingSourceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
