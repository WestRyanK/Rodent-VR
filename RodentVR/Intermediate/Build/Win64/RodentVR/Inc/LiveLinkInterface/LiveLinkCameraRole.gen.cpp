// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/Roles/LiveLinkCameraRole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkCameraRole() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkCameraRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkCameraRole();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkTransformRole();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkCameraRole::StaticRegisterNativesULiveLinkCameraRole()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkCameraRole_NoRegister()
	{
		return ULiveLinkCameraRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkCameraRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkCameraRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkTransformRole,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for Camera data.\n */" },
		{ "DisplayName", "Camera Role" },
		{ "IncludePath", "Roles/LiveLinkCameraRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraRole.h" },
		{ "ToolTip", "Role associated for Camera data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkCameraRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkCameraRole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkCameraRole_Statics::ClassParams = {
		&ULiveLinkCameraRole::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkCameraRole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkCameraRole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkCameraRole, 3336583507);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkCameraRole>()
	{
		return ULiveLinkCameraRole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkCameraRole(Z_Construct_UClass_ULiveLinkCameraRole, &ULiveLinkCameraRole::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkCameraRole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkCameraRole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
