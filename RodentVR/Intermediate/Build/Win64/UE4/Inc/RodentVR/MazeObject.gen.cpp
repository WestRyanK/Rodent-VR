// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Simulator/MazeObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeObject() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_AMazeObject_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_AMazeObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeObjectSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMazeObject::execGetMazeObjectTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=AMazeObject::GetMazeObjectTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeObject::execUpdateFromSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFromSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeObject::execSetSettings)
	{
		P_GET_OBJECT(UMazeObjectSettings,Z_Param_SettingsValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_SettingsValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeObject::execGetSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMazeObjectSettings**)Z_Param__Result=P_THIS->GetSettings();
		P_NATIVE_END;
	}
	void AMazeObject::StaticRegisterNativesAMazeObject()
	{
		UClass* Class = AMazeObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMazeObjectTag", &AMazeObject::execGetMazeObjectTag },
			{ "GetSettings", &AMazeObject::execGetSettings },
			{ "SetSettings", &AMazeObject::execSetSettings },
			{ "UpdateFromSettings", &AMazeObject::execUpdateFromSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMazeObject_GetMazeObjectTag_Statics
	{
		struct MazeObject_eventGetMazeObjectTag_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMazeObject_GetMazeObjectTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObject_eventGetMazeObjectTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeObject_GetMazeObjectTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeObject_GetMazeObjectTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeObject_GetMazeObjectTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/MazeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeObject_GetMazeObjectTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeObject, nullptr, "GetMazeObjectTag", nullptr, nullptr, sizeof(MazeObject_eventGetMazeObjectTag_Parms), Z_Construct_UFunction_AMazeObject_GetMazeObjectTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_GetMazeObjectTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeObject_GetMazeObjectTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_GetMazeObjectTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeObject_GetMazeObjectTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeObject_GetMazeObjectTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeObject_GetSettings_Statics
	{
		struct MazeObject_eventGetSettings_Parms
		{
			UMazeObjectSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMazeObject_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObject_eventGetSettings_Parms, ReturnValue), Z_Construct_UClass_UMazeObjectSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeObject_GetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeObject_GetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeObject_GetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Simulator/MazeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeObject_GetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeObject, nullptr, "GetSettings", nullptr, nullptr, sizeof(MazeObject_eventGetSettings_Parms), Z_Construct_UFunction_AMazeObject_GetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_GetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeObject_GetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_GetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeObject_GetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeObject_GetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeObject_SetSettings_Statics
	{
		struct MazeObject_eventSetSettings_Parms
		{
			UMazeObjectSettings* SettingsValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingsValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMazeObject_SetSettings_Statics::NewProp_SettingsValue = { "SettingsValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObject_eventSetSettings_Parms, SettingsValue), Z_Construct_UClass_UMazeObjectSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeObject_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeObject_SetSettings_Statics::NewProp_SettingsValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeObject_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Simulator/MazeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeObject_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeObject, nullptr, "SetSettings", nullptr, nullptr, sizeof(MazeObject_eventSetSettings_Parms), Z_Construct_UFunction_AMazeObject_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeObject_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeObject_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeObject_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeObject_UpdateFromSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeObject_UpdateFromSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/MazeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeObject_UpdateFromSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeObject, nullptr, "UpdateFromSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeObject_UpdateFromSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_UpdateFromSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeObject_UpdateFromSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeObject_UpdateFromSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMazeObject_NoRegister()
	{
		return AMazeObject::StaticClass();
	}
	struct Z_Construct_UClass_AMazeObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMazeObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMazeObject_GetMazeObjectTag, "GetMazeObjectTag" }, // 1251226271
		{ &Z_Construct_UFunction_AMazeObject_GetSettings, "GetSettings" }, // 3553136087
		{ &Z_Construct_UFunction_AMazeObject_SetSettings, "SetSettings" }, // 1998082762
		{ &Z_Construct_UFunction_AMazeObject_UpdateFromSettings, "UpdateFromSettings" }, // 4171207200
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Simulator/MazeObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Simulator/MazeObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeObject_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Simulator/MazeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeObject_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeObject, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeObject_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeObject_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeObject_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintGetter", "GetSettings" },
		{ "BlueprintSetter", "SetSettings" },
		{ "Category", "MazeObject" },
		{ "ModuleRelativePath", "Private/Simulator/MazeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeObject_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeObject, Settings), Z_Construct_UClass_UMazeObjectSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeObject_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeObject_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeObject_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeObject_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMazeObject_Statics::ClassParams = {
		&AMazeObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMazeObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMazeObject_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMazeObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazeObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMazeObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMazeObject, 934375757);
	template<> RODENTVR_API UClass* StaticClass<AMazeObject>()
	{
		return AMazeObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMazeObject(Z_Construct_UClass_AMazeObject, &AMazeObject::StaticClass, TEXT("/Script/RodentVR"), TEXT("AMazeObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
