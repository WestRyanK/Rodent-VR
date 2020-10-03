// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/LiveLinkController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkController() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkController_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkController::StaticRegisterNativesULiveLinkController()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkController_NoRegister()
	{
		return ULiveLinkController::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic object to control a UObject live link frames\n */" },
		{ "IncludePath", "LiveLinkController.h" },
		{ "ModuleRelativePath", "Public/LiveLinkController.h" },
		{ "ToolTip", "Basic object to control a UObject live link frames" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkController_Statics::ClassParams = {
		&ULiveLinkController::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkController, 1852933746);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkController>()
	{
		return ULiveLinkController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkController(Z_Construct_UClass_ULiveLinkController, &ULiveLinkController::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
