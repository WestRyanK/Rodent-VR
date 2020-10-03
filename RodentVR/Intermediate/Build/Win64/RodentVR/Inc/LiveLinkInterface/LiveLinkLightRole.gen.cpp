// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/Roles/LiveLinkLightRole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkLightRole() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkLightRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkLightRole();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkTransformRole();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkLightRole::StaticRegisterNativesULiveLinkLightRole()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkLightRole_NoRegister()
	{
		return ULiveLinkLightRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkLightRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkLightRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkTransformRole,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkLightRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for Light data.\n */" },
		{ "DisplayName", "Light Role" },
		{ "IncludePath", "Roles/LiveLinkLightRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightRole.h" },
		{ "ToolTip", "Role associated for Light data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkLightRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkLightRole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkLightRole_Statics::ClassParams = {
		&ULiveLinkLightRole::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkLightRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLightRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkLightRole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkLightRole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkLightRole, 3850932649);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkLightRole>()
	{
		return ULiveLinkLightRole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkLightRole(Z_Construct_UClass_ULiveLinkLightRole, &ULiveLinkLightRole::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkLightRole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkLightRole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
