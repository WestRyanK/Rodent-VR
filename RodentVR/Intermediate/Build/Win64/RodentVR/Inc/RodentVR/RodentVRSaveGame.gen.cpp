// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Core/RodentVRSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRodentVRSaveGame() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_URodentVRSaveGame_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_URodentVRSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	DEFINE_FUNCTION(URodentVRSaveGame::execSetRodentVRSettingsFileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RodentVRSettingsFileNameValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRodentVRSettingsFileName(Z_Param_RodentVRSettingsFileNameValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRSaveGame::execGetRodentVRSettingsFileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRodentVRSettingsFileName();
		P_NATIVE_END;
	}
	void URodentVRSaveGame::StaticRegisterNativesURodentVRSaveGame()
	{
		UClass* Class = URodentVRSaveGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRodentVRSettingsFileName", &URodentVRSaveGame::execGetRodentVRSettingsFileName },
			{ "SetRodentVRSettingsFileName", &URodentVRSaveGame::execSetRodentVRSettingsFileName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URodentVRSaveGame_GetRodentVRSettingsFileName_Statics
	{
		struct RodentVRSaveGame_eventGetRodentVRSettingsFileName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URodentVRSaveGame_GetRodentVRSettingsFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSaveGame_eventGetRodentVRSettingsFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSaveGame_GetRodentVRSettingsFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSaveGame_GetRodentVRSettingsFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSaveGame_GetRodentVRSettingsFileName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Core/RodentVRSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSaveGame_GetRodentVRSettingsFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSaveGame, nullptr, "GetRodentVRSettingsFileName", nullptr, nullptr, sizeof(RodentVRSaveGame_eventGetRodentVRSettingsFileName_Parms), Z_Construct_UFunction_URodentVRSaveGame_GetRodentVRSettingsFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSaveGame_GetRodentVRSettingsFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSaveGame_GetRodentVRSettingsFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSaveGame_GetRodentVRSettingsFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSaveGame_GetRodentVRSettingsFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSaveGame_GetRodentVRSettingsFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRSaveGame_SetRodentVRSettingsFileName_Statics
	{
		struct RodentVRSaveGame_eventSetRodentVRSettingsFileName_Parms
		{
			FString RodentVRSettingsFileNameValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RodentVRSettingsFileNameValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URodentVRSaveGame_SetRodentVRSettingsFileName_Statics::NewProp_RodentVRSettingsFileNameValue = { "RodentVRSettingsFileNameValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRSaveGame_eventSetRodentVRSettingsFileName_Parms, RodentVRSettingsFileNameValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRSaveGame_SetRodentVRSettingsFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRSaveGame_SetRodentVRSettingsFileName_Statics::NewProp_RodentVRSettingsFileNameValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRSaveGame_SetRodentVRSettingsFileName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Core/RodentVRSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRSaveGame_SetRodentVRSettingsFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRSaveGame, nullptr, "SetRodentVRSettingsFileName", nullptr, nullptr, sizeof(RodentVRSaveGame_eventSetRodentVRSettingsFileName_Parms), Z_Construct_UFunction_URodentVRSaveGame_SetRodentVRSettingsFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSaveGame_SetRodentVRSettingsFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRSaveGame_SetRodentVRSettingsFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRSaveGame_SetRodentVRSettingsFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRSaveGame_SetRodentVRSettingsFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRSaveGame_SetRodentVRSettingsFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URodentVRSaveGame_NoRegister()
	{
		return URodentVRSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_URodentVRSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RodentVRSettingsFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RodentVRSettingsFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URodentVRSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URodentVRSaveGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URodentVRSaveGame_GetRodentVRSettingsFileName, "GetRodentVRSettingsFileName" }, // 3327635415
		{ &Z_Construct_UFunction_URodentVRSaveGame_SetRodentVRSettingsFileName, "SetRodentVRSettingsFileName" }, // 1216860857
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Core/RodentVRSaveGame.h" },
		{ "ModuleRelativePath", "Private/Core/RodentVRSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRSaveGame_Statics::NewProp_RodentVRSettingsFileName_MetaData[] = {
		{ "BlueprintGetter", "GetRodentVRSettingsFileName" },
		{ "BlueprintSetter", "SetRodentVRSettingsFileName" },
		{ "Category", "RodentVRSaveGame" },
		{ "ModuleRelativePath", "Private/Core/RodentVRSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URodentVRSaveGame_Statics::NewProp_RodentVRSettingsFileName = { "RodentVRSettingsFileName", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRSaveGame, RodentVRSettingsFileName), METADATA_PARAMS(Z_Construct_UClass_URodentVRSaveGame_Statics::NewProp_RodentVRSettingsFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSaveGame_Statics::NewProp_RodentVRSettingsFileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URodentVRSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRSaveGame_Statics::NewProp_RodentVRSettingsFileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URodentVRSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URodentVRSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URodentVRSaveGame_Statics::ClassParams = {
		&URodentVRSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URodentVRSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSaveGame_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URodentVRSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URodentVRSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URodentVRSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URodentVRSaveGame, 3239437155);
	template<> RODENTVR_API UClass* StaticClass<URodentVRSaveGame>()
	{
		return URodentVRSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URodentVRSaveGame(Z_Construct_UClass_URodentVRSaveGame, &URodentVRSaveGame::StaticClass, TEXT("/Script/RodentVR"), TEXT("URodentVRSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URodentVRSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
