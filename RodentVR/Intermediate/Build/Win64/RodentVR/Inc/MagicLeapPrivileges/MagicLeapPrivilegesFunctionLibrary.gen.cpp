// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapPrivileges/Public/MagicLeapPrivilegesFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapPrivilegesFunctionLibrary() {}
// Cross Module References
	MAGICLEAPPRIVILEGES_API UClass* Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary_NoRegister();
	MAGICLEAPPRIVILEGES_API UClass* Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MagicLeapPrivileges();
	MAGICLEAPPRIVILEGES_API UEnum* Z_Construct_UEnum_MagicLeapPrivileges_EMagicLeapPrivilege();
	MAGICLEAPPRIVILEGES_API UFunction* Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UMagicLeapPrivilegesFunctionLibrary::execRequestPrivilegeAsync)
	{
		P_GET_ENUM(EMagicLeapPrivilege,Z_Param_Privilege);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapPrivilegesFunctionLibrary::RequestPrivilegeAsync(EMagicLeapPrivilege(Z_Param_Privilege),FMagicLeapPrivilegeRequestDelegate(Z_Param_Out_ResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapPrivilegesFunctionLibrary::execRequestPrivilege)
	{
		P_GET_ENUM(EMagicLeapPrivilege,Z_Param_Privilege);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapPrivilegesFunctionLibrary::RequestPrivilege(EMagicLeapPrivilege(Z_Param_Privilege));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapPrivilegesFunctionLibrary::execCheckPrivilege)
	{
		P_GET_ENUM(EMagicLeapPrivilege,Z_Param_Privilege);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapPrivilegesFunctionLibrary::CheckPrivilege(EMagicLeapPrivilege(Z_Param_Privilege));
		P_NATIVE_END;
	}
	void UMagicLeapPrivilegesFunctionLibrary::StaticRegisterNativesUMagicLeapPrivilegesFunctionLibrary()
	{
		UClass* Class = UMagicLeapPrivilegesFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckPrivilege", &UMagicLeapPrivilegesFunctionLibrary::execCheckPrivilege },
			{ "RequestPrivilege", &UMagicLeapPrivilegesFunctionLibrary::execRequestPrivilege },
			{ "RequestPrivilegeAsync", &UMagicLeapPrivilegesFunctionLibrary::execRequestPrivilegeAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics
	{
		struct MagicLeapPrivilegesFunctionLibrary_eventCheckPrivilege_Parms
		{
			EMagicLeapPrivilege Privilege;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Privilege;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Privilege_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapPrivilegesFunctionLibrary_eventCheckPrivilege_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapPrivilegesFunctionLibrary_eventCheckPrivilege_Parms), &Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::NewProp_Privilege = { "Privilege", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPrivilegesFunctionLibrary_eventCheckPrivilege_Parms, Privilege), Z_Construct_UEnum_MagicLeapPrivileges_EMagicLeapPrivilege, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::NewProp_Privilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::NewProp_Privilege,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::NewProp_Privilege_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::Function_MetaDataParams[] = {
		{ "Category", "Privileges|MagicLeap" },
		{ "Comment", "/**\n\x09  Check whether the application has the specified privilege.\n\x09  This does not solicit consent from the end-user and is non-blocking.\n\x09  @param Privilege The privilege to check.\n\x09  @return True if the privilege is granted, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPrivilegesFunctionLibrary.h" },
		{ "ToolTip", "Check whether the application has the specified privilege.\nThis does not solicit consent from the end-user and is non-blocking.\n@param Privilege The privilege to check.\n@return True if the privilege is granted, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary, nullptr, "CheckPrivilege", nullptr, nullptr, sizeof(MagicLeapPrivilegesFunctionLibrary_eventCheckPrivilege_Parms), Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics
	{
		struct MagicLeapPrivilegesFunctionLibrary_eventRequestPrivilege_Parms
		{
			EMagicLeapPrivilege Privilege;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Privilege;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Privilege_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapPrivilegesFunctionLibrary_eventRequestPrivilege_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapPrivilegesFunctionLibrary_eventRequestPrivilege_Parms), &Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::NewProp_Privilege = { "Privilege", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPrivilegesFunctionLibrary_eventRequestPrivilege_Parms, Privilege), Z_Construct_UEnum_MagicLeapPrivileges_EMagicLeapPrivilege, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::NewProp_Privilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::NewProp_Privilege,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::NewProp_Privilege_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::Function_MetaDataParams[] = {
		{ "Category", "Privileges|MagicLeap" },
		{ "Comment", "/**\n\x09  Request the specified privilege.\n\x09  This may possibly solicit consent from the end-user; if so it will block.\n\x09  @param Privilege The privilege to request.\n\x09  @return True if the privilege is granted, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapPrivilegesFunctionLibrary.h" },
		{ "ToolTip", "Request the specified privilege.\nThis may possibly solicit consent from the end-user; if so it will block.\n@param Privilege The privilege to request.\n@return True if the privilege is granted, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary, nullptr, "RequestPrivilege", nullptr, nullptr, sizeof(MagicLeapPrivilegesFunctionLibrary_eventRequestPrivilege_Parms), Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics
	{
		struct MagicLeapPrivilegesFunctionLibrary_eventRequestPrivilegeAsync_Parms
		{
			EMagicLeapPrivilege Privilege;
			FScriptDelegate ResultDelegate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Privilege;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Privilege_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapPrivilegesFunctionLibrary_eventRequestPrivilegeAsync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapPrivilegesFunctionLibrary_eventRequestPrivilegeAsync_Parms), &Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPrivilegesFunctionLibrary_eventRequestPrivilegeAsync_Parms, ResultDelegate), Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::NewProp_ResultDelegate_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::NewProp_Privilege = { "Privilege", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPrivilegesFunctionLibrary_eventRequestPrivilegeAsync_Parms, Privilege), Z_Construct_UEnum_MagicLeapPrivileges_EMagicLeapPrivilege, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::NewProp_Privilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::NewProp_ResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::NewProp_Privilege,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::NewProp_Privilege_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Privileges|MagicLeap" },
		{ "Comment", "/**\n\x09  Request the specified privilege asynchronously.\n\x09  This may possibly solicit consent from the end-user. Result will be delivered\n\x09  to the specified delegate.\n\x09  @param Privilege The privilege to request.\n\x09  @param ResultDelegate Callback which reports the result of the request.\n\x09  @return True if the privilege request was successfully dispatched, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapPrivilegesFunctionLibrary.h" },
		{ "ToolTip", "Request the specified privilege asynchronously.\nThis may possibly solicit consent from the end-user. Result will be delivered\nto the specified delegate.\n@param Privilege The privilege to request.\n@param ResultDelegate Callback which reports the result of the request.\n@return True if the privilege request was successfully dispatched, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary, nullptr, "RequestPrivilegeAsync", nullptr, nullptr, sizeof(MagicLeapPrivilegesFunctionLibrary_eventRequestPrivilegeAsync_Parms), Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary_NoRegister()
	{
		return UMagicLeapPrivilegesFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapPrivileges,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege, "CheckPrivilege" }, // 1739892211
		{ &Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege, "RequestPrivilege" }, // 2932492135
		{ &Z_Construct_UFunction_UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync, "RequestPrivilegeAsync" }, // 2042526276
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MagicLeap" },
		{ "IncludePath", "MagicLeapPrivilegesFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MagicLeapPrivilegesFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapPrivilegesFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary_Statics::ClassParams = {
		&UMagicLeapPrivilegesFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapPrivilegesFunctionLibrary, 230003062);
	template<> MAGICLEAPPRIVILEGES_API UClass* StaticClass<UMagicLeapPrivilegesFunctionLibrary>()
	{
		return UMagicLeapPrivilegesFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapPrivilegesFunctionLibrary(Z_Construct_UClass_UMagicLeapPrivilegesFunctionLibrary, &UMagicLeapPrivilegesFunctionLibrary::StaticClass, TEXT("/Script/MagicLeapPrivileges"), TEXT("UMagicLeapPrivilegesFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapPrivilegesFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
