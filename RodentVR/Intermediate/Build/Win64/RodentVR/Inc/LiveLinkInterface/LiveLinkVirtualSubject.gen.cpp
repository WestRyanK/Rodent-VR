// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/LiveLinkVirtualSubject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkVirtualSubject() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
// End Cross Module References
	void ULiveLinkVirtualSubject::StaticRegisterNativesULiveLinkVirtualSubject()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister()
	{
		return ULiveLinkVirtualSubject::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkVirtualSubject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameTranslators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FrameTranslators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameTranslators_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrameTranslators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subjects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A Virtual subject is made up of one or more real subjects from a source\n" },
		{ "IncludePath", "LiveLinkVirtualSubject.h" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "A Virtual subject is made up of one or more real subjects from a source" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available translator the subject can use. */" },
		{ "DisplayName", "Translators" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "List of available translator the subject can use." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators = { "FrameTranslators", nullptr, (EPropertyFlags)0x0020088000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkVirtualSubject, FrameTranslators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_Inner_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available translator the subject can use. */" },
		{ "DisplayName", "Translators" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "List of available translator the subject can use." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_Inner = { "FrameTranslators", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Names of the real subjects to combine into a virtual subject */" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "Names of the real subjects to combine into a virtual subject" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects = { "Subjects", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkVirtualSubject, Subjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects_Inner = { "Subjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Role_MetaData[] = {
		{ "Comment", "/** The role the subject was build with. */" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "The role the subject was build with." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkVirtualSubject, Role), Z_Construct_UClass_ULiveLinkRole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Role,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkVirtualSubject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::ClassParams = {
		&ULiveLinkVirtualSubject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkVirtualSubject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkVirtualSubject, 203526519);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkVirtualSubject>()
	{
		return ULiveLinkVirtualSubject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkVirtualSubject(Z_Construct_UClass_ULiveLinkVirtualSubject, &ULiveLinkVirtualSubject::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkVirtualSubject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkVirtualSubject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
