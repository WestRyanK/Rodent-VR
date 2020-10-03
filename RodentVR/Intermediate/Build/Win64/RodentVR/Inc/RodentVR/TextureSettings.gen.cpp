// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/TextureSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureSettings() {}
// Cross Module References
	RODENTVR_API UEnum* Z_Construct_UEnum_RodentVR_TextureEnum();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UClass* Z_Construct_UClass_UTextureSettings_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UTextureSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* TextureEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RodentVR_TextureEnum, Z_Construct_UPackage__Script_RodentVR(), TEXT("TextureEnum"));
		}
		return Singleton;
	}
	template<> RODENTVR_API UEnum* StaticEnum<TextureEnum>()
	{
		return TextureEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TextureEnum(TextureEnum_StaticEnum, TEXT("/Script/RodentVR"), TEXT("TextureEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RodentVR_TextureEnum_Hash() { return 4275415372U; }
	UEnum* Z_Construct_UEnum_RodentVR_TextureEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RodentVR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TextureEnum"), 0, Get_Z_Construct_UEnum_RodentVR_TextureEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TextureEnum::CHECKERS_LARGE", (int64)TextureEnum::CHECKERS_LARGE },
				{ "TextureEnum::CHECKERS_MEDIUM", (int64)TextureEnum::CHECKERS_MEDIUM },
				{ "TextureEnum::CHECKERS_SMALL", (int64)TextureEnum::CHECKERS_SMALL },
				{ "TextureEnum::STRIPES_LARGE", (int64)TextureEnum::STRIPES_LARGE },
				{ "TextureEnum::STRIPES_SMALL", (int64)TextureEnum::STRIPES_SMALL },
				{ "TextureEnum::DOTS_1", (int64)TextureEnum::DOTS_1 },
				{ "TextureEnum::DOTS_2", (int64)TextureEnum::DOTS_2 },
				{ "TextureEnum::BLACK", (int64)TextureEnum::BLACK },
				{ "TextureEnum::GRAY", (int64)TextureEnum::GRAY },
				{ "TextureEnum::WHITE", (int64)TextureEnum::WHITE },
				{ "TextureEnum::GREEN", (int64)TextureEnum::GREEN },
				{ "TextureEnum::BLUE", (int64)TextureEnum::BLUE },
				{ "TextureEnum::CYAN", (int64)TextureEnum::CYAN },
				{ "TextureEnum::CUSTOM", (int64)TextureEnum::CUSTOM },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BLACK.DisplayName", "Black" },
				{ "BLACK.Name", "TextureEnum::BLACK" },
				{ "BLUE.DisplayName", "Blue" },
				{ "BLUE.Name", "TextureEnum::BLUE" },
				{ "BlueprintType", "true" },
				{ "CHECKERS_LARGE.DisplayName", "Checkers Large" },
				{ "CHECKERS_LARGE.Name", "TextureEnum::CHECKERS_LARGE" },
				{ "CHECKERS_MEDIUM.DisplayName", "Checkers Medium" },
				{ "CHECKERS_MEDIUM.Name", "TextureEnum::CHECKERS_MEDIUM" },
				{ "CHECKERS_SMALL.DisplayName", "Checkers Small" },
				{ "CHECKERS_SMALL.Name", "TextureEnum::CHECKERS_SMALL" },
				{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCustomTextureChangedDelegate, FString, CustomTexturePath);\n" },
				{ "CUSTOM.DisplayName", "Custom..." },
				{ "CUSTOM.Name", "TextureEnum::CUSTOM" },
				{ "CYAN.DisplayName", "Cyan" },
				{ "CYAN.Name", "TextureEnum::CYAN" },
				{ "DOTS_1.DisplayName", "Dots 1" },
				{ "DOTS_1.Name", "TextureEnum::DOTS_1" },
				{ "DOTS_2.DisplayName", "Dots 2" },
				{ "DOTS_2.Name", "TextureEnum::DOTS_2" },
				{ "GRAY.DisplayName", "Gray" },
				{ "GRAY.Name", "TextureEnum::GRAY" },
				{ "GREEN.DisplayName", "Green" },
				{ "GREEN.Name", "TextureEnum::GREEN" },
				{ "ModuleRelativePath", "Private/Settings/TextureSettings.h" },
				{ "STRIPES_LARGE.DisplayName", "Stripes Large" },
				{ "STRIPES_LARGE.Name", "TextureEnum::STRIPES_LARGE" },
				{ "STRIPES_SMALL.DisplayName", "Stripes Small" },
				{ "STRIPES_SMALL.Name", "TextureEnum::STRIPES_SMALL" },
				{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCustomTextureChangedDelegate, FString, CustomTexturePath);" },
				{ "WHITE.DisplayName", "White" },
				{ "WHITE.Name", "TextureEnum::WHITE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RodentVR,
				nullptr,
				"TextureEnum",
				"TextureEnum",
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
	DEFINE_FUNCTION(UTextureSettings::execGetTextureEnumString)
	{
		P_GET_ENUM(TextureEnum,Z_Param_TextureValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UTextureSettings::GetTextureEnumString(TextureEnum(Z_Param_TextureValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextureSettings::execGetTextureEnumFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TextureEnumString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TextureEnum*)Z_Param__Result=UTextureSettings::GetTextureEnumFromString(Z_Param_TextureEnumString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextureSettings::execSetCustomTexturePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CustomTexturePathValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomTexturePath(Z_Param_CustomTexturePathValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextureSettings::execGetCustomTexturePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCustomTexturePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextureSettings::execSetTexture)
	{
		P_GET_ENUM(TextureEnum,Z_Param_TextureValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTexture(TextureEnum(Z_Param_TextureValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextureSettings::execGetTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TextureEnum*)Z_Param__Result=P_THIS->GetTexture();
		P_NATIVE_END;
	}
	void UTextureSettings::StaticRegisterNativesUTextureSettings()
	{
		UClass* Class = UTextureSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomTexturePath", &UTextureSettings::execGetCustomTexturePath },
			{ "GetTexture", &UTextureSettings::execGetTexture },
			{ "GetTextureEnumFromString", &UTextureSettings::execGetTextureEnumFromString },
			{ "GetTextureEnumString", &UTextureSettings::execGetTextureEnumString },
			{ "SetCustomTexturePath", &UTextureSettings::execSetCustomTexturePath },
			{ "SetTexture", &UTextureSettings::execSetTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextureSettings_GetCustomTexturePath_Statics
	{
		struct TextureSettings_eventGetCustomTexturePath_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextureSettings_GetCustomTexturePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextureSettings_eventGetCustomTexturePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureSettings_GetCustomTexturePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSettings_GetCustomTexturePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureSettings_GetCustomTexturePath_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/TextureSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureSettings_GetCustomTexturePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureSettings, nullptr, "GetCustomTexturePath", nullptr, nullptr, sizeof(TextureSettings_eventGetCustomTexturePath_Parms), Z_Construct_UFunction_UTextureSettings_GetCustomTexturePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSettings_GetCustomTexturePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextureSettings_GetCustomTexturePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSettings_GetCustomTexturePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextureSettings_GetCustomTexturePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextureSettings_GetCustomTexturePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextureSettings_GetTexture_Statics
	{
		struct TextureSettings_eventGetTexture_Parms
		{
			TextureEnum ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTextureSettings_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextureSettings_eventGetTexture_Parms, ReturnValue), Z_Construct_UEnum_RodentVR_TextureEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextureSettings_GetTexture_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureSettings_GetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSettings_GetTexture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSettings_GetTexture_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureSettings_GetTexture_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/TextureSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureSettings_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureSettings, nullptr, "GetTexture", nullptr, nullptr, sizeof(TextureSettings_eventGetTexture_Parms), Z_Construct_UFunction_UTextureSettings_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSettings_GetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextureSettings_GetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSettings_GetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextureSettings_GetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextureSettings_GetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics
	{
		struct TextureSettings_eventGetTextureEnumFromString_Parms
		{
			FString TextureEnumString;
			TextureEnum ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextureEnumString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextureSettings_eventGetTextureEnumFromString_Parms, ReturnValue), Z_Construct_UEnum_RodentVR_TextureEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics::NewProp_TextureEnumString = { "TextureEnumString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextureSettings_eventGetTextureEnumFromString_Parms, TextureEnumString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics::NewProp_TextureEnumString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/TextureSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureSettings, nullptr, "GetTextureEnumFromString", nullptr, nullptr, sizeof(TextureSettings_eventGetTextureEnumFromString_Parms), Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics
	{
		struct TextureSettings_eventGetTextureEnumString_Parms
		{
			TextureEnum TextureValue;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextureValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextureSettings_eventGetTextureEnumString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics::NewProp_TextureValue = { "TextureValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextureSettings_eventGetTextureEnumString_Parms, TextureValue), Z_Construct_UEnum_RodentVR_TextureEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics::NewProp_TextureValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics::NewProp_TextureValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics::NewProp_TextureValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/TextureSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureSettings, nullptr, "GetTextureEnumString", nullptr, nullptr, sizeof(TextureSettings_eventGetTextureEnumString_Parms), Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextureSettings_GetTextureEnumString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextureSettings_GetTextureEnumString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextureSettings_SetCustomTexturePath_Statics
	{
		struct TextureSettings_eventSetCustomTexturePath_Parms
		{
			FString CustomTexturePathValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomTexturePathValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextureSettings_SetCustomTexturePath_Statics::NewProp_CustomTexturePathValue = { "CustomTexturePathValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextureSettings_eventSetCustomTexturePath_Parms, CustomTexturePathValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureSettings_SetCustomTexturePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSettings_SetCustomTexturePath_Statics::NewProp_CustomTexturePathValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureSettings_SetCustomTexturePath_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/TextureSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureSettings_SetCustomTexturePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureSettings, nullptr, "SetCustomTexturePath", nullptr, nullptr, sizeof(TextureSettings_eventSetCustomTexturePath_Parms), Z_Construct_UFunction_UTextureSettings_SetCustomTexturePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSettings_SetCustomTexturePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextureSettings_SetCustomTexturePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSettings_SetCustomTexturePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextureSettings_SetCustomTexturePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextureSettings_SetCustomTexturePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextureSettings_SetTexture_Statics
	{
		struct TextureSettings_eventSetTexture_Parms
		{
			TextureEnum TextureValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextureValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTextureSettings_SetTexture_Statics::NewProp_TextureValue = { "TextureValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextureSettings_eventSetTexture_Parms, TextureValue), Z_Construct_UEnum_RodentVR_TextureEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextureSettings_SetTexture_Statics::NewProp_TextureValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureSettings_SetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSettings_SetTexture_Statics::NewProp_TextureValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureSettings_SetTexture_Statics::NewProp_TextureValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureSettings_SetTexture_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/TextureSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureSettings_SetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureSettings, nullptr, "SetTexture", nullptr, nullptr, sizeof(TextureSettings_eventSetTexture_Parms), Z_Construct_UFunction_UTextureSettings_SetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSettings_SetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextureSettings_SetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureSettings_SetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextureSettings_SetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextureSettings_SetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextureSettings_NoRegister()
	{
		return UTextureSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTextureSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTexturePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomTexturePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Texture_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextureSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextureSettings_GetCustomTexturePath, "GetCustomTexturePath" }, // 17790976
		{ &Z_Construct_UFunction_UTextureSettings_GetTexture, "GetTexture" }, // 85436200
		{ &Z_Construct_UFunction_UTextureSettings_GetTextureEnumFromString, "GetTextureEnumFromString" }, // 339210108
		{ &Z_Construct_UFunction_UTextureSettings_GetTextureEnumString, "GetTextureEnumString" }, // 2592112332
		{ &Z_Construct_UFunction_UTextureSettings_SetCustomTexturePath, "SetCustomTexturePath" }, // 280091486
		{ &Z_Construct_UFunction_UTextureSettings_SetTexture, "SetTexture" }, // 998936984
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Settings/TextureSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Settings/TextureSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureSettings_Statics::NewProp_CustomTexturePath_MetaData[] = {
		{ "BlueprintGetter", "GetCustomTexturePath" },
		{ "BlueprintSetter", "SetCustomTexturePath" },
		{ "Category", "TextureSettings" },
		{ "ModuleRelativePath", "Private/Settings/TextureSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTextureSettings_Statics::NewProp_CustomTexturePath = { "CustomTexturePath", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureSettings, CustomTexturePath), METADATA_PARAMS(Z_Construct_UClass_UTextureSettings_Statics::NewProp_CustomTexturePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureSettings_Statics::NewProp_CustomTexturePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureSettings_Statics::NewProp_Texture_MetaData[] = {
		{ "BlueprintGetter", "GetTexture" },
		{ "BlueprintSetter", "SetTexture" },
		{ "Category", "TextureSettings" },
		{ "ModuleRelativePath", "Private/Settings/TextureSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureSettings_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureSettings, Texture), Z_Construct_UEnum_RodentVR_TextureEnum, METADATA_PARAMS(Z_Construct_UClass_UTextureSettings_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureSettings_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureSettings_Statics::NewProp_Texture_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureSettings_Statics::NewProp_CustomTexturePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureSettings_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureSettings_Statics::NewProp_Texture_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureSettings_Statics::ClassParams = {
		&UTextureSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTextureSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureSettings, 1732988515);
	template<> RODENTVR_API UClass* StaticClass<UTextureSettings>()
	{
		return UTextureSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureSettings(Z_Construct_UClass_UTextureSettings, &UTextureSettings::StaticClass, TEXT("/Script/RodentVR"), TEXT("UTextureSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
