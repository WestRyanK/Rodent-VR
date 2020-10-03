// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/BehaviorRecording/BehaviorPathNodeObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorPathNodeObject() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_ABehaviorPathNodeObject_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_ABehaviorPathNodeObject();
	RODENTVR_API UClass* Z_Construct_UClass_ASimpleObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(ABehaviorPathNodeObject::execGetBehaviorPathNodeObjectTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=ABehaviorPathNodeObject::GetBehaviorPathNodeObjectTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABehaviorPathNodeObject::execUpdateNodeObject)
	{
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_GET_STRUCT(FVector,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateNodeObject(Z_Param_Position,Z_Param_Rotation,Z_Param_Scale,Z_Param_Color);
		P_NATIVE_END;
	}
	void ABehaviorPathNodeObject::StaticRegisterNativesABehaviorPathNodeObject()
	{
		UClass* Class = ABehaviorPathNodeObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBehaviorPathNodeObjectTag", &ABehaviorPathNodeObject::execGetBehaviorPathNodeObjectTag },
			{ "UpdateNodeObject", &ABehaviorPathNodeObject::execUpdateNodeObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABehaviorPathNodeObject_GetBehaviorPathNodeObjectTag_Statics
	{
		struct BehaviorPathNodeObject_eventGetBehaviorPathNodeObjectTag_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABehaviorPathNodeObject_GetBehaviorPathNodeObjectTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPathNodeObject_eventGetBehaviorPathNodeObjectTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABehaviorPathNodeObject_GetBehaviorPathNodeObjectTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPathNodeObject_GetBehaviorPathNodeObjectTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABehaviorPathNodeObject_GetBehaviorPathNodeObjectTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPathNodeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABehaviorPathNodeObject_GetBehaviorPathNodeObjectTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABehaviorPathNodeObject, nullptr, "GetBehaviorPathNodeObjectTag", nullptr, nullptr, sizeof(BehaviorPathNodeObject_eventGetBehaviorPathNodeObjectTag_Parms), Z_Construct_UFunction_ABehaviorPathNodeObject_GetBehaviorPathNodeObjectTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPathNodeObject_GetBehaviorPathNodeObjectTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABehaviorPathNodeObject_GetBehaviorPathNodeObjectTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPathNodeObject_GetBehaviorPathNodeObjectTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABehaviorPathNodeObject_GetBehaviorPathNodeObjectTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABehaviorPathNodeObject_GetBehaviorPathNodeObjectTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics
	{
		struct BehaviorPathNodeObject_eventUpdateNodeObject_Parms
		{
			FVector Position;
			FRotator Rotation;
			FVector Scale;
			FVector Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPathNodeObject_eventUpdateNodeObject_Parms, Color), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPathNodeObject_eventUpdateNodeObject_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPathNodeObject_eventUpdateNodeObject_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPathNodeObject_eventUpdateNodeObject_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPathNodeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABehaviorPathNodeObject, nullptr, "UpdateNodeObject", nullptr, nullptr, sizeof(BehaviorPathNodeObject_eventUpdateNodeObject_Parms), Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABehaviorPathNodeObject_NoRegister()
	{
		return ABehaviorPathNodeObject::StaticClass();
	}
	struct Z_Construct_UClass_ABehaviorPathNodeObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABehaviorPathNodeObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASimpleObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABehaviorPathNodeObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABehaviorPathNodeObject_GetBehaviorPathNodeObjectTag, "GetBehaviorPathNodeObjectTag" }, // 2260781034
		{ &Z_Construct_UFunction_ABehaviorPathNodeObject_UpdateNodeObject, "UpdateNodeObject" }, // 2118511239
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABehaviorPathNodeObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorRecording/BehaviorPathNodeObject.h" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPathNodeObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABehaviorPathNodeObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABehaviorPathNodeObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABehaviorPathNodeObject_Statics::ClassParams = {
		&ABehaviorPathNodeObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABehaviorPathNodeObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABehaviorPathNodeObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABehaviorPathNodeObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABehaviorPathNodeObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABehaviorPathNodeObject, 2216119636);
	template<> RODENTVR_API UClass* StaticClass<ABehaviorPathNodeObject>()
	{
		return ABehaviorPathNodeObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABehaviorPathNodeObject(Z_Construct_UClass_ABehaviorPathNodeObject, &ABehaviorPathNodeObject::StaticClass, TEXT("/Script/RodentVR"), TEXT("ABehaviorPathNodeObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABehaviorPathNodeObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
