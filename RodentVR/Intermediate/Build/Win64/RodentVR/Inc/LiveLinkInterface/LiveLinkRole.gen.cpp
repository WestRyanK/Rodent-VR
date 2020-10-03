// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/LiveLinkRole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkRole() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FLiveLinkSubjectRepresentation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSubjectRepresentation"), sizeof(FLiveLinkSubjectRepresentation), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSubjectRepresentation>()
{
	return FLiveLinkSubjectRepresentation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkSubjectRepresentation(FLiveLinkSubjectRepresentation::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkSubjectRepresentation"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSubjectRepresentation
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSubjectRepresentation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkSubjectRepresentation")),new UScriptStruct::TCppStructOps<FLiveLinkSubjectRepresentation>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSubjectRepresentation;
	struct Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Role;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkRole.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectRepresentation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "Live Link" },
		{ "ModuleRelativePath", "Public/LiveLinkRole.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSubjectRepresentation, Role), Z_Construct_UClass_ULiveLinkRole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Role_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Subject_MetaData[] = {
		{ "Category", "Live Link" },
		{ "ModuleRelativePath", "Public/LiveLinkRole.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSubjectRepresentation, Subject), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Subject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewProp_Subject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkSubjectRepresentation",
		sizeof(FLiveLinkSubjectRepresentation),
		alignof(FLiveLinkSubjectRepresentation),
		Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkSubjectRepresentation"), sizeof(FLiveLinkSubjectRepresentation), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Hash() { return 1047257124U; }
	void ULiveLinkRole::StaticRegisterNativesULiveLinkRole()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister()
	{
		return ULiveLinkRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkRole_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic object to extend the meaning of incoming live link frames.\n */" },
		{ "IncludePath", "LiveLinkRole.h" },
		{ "ModuleRelativePath", "Public/LiveLinkRole.h" },
		{ "ToolTip", "Basic object to extend the meaning of incoming live link frames." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkRole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkRole_Statics::ClassParams = {
		&ULiveLinkRole::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkRole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkRole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkRole, 2218006212);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkRole>()
	{
		return ULiveLinkRole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkRole(Z_Construct_UClass_ULiveLinkRole, &ULiveLinkRole::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkRole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkRole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
