// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/Roles/LiveLinkAnimationRole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationRole() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkAnimationRole();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicRole();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkAnimationRole::StaticRegisterNativesULiveLinkAnimationRole()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister()
	{
		return ULiveLinkAnimationRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkAnimationRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkAnimationRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkBasicRole,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for Animation / Skeleton data.\n */" },
		{ "DisplayName", "Animation Role" },
		{ "IncludePath", "Roles/LiveLinkAnimationRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationRole.h" },
		{ "ToolTip", "Role associated for Animation / Skeleton data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkAnimationRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAnimationRole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAnimationRole_Statics::ClassParams = {
		&ULiveLinkAnimationRole::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkAnimationRole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkAnimationRole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkAnimationRole, 2184838557);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkAnimationRole>()
	{
		return ULiveLinkAnimationRole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkAnimationRole(Z_Construct_UClass_ULiveLinkAnimationRole, &ULiveLinkAnimationRole::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkAnimationRole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAnimationRole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
