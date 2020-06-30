// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Core/RodentVRGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRodentVRGameInstance() {}
// Cross Module References
	RODENTVR_API UFunction* Z_Construct_UDelegateFunction_RodentVR_SettingsLoadedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UEnum* Z_Construct_UEnum_RodentVR_PageEnum();
	RODENTVR_API UClass* Z_Construct_UClass_URodentVRGameInstance_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_URodentVRGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeSettings_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_URodentVRSettings_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UToneGenerator_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RodentVR_SettingsLoadedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RodentVR_SettingsLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RodentVR_SettingsLoadedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RodentVR, nullptr, "SettingsLoadedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RodentVR_SettingsLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RodentVR_SettingsLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RodentVR_SettingsLoadedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RodentVR_SettingsLoadedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* PageEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RodentVR_PageEnum, Z_Construct_UPackage__Script_RodentVR(), TEXT("PageEnum"));
		}
		return Singleton;
	}
	template<> RODENTVR_API UEnum* StaticEnum<PageEnum>()
	{
		return PageEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PageEnum(PageEnum_StaticEnum, TEXT("/Script/RodentVR"), TEXT("PageEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RodentVR_PageEnum_Hash() { return 927426283U; }
	UEnum* Z_Construct_UEnum_RodentVR_PageEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RodentVR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PageEnum"), 0, Get_Z_Construct_UEnum_RodentVR_PageEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PageEnum::MAINMENU", (int64)PageEnum::MAINMENU },
				{ "PageEnum::OPTIONS", (int64)PageEnum::OPTIONS },
				{ "PageEnum::OPTIONS_PLAYLIST", (int64)PageEnum::OPTIONS_PLAYLIST },
				{ "PageEnum::EDITOR", (int64)PageEnum::EDITOR },
				{ "PageEnum::SIMULATOR", (int64)PageEnum::SIMULATOR },
				{ "PageEnum::EXIT", (int64)PageEnum::EXIT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EDITOR.DisplayName", "Editor" },
				{ "EDITOR.Name", "PageEnum::EDITOR" },
				{ "EXIT.DisplayName", "Exit" },
				{ "EXIT.Name", "PageEnum::EXIT" },
				{ "MAINMENU.DisplayName", "MainMenu" },
				{ "MAINMENU.Name", "PageEnum::MAINMENU" },
				{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
				{ "OPTIONS.DisplayName", "Options" },
				{ "OPTIONS.Name", "PageEnum::OPTIONS" },
				{ "OPTIONS_PLAYLIST.DisplayName", "Options - Playlist" },
				{ "OPTIONS_PLAYLIST.Name", "PageEnum::OPTIONS_PLAYLIST" },
				{ "SIMULATOR.DisplayName", "Simulator" },
				{ "SIMULATOR.Name", "PageEnum::SIMULATOR" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RodentVR,
				nullptr,
				"PageEnum",
				"PageEnum",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execOnSettingsLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSettingsLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execGetToneGenerator)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UToneGenerator**)Z_Param__Result=P_THIS->GetToneGenerator(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execGoToPage)
	{
		P_GET_ENUM(PageEnum,Z_Param_Page);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToPage(PageEnum(Z_Param_Page));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execGetCurrentPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(PageEnum*)Z_Param__Result=P_THIS->GetCurrentPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execSetIgnoreSettingsChanged)
	{
		P_GET_UBOOL(Z_Param_IgnoreSettingsChangedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIgnoreSettingsChanged(Z_Param_IgnoreSettingsChangedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execGetIgnoreSettingsChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIgnoreSettingsChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execSetSettingsModified)
	{
		P_GET_UBOOL(Z_Param_SettingsModifiedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettingsModified(Z_Param_SettingsModifiedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execGetSettingsModified)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSettingsModified();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execSetCurrentMaze)
	{
		P_GET_OBJECT(UMazeSettings,Z_Param_CurrentMazeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentMaze(Z_Param_CurrentMazeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execGetCurrentMaze)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMazeSettings**)Z_Param__Result=P_THIS->GetCurrentMaze();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execSetRodentVRSettings)
	{
		P_GET_OBJECT(URodentVRSettings,Z_Param_RodentVRSettingsValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRodentVRSettings(Z_Param_RodentVRSettingsValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execGetRodentVRSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URodentVRSettings**)Z_Param__Result=P_THIS->GetRodentVRSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URodentVRGameInstance::execOnRodentVRSettingsChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRodentVRSettingsChanged();
		P_NATIVE_END;
	}
	void URodentVRGameInstance::StaticRegisterNativesURodentVRGameInstance()
	{
		UClass* Class = URodentVRGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentMaze", &URodentVRGameInstance::execGetCurrentMaze },
			{ "GetCurrentPage", &URodentVRGameInstance::execGetCurrentPage },
			{ "GetIgnoreSettingsChanged", &URodentVRGameInstance::execGetIgnoreSettingsChanged },
			{ "GetRodentVRSettings", &URodentVRGameInstance::execGetRodentVRSettings },
			{ "GetSettingsModified", &URodentVRGameInstance::execGetSettingsModified },
			{ "GetToneGenerator", &URodentVRGameInstance::execGetToneGenerator },
			{ "GoToPage", &URodentVRGameInstance::execGoToPage },
			{ "LoadGame", &URodentVRGameInstance::execLoadGame },
			{ "OnRodentVRSettingsChanged", &URodentVRGameInstance::execOnRodentVRSettingsChanged },
			{ "OnSettingsLoaded", &URodentVRGameInstance::execOnSettingsLoaded },
			{ "SaveGame", &URodentVRGameInstance::execSaveGame },
			{ "SetCurrentMaze", &URodentVRGameInstance::execSetCurrentMaze },
			{ "SetIgnoreSettingsChanged", &URodentVRGameInstance::execSetIgnoreSettingsChanged },
			{ "SetRodentVRSettings", &URodentVRGameInstance::execSetRodentVRSettings },
			{ "SetSettingsModified", &URodentVRGameInstance::execSetSettingsModified },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_GetCurrentMaze_Statics
	{
		struct RodentVRGameInstance_eventGetCurrentMaze_Parms
		{
			UMazeSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRGameInstance_GetCurrentMaze_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRGameInstance_eventGetCurrentMaze_Parms, ReturnValue), Z_Construct_UClass_UMazeSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRGameInstance_GetCurrentMaze_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRGameInstance_GetCurrentMaze_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_GetCurrentMaze_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_GetCurrentMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "GetCurrentMaze", nullptr, nullptr, sizeof(RodentVRGameInstance_eventGetCurrentMaze_Parms), Z_Construct_UFunction_URodentVRGameInstance_GetCurrentMaze_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GetCurrentMaze_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_GetCurrentMaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GetCurrentMaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_GetCurrentMaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_GetCurrentMaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage_Statics
	{
		struct RodentVRGameInstance_eventGetCurrentPage_Parms
		{
			PageEnum ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRGameInstance_eventGetCurrentPage_Parms, ReturnValue), Z_Construct_UEnum_RodentVR_PageEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "GetCurrentPage", nullptr, nullptr, sizeof(RodentVRGameInstance_eventGetCurrentPage_Parms), Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged_Statics
	{
		struct RodentVRGameInstance_eventGetIgnoreSettingsChanged_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RodentVRGameInstance_eventGetIgnoreSettingsChanged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RodentVRGameInstance_eventGetIgnoreSettingsChanged_Parms), &Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "GetIgnoreSettingsChanged", nullptr, nullptr, sizeof(RodentVRGameInstance_eventGetIgnoreSettingsChanged_Parms), Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_GetRodentVRSettings_Statics
	{
		struct RodentVRGameInstance_eventGetRodentVRSettings_Parms
		{
			URodentVRSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRGameInstance_GetRodentVRSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRGameInstance_eventGetRodentVRSettings_Parms, ReturnValue), Z_Construct_UClass_URodentVRSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRGameInstance_GetRodentVRSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRGameInstance_GetRodentVRSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_GetRodentVRSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_GetRodentVRSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "GetRodentVRSettings", nullptr, nullptr, sizeof(RodentVRGameInstance_eventGetRodentVRSettings_Parms), Z_Construct_UFunction_URodentVRGameInstance_GetRodentVRSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GetRodentVRSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_GetRodentVRSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GetRodentVRSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_GetRodentVRSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_GetRodentVRSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified_Statics
	{
		struct RodentVRGameInstance_eventGetSettingsModified_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RodentVRGameInstance_eventGetSettingsModified_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RodentVRGameInstance_eventGetSettingsModified_Parms), &Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "GetSettingsModified", nullptr, nullptr, sizeof(RodentVRGameInstance_eventGetSettingsModified_Parms), Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics
	{
		struct RodentVRGameInstance_eventGetToneGenerator_Parms
		{
			UObject* WorldContextObject;
			UToneGenerator* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRGameInstance_eventGetToneGenerator_Parms, ReturnValue), Z_Construct_UClass_UToneGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRGameInstance_eventGetToneGenerator_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "GetToneGenerator", nullptr, nullptr, sizeof(RodentVRGameInstance_eventGetToneGenerator_Parms), Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_GoToPage_Statics
	{
		struct RodentVRGameInstance_eventGoToPage_Parms
		{
			PageEnum Page;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Page;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Page_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URodentVRGameInstance_GoToPage_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRGameInstance_eventGoToPage_Parms, Page), Z_Construct_UEnum_RodentVR_PageEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URodentVRGameInstance_GoToPage_Statics::NewProp_Page_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRGameInstance_GoToPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRGameInstance_GoToPage_Statics::NewProp_Page,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRGameInstance_GoToPage_Statics::NewProp_Page_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_GoToPage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_GoToPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "GoToPage", nullptr, nullptr, sizeof(RodentVRGameInstance_eventGoToPage_Parms), Z_Construct_UFunction_URodentVRGameInstance_GoToPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GoToPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_GoToPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_GoToPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_GoToPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_GoToPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_LoadGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "LoadGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_LoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_LoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_OnRodentVRSettingsChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_OnRodentVRSettingsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_OnRodentVRSettingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "OnRodentVRSettingsChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_OnRodentVRSettingsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_OnRodentVRSettingsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_OnRodentVRSettingsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_OnRodentVRSettingsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_OnSettingsLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_OnSettingsLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_OnSettingsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "OnSettingsLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_OnSettingsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_OnSettingsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_OnSettingsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_OnSettingsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_SaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "SaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_SaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_SetCurrentMaze_Statics
	{
		struct RodentVRGameInstance_eventSetCurrentMaze_Parms
		{
			UMazeSettings* CurrentMazeValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMazeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRGameInstance_SetCurrentMaze_Statics::NewProp_CurrentMazeValue = { "CurrentMazeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRGameInstance_eventSetCurrentMaze_Parms, CurrentMazeValue), Z_Construct_UClass_UMazeSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRGameInstance_SetCurrentMaze_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRGameInstance_SetCurrentMaze_Statics::NewProp_CurrentMazeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_SetCurrentMaze_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_SetCurrentMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "SetCurrentMaze", nullptr, nullptr, sizeof(RodentVRGameInstance_eventSetCurrentMaze_Parms), Z_Construct_UFunction_URodentVRGameInstance_SetCurrentMaze_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_SetCurrentMaze_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_SetCurrentMaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_SetCurrentMaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_SetCurrentMaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_SetCurrentMaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged_Statics
	{
		struct RodentVRGameInstance_eventSetIgnoreSettingsChanged_Parms
		{
			bool IgnoreSettingsChangedValue;
		};
		static void NewProp_IgnoreSettingsChangedValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreSettingsChangedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged_Statics::NewProp_IgnoreSettingsChangedValue_SetBit(void* Obj)
	{
		((RodentVRGameInstance_eventSetIgnoreSettingsChanged_Parms*)Obj)->IgnoreSettingsChangedValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged_Statics::NewProp_IgnoreSettingsChangedValue = { "IgnoreSettingsChangedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RodentVRGameInstance_eventSetIgnoreSettingsChanged_Parms), &Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged_Statics::NewProp_IgnoreSettingsChangedValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged_Statics::NewProp_IgnoreSettingsChangedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "SetIgnoreSettingsChanged", nullptr, nullptr, sizeof(RodentVRGameInstance_eventSetIgnoreSettingsChanged_Parms), Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_SetRodentVRSettings_Statics
	{
		struct RodentVRGameInstance_eventSetRodentVRSettings_Parms
		{
			URodentVRSettings* RodentVRSettingsValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RodentVRSettingsValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URodentVRGameInstance_SetRodentVRSettings_Statics::NewProp_RodentVRSettingsValue = { "RodentVRSettingsValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RodentVRGameInstance_eventSetRodentVRSettings_Parms, RodentVRSettingsValue), Z_Construct_UClass_URodentVRSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRGameInstance_SetRodentVRSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRGameInstance_SetRodentVRSettings_Statics::NewProp_RodentVRSettingsValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_SetRodentVRSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_SetRodentVRSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "SetRodentVRSettings", nullptr, nullptr, sizeof(RodentVRGameInstance_eventSetRodentVRSettings_Parms), Z_Construct_UFunction_URodentVRGameInstance_SetRodentVRSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_SetRodentVRSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_SetRodentVRSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_SetRodentVRSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_SetRodentVRSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_SetRodentVRSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified_Statics
	{
		struct RodentVRGameInstance_eventSetSettingsModified_Parms
		{
			bool SettingsModifiedValue;
		};
		static void NewProp_SettingsModifiedValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SettingsModifiedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified_Statics::NewProp_SettingsModifiedValue_SetBit(void* Obj)
	{
		((RodentVRGameInstance_eventSetSettingsModified_Parms*)Obj)->SettingsModifiedValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified_Statics::NewProp_SettingsModifiedValue = { "SettingsModifiedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RodentVRGameInstance_eventSetSettingsModified_Parms), &Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified_Statics::NewProp_SettingsModifiedValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified_Statics::NewProp_SettingsModifiedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URodentVRGameInstance, nullptr, "SetSettingsModified", nullptr, nullptr, sizeof(RodentVRGameInstance_eventSetSettingsModified_Parms), Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URodentVRGameInstance_NoRegister()
	{
		return URodentVRGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_URodentVRGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSettingsLoadedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSettingsLoadedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreSettingsChanged_MetaData[];
#endif
		static void NewProp_IgnoreSettingsChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreSettingsChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsModified_MetaData[];
#endif
		static void NewProp_SettingsModified_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SettingsModified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToneGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToneGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentPage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentPage_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMaze_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMaze;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RodentVRSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RodentVRSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URodentVRGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URodentVRGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URodentVRGameInstance_GetCurrentMaze, "GetCurrentMaze" }, // 4211846212
		{ &Z_Construct_UFunction_URodentVRGameInstance_GetCurrentPage, "GetCurrentPage" }, // 2175246870
		{ &Z_Construct_UFunction_URodentVRGameInstance_GetIgnoreSettingsChanged, "GetIgnoreSettingsChanged" }, // 657140715
		{ &Z_Construct_UFunction_URodentVRGameInstance_GetRodentVRSettings, "GetRodentVRSettings" }, // 4186635638
		{ &Z_Construct_UFunction_URodentVRGameInstance_GetSettingsModified, "GetSettingsModified" }, // 3809426332
		{ &Z_Construct_UFunction_URodentVRGameInstance_GetToneGenerator, "GetToneGenerator" }, // 1351411071
		{ &Z_Construct_UFunction_URodentVRGameInstance_GoToPage, "GoToPage" }, // 1660080346
		{ &Z_Construct_UFunction_URodentVRGameInstance_LoadGame, "LoadGame" }, // 2736970949
		{ &Z_Construct_UFunction_URodentVRGameInstance_OnRodentVRSettingsChanged, "OnRodentVRSettingsChanged" }, // 1413390599
		{ &Z_Construct_UFunction_URodentVRGameInstance_OnSettingsLoaded, "OnSettingsLoaded" }, // 2777076976
		{ &Z_Construct_UFunction_URodentVRGameInstance_SaveGame, "SaveGame" }, // 1227962556
		{ &Z_Construct_UFunction_URodentVRGameInstance_SetCurrentMaze, "SetCurrentMaze" }, // 1263528983
		{ &Z_Construct_UFunction_URodentVRGameInstance_SetIgnoreSettingsChanged, "SetIgnoreSettingsChanged" }, // 1181839056
		{ &Z_Construct_UFunction_URodentVRGameInstance_SetRodentVRSettings, "SetRodentVRSettings" }, // 1600683691
		{ &Z_Construct_UFunction_URodentVRGameInstance_SetSettingsModified, "SetSettingsModified" }, // 1676907498
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRGameInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Core/RodentVRGameInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_OnSettingsLoadedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_OnSettingsLoadedDelegate = { "OnSettingsLoadedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRGameInstance, OnSettingsLoadedDelegate), Z_Construct_UDelegateFunction_RodentVR_SettingsLoadedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_OnSettingsLoadedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_OnSettingsLoadedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_IgnoreSettingsChanged_MetaData[] = {
		{ "BlueprintGetter", "GetIgnoreSettingsChanged" },
		{ "BlueprintSetter", "SetIgnoreSettingsChanged" },
		{ "Category", "RodentVRGameInstance" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_IgnoreSettingsChanged_SetBit(void* Obj)
	{
		((URodentVRGameInstance*)Obj)->IgnoreSettingsChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_IgnoreSettingsChanged = { "IgnoreSettingsChanged", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URodentVRGameInstance), &Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_IgnoreSettingsChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_IgnoreSettingsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_IgnoreSettingsChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_SettingsModified_MetaData[] = {
		{ "BlueprintGetter", "GetSettingsModified" },
		{ "BlueprintSetter", "SetSettingsModified" },
		{ "Category", "RodentVRGameInstance" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_SettingsModified_SetBit(void* Obj)
	{
		((URodentVRGameInstance*)Obj)->SettingsModified = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_SettingsModified = { "SettingsModified", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URodentVRGameInstance), &Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_SettingsModified_SetBit, METADATA_PARAMS(Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_SettingsModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_SettingsModified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_ToneGenerator_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_ToneGenerator = { "ToneGenerator", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRGameInstance, ToneGenerator), Z_Construct_UClass_UToneGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_ToneGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_ToneGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_CurrentPage_MetaData[] = {
		{ "BlueprintGetter", "GetCurrentPage" },
		{ "Category", "RodentVRGameInstance" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_CurrentPage = { "CurrentPage", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRGameInstance, CurrentPage), Z_Construct_UEnum_RodentVR_PageEnum, METADATA_PARAMS(Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_CurrentPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_CurrentPage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_CurrentPage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_CurrentMaze_MetaData[] = {
		{ "BlueprintGetter", "GetCurrentMaze" },
		{ "BlueprintSetter", "SetCurrentMaze" },
		{ "Category", "RodentVRGameInstance" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_CurrentMaze = { "CurrentMaze", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRGameInstance, CurrentMaze), Z_Construct_UClass_UMazeSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_CurrentMaze_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_CurrentMaze_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_RodentVRSettings_MetaData[] = {
		{ "BlueprintGetter", "GetRodentVRSettings" },
		{ "BlueprintSetter", "SetRodentVRSettings" },
		{ "Category", "RodentVRGameInstance" },
		{ "ModuleRelativePath", "Private/Core/RodentVRGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_RodentVRSettings = { "RodentVRSettings", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URodentVRGameInstance, RodentVRSettings), Z_Construct_UClass_URodentVRSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_RodentVRSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_RodentVRSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URodentVRGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_OnSettingsLoadedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_IgnoreSettingsChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_SettingsModified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_ToneGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_CurrentPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_CurrentPage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_CurrentMaze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URodentVRGameInstance_Statics::NewProp_RodentVRSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URodentVRGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URodentVRGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URodentVRGameInstance_Statics::ClassParams = {
		&URodentVRGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URodentVRGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRGameInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URodentVRGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URodentVRGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URodentVRGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URodentVRGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URodentVRGameInstance, 2863019473);
	template<> RODENTVR_API UClass* StaticClass<URodentVRGameInstance>()
	{
		return URodentVRGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URodentVRGameInstance(Z_Construct_UClass_URodentVRGameInstance, &URodentVRGameInstance::StaticClass, TEXT("/Script/RodentVR"), TEXT("URodentVRGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URodentVRGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
