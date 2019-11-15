// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Hardware/BallInput/BallInputComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallInputComponent() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UBallInputComponent_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UBallInputComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	void UBallInputComponent::StaticRegisterNativesUBallInputComponent()
	{
	}
	UClass* Z_Construct_UClass_UBallInputComponent_NoRegister()
	{
		return UBallInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBallInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBallInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBallInputComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Hardware/BallInput/BallInputComponent.h" },
		{ "ModuleRelativePath", "Private/Hardware/BallInput/BallInputComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBallInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBallInputComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBallInputComponent_Statics::ClassParams = {
		&UBallInputComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBallInputComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBallInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBallInputComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBallInputComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBallInputComponent, 1809548256);
	template<> RODENTVR_API UClass* StaticClass<UBallInputComponent>()
	{
		return UBallInputComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBallInputComponent(Z_Construct_UClass_UBallInputComponent, &UBallInputComponent::StaticClass, TEXT("/Script/RodentVR"), TEXT("UBallInputComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBallInputComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
