// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Simulator/RegionBoxComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRegionBoxComponent() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_URegionBoxComponent_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_URegionBoxComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_UFocusableObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URegionBoxComponent::execSetLineThickness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_LineThicknessValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLineThickness(Z_Param_LineThicknessValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URegionBoxComponent::execGetLineThickness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLineThickness();
		P_NATIVE_END;
	}
	void URegionBoxComponent::StaticRegisterNativesURegionBoxComponent()
	{
		UClass* Class = URegionBoxComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLineThickness", &URegionBoxComponent::execGetLineThickness },
			{ "SetLineThickness", &URegionBoxComponent::execSetLineThickness },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URegionBoxComponent_GetLineThickness_Statics
	{
		struct RegionBoxComponent_eventGetLineThickness_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URegionBoxComponent_GetLineThickness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RegionBoxComponent_eventGetLineThickness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionBoxComponent_GetLineThickness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionBoxComponent_GetLineThickness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegionBoxComponent_GetLineThickness_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Simulator/RegionBoxComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionBoxComponent_GetLineThickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegionBoxComponent, nullptr, "GetLineThickness", nullptr, nullptr, sizeof(RegionBoxComponent_eventGetLineThickness_Parms), Z_Construct_UFunction_URegionBoxComponent_GetLineThickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionBoxComponent_GetLineThickness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URegionBoxComponent_GetLineThickness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionBoxComponent_GetLineThickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URegionBoxComponent_GetLineThickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URegionBoxComponent_GetLineThickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URegionBoxComponent_SetLineThickness_Statics
	{
		struct RegionBoxComponent_eventSetLineThickness_Parms
		{
			float LineThicknessValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThicknessValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URegionBoxComponent_SetLineThickness_Statics::NewProp_LineThicknessValue = { "LineThicknessValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RegionBoxComponent_eventSetLineThickness_Parms, LineThicknessValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegionBoxComponent_SetLineThickness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegionBoxComponent_SetLineThickness_Statics::NewProp_LineThicknessValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegionBoxComponent_SetLineThickness_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Simulator/RegionBoxComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URegionBoxComponent_SetLineThickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegionBoxComponent, nullptr, "SetLineThickness", nullptr, nullptr, sizeof(RegionBoxComponent_eventSetLineThickness_Parms), Z_Construct_UFunction_URegionBoxComponent_SetLineThickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionBoxComponent_SetLineThickness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URegionBoxComponent_SetLineThickness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URegionBoxComponent_SetLineThickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URegionBoxComponent_SetLineThickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URegionBoxComponent_SetLineThickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URegionBoxComponent_NoRegister()
	{
		return URegionBoxComponent::StaticClass();
	}
	struct Z_Construct_UClass_URegionBoxComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URegionBoxComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URegionBoxComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URegionBoxComponent_GetLineThickness, "GetLineThickness" }, // 2794293539
		{ &Z_Construct_UFunction_URegionBoxComponent_SetLineThickness, "SetLineThickness" }, // 3038109200
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URegionBoxComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Collision" },
		{ "DisplayName", "Box Collision" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Simulator/RegionBoxComponent.h" },
		{ "ModuleRelativePath", "Private/Simulator/RegionBoxComponent.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URegionBoxComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFocusableObject_NoRegister, (int32)VTABLE_OFFSET(URegionBoxComponent, IFocusableObject), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URegionBoxComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URegionBoxComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URegionBoxComponent_Statics::ClassParams = {
		&URegionBoxComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_URegionBoxComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URegionBoxComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URegionBoxComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URegionBoxComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URegionBoxComponent, 3847282194);
	template<> RODENTVR_API UClass* StaticClass<URegionBoxComponent>()
	{
		return URegionBoxComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URegionBoxComponent(Z_Construct_UClass_URegionBoxComponent, &URegionBoxComponent::StaticClass, TEXT("/Script/RodentVR"), TEXT("URegionBoxComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URegionBoxComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
