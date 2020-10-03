// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeap/Public/RaycastComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaycastComponent() {}
// Cross Module References
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature();
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapRaycastComponent();
	MAGICLEAP_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult();
	MAGICLEAP_API UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapRaycastResultState();
	UPackage* Z_Construct_UPackage__Script_MagicLeap();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MAGICLEAP_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams();
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapRaycastComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary_NoRegister();
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Statics
	{
		struct MagicLeapRaycastComponent_eventRaycastResultDelegate_Parms
		{
			FMagicLeapRaycastHitResult HitResult;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapRaycastComponent_eventRaycastResultDelegate_Parms, HitResult), Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09  Delegate used to convey the result of a raycast.\n\x09  @param HitResult structure containing the result of the raycast hit.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "Delegate used to convey the result of a raycast.\n@param HitResult structure containing the result of the raycast hit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapRaycastComponent, nullptr, "RaycastResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(MagicLeapRaycastComponent_eventRaycastResultDelegate_Parms), Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EMagicLeapRaycastResultState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeap_EMagicLeapRaycastResultState, Z_Construct_UPackage__Script_MagicLeap(), TEXT("EMagicLeapRaycastResultState"));
		}
		return Singleton;
	}
	template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapRaycastResultState>()
	{
		return EMagicLeapRaycastResultState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapRaycastResultState(EMagicLeapRaycastResultState_StaticEnum, TEXT("/Script/MagicLeap"), TEXT("EMagicLeapRaycastResultState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeap_EMagicLeapRaycastResultState_Hash() { return 3330277388U; }
	UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapRaycastResultState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapRaycastResultState"), 0, Get_Z_Construct_UEnum_MagicLeap_EMagicLeapRaycastResultState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapRaycastResultState::RequestFailed", (int64)EMagicLeapRaycastResultState::RequestFailed },
				{ "EMagicLeapRaycastResultState::NoCollision", (int64)EMagicLeapRaycastResultState::NoCollision },
				{ "EMagicLeapRaycastResultState::HitUnobserved", (int64)EMagicLeapRaycastResultState::HitUnobserved },
				{ "EMagicLeapRaycastResultState::HitObserved", (int64)EMagicLeapRaycastResultState::HitObserved },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** The states of a raycast result. */" },
				{ "HitObserved.Comment", "/** The ray hit an observed area. */" },
				{ "HitObserved.Name", "EMagicLeapRaycastResultState::HitObserved" },
				{ "HitObserved.ToolTip", "The ray hit an observed area." },
				{ "HitUnobserved.Comment", "/** The ray hit an unobserved area. This can occur only when CollideWithUnobserved is set to true. */" },
				{ "HitUnobserved.Name", "EMagicLeapRaycastResultState::HitUnobserved" },
				{ "HitUnobserved.ToolTip", "The ray hit an unobserved area. This can occur only when CollideWithUnobserved is set to true." },
				{ "ModuleRelativePath", "Public/RaycastComponent.h" },
				{ "NoCollision.Comment", "/** The ray passed beyond maximum raycast distance and it doesn't hit any surface. */" },
				{ "NoCollision.Name", "EMagicLeapRaycastResultState::NoCollision" },
				{ "NoCollision.ToolTip", "The ray passed beyond maximum raycast distance and it doesn't hit any surface." },
				{ "RequestFailed.Comment", "/** The raycast request failed. */" },
				{ "RequestFailed.Name", "EMagicLeapRaycastResultState::RequestFailed" },
				{ "RequestFailed.ToolTip", "The raycast request failed." },
				{ "ToolTip", "The states of a raycast result." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeap,
				nullptr,
				"EMagicLeapRaycastResultState",
				"EMagicLeapRaycastResultState",
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
class UScriptStruct* FMagicLeapRaycastHitResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAP_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult, Z_Construct_UPackage__Script_MagicLeap(), TEXT("MagicLeapRaycastHitResult"), sizeof(FMagicLeapRaycastHitResult), Get_Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Hash());
	}
	return Singleton;
}
template<> MAGICLEAP_API UScriptStruct* StaticStruct<FMagicLeapRaycastHitResult>()
{
	return FMagicLeapRaycastHitResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapRaycastHitResult(FMagicLeapRaycastHitResult::StaticStruct, TEXT("/Script/MagicLeap"), TEXT("MagicLeapRaycastHitResult"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapRaycastHitResult
{
	FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapRaycastHitResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapRaycastHitResult")),new UScriptStruct::TCppStructOps<FMagicLeapRaycastHitResult>);
	}
} ScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapRaycastHitResult;
	struct Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Confidence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HitState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Result of a raycast. */" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "Result of a raycast." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapRaycastHitResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_UserData_MetaData[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "Comment", "/** The data set in the RaycastQueryParams. This can be used for query identification. */" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "The data set in the RaycastQueryParams. This can be used for query identification." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapRaycastHitResult, UserData), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_UserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "Comment", "/** Confidence of the raycast result.\n\n\x09  Confidence is a non-negative value from 0 to 1 where closer to 1 indicates a higher quality.\n\x09  It will be an indication of how much error there is in the averaging.\n\x09  For example, a flat plane will have a high confidence, while if the surface was very noisy the confidence\n\x09  would be very low. This field is only valid if the state is either HitUnobserved or HitObserved.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "Confidence of the raycast result.\n\n        Confidence is a non-negative value from 0 to 1 where closer to 1 indicates a higher quality.\n        It will be an indication of how much error there is in the averaging.\n        For example, a flat plane will have a high confidence, while if the surface was very noisy the confidence\n        would be very low. This field is only valid if the state is either HitUnobserved or HitObserved." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapRaycastHitResult, Confidence), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_Confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_Confidence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "Comment", "/** Normal to the surface where the ray collided. This field is only valid if the state\n\x09  is either HitUnobserved or HitObserved */" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "Normal to the surface where the ray collided. This field is only valid if the state\n        is either HitUnobserved or HitObserved" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapRaycastHitResult, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_HitPoint_MetaData[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "Comment", "/** Where in the world the collision happened. This field is only valid if the state\n\x09  is either HitUnobserved or HitObserved. */" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "Where in the world the collision happened. This field is only valid if the state\n        is either HitUnobserved or HitObserved." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_HitPoint = { "HitPoint", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapRaycastHitResult, HitPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_HitPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_HitPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_HitState_MetaData[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "Comment", "/** The raycast result. If this field is either RequestFailed or NoCollision,\n\x09  most of the fields in this structure are invalid. */" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "The raycast result. If this field is either RequestFailed or NoCollision,\n        most of the fields in this structure are invalid." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_HitState = { "HitState", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapRaycastHitResult, HitState), Z_Construct_UEnum_MagicLeap_EMagicLeapRaycastResultState, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_HitState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_HitState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_HitState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_Confidence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_HitPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_HitState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::NewProp_HitState_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
		nullptr,
		&NewStructOps,
		"MagicLeapRaycastHitResult",
		sizeof(FMagicLeapRaycastHitResult),
		alignof(FMagicLeapRaycastHitResult),
		Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapRaycastHitResult"), sizeof(FMagicLeapRaycastHitResult), Get_Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Hash() { return 3267156979U; }
class UScriptStruct* FMagicLeapRaycastQueryParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAP_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams, Z_Construct_UPackage__Script_MagicLeap(), TEXT("MagicLeapRaycastQueryParams"), sizeof(FMagicLeapRaycastQueryParams), Get_Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Hash());
	}
	return Singleton;
}
template<> MAGICLEAP_API UScriptStruct* StaticStruct<FMagicLeapRaycastQueryParams>()
{
	return FMagicLeapRaycastQueryParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapRaycastQueryParams(FMagicLeapRaycastQueryParams::StaticStruct, TEXT("/Script/MagicLeap"), TEXT("MagicLeapRaycastQueryParams"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapRaycastQueryParams
{
	FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapRaycastQueryParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapRaycastQueryParams")),new UScriptStruct::TCppStructOps<FMagicLeapRaycastQueryParams>);
	}
} ScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapRaycastQueryParams;
	struct Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollideWithUnobserved_MetaData[];
#endif
		static void NewProp_CollideWithUnobserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CollideWithUnobserved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalFovDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalFovDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameters for a raycast request. */" },
		{ "HasNativeMake", "MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "Parameters for a raycast request." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapRaycastQueryParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_UserData_MetaData[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "Comment", "/** User data for this request. The same data will be included in the result for query identification. */" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "User data for this request. The same data will be included in the result for query identification." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapRaycastQueryParams, UserData), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_UserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_CollideWithUnobserved_MetaData[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "Comment", "/** If true, a ray will terminate when encountering an unobserved area and return a surface or\n\x09  the ray will continue until it ends or hits an observed surface. */" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "If true, a ray will terminate when encountering an unobserved area and return a surface or\n        the ray will continue until it ends or hits an observed surface." },
	};
#endif
	void Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_CollideWithUnobserved_SetBit(void* Obj)
	{
		((FMagicLeapRaycastQueryParams*)Obj)->CollideWithUnobserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_CollideWithUnobserved = { "CollideWithUnobserved", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMagicLeapRaycastQueryParams), &Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_CollideWithUnobserved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_CollideWithUnobserved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_CollideWithUnobserved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_HorizontalFovDegrees_MetaData[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "Comment", "/** The angular width, in degrees, over which the horizonal rays are evenly distributed to create a raycast area. */" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "The angular width, in degrees, over which the horizonal rays are evenly distributed to create a raycast area." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_HorizontalFovDegrees = { "HorizontalFovDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapRaycastQueryParams, HorizontalFovDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_HorizontalFovDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_HorizontalFovDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of vertical rays. For single point raycast, set this to 1. */" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "The number of vertical rays. For single point raycast, set this to 1." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapRaycastQueryParams, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of horizontal rays. For single point raycast, set this to 1. */" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "The number of horizontal rays. For single point raycast, set this to 1." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapRaycastQueryParams, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_UpVector_MetaData[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "Comment", "/** Up vector of the ray to fire. This is used to orient the area the rays are cast over. */" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "Up vector of the ray to fire. This is used to orient the area the rays are cast over." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapRaycastQueryParams, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_UpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_UpVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "Comment", "/** Direction of the ray to fire. */" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "Direction of the ray to fire." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapRaycastQueryParams, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "Comment", "/** Where the ray is cast from. */" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "Where the ray is cast from." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapRaycastQueryParams, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_CollideWithUnobserved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_HorizontalFovDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_UpVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
		nullptr,
		&NewStructOps,
		"MagicLeapRaycastQueryParams",
		sizeof(FMagicLeapRaycastQueryParams),
		alignof(FMagicLeapRaycastQueryParams),
		Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapRaycastQueryParams"), sizeof(FMagicLeapRaycastQueryParams), Get_Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Hash() { return 2025354702U; }
	DEFINE_FUNCTION(UMagicLeapRaycastComponent::execRequestRaycast)
	{
		P_GET_STRUCT_REF(FMagicLeapRaycastQueryParams,Z_Param_Out_RequestParams);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestRaycast(Z_Param_Out_RequestParams,FRaycastResultDelegate(Z_Param_Out_ResultDelegate));
		P_NATIVE_END;
	}
	void UMagicLeapRaycastComponent::StaticRegisterNativesUMagicLeapRaycastComponent()
	{
		UClass* Class = UMagicLeapRaycastComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestRaycast", &UMagicLeapRaycastComponent::execRequestRaycast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics
	{
		struct MagicLeapRaycastComponent_eventRequestRaycast_Parms
		{
			FMagicLeapRaycastQueryParams RequestParams;
			FScriptDelegate ResultDelegate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapRaycastComponent_eventRequestRaycast_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapRaycastComponent_eventRequestRaycast_Parms), &Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapRaycastComponent_eventRequestRaycast_Parms, ResultDelegate), Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::NewProp_ResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::NewProp_RequestParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::NewProp_RequestParams = { "RequestParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapRaycastComponent_eventRequestRaycast_Parms, RequestParams), Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::NewProp_RequestParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::NewProp_RequestParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::NewProp_ResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::NewProp_RequestParams,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "Comment", "/**\n\x09  Requests a raycast with the given query parameters.\n\x09  @param RequestParams Parameters for the raycast query.\n\x09  @param ResultDelegate Delegate which will be called when the raycast result is ready.\n\x09  @returns True if the raycast request was successfully placed, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "Requests a raycast with the given query parameters.\n@param RequestParams Parameters for the raycast query.\n@param ResultDelegate Delegate which will be called when the raycast result is ready.\n@returns True if the raycast request was successfully placed, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapRaycastComponent, nullptr, "RequestRaycast", nullptr, nullptr, sizeof(MagicLeapRaycastComponent_eventRequestRaycast_Parms), Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapRaycastComponent_NoRegister()
	{
		return UMagicLeapRaycastComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapRaycastComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapRaycastComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapRaycastComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature, "RaycastResultDelegate__DelegateSignature" }, // 1665935202
		{ &Z_Construct_UFunction_UMagicLeapRaycastComponent_RequestRaycast, "RequestRaycast" }, // 2478001717
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapRaycastComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MagicLeap" },
		{ "Comment", "/** Creates raycast requests and delegates their result. */" },
		{ "IncludePath", "RaycastComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "ToolTip", "Creates raycast requests and delegates their result." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapRaycastComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapRaycastComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapRaycastComponent_Statics::ClassParams = {
		&UMagicLeapRaycastComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapRaycastComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapRaycastComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapRaycastComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapRaycastComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapRaycastComponent, 3027488119);
	template<> MAGICLEAP_API UClass* StaticClass<UMagicLeapRaycastComponent>()
	{
		return UMagicLeapRaycastComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapRaycastComponent(Z_Construct_UClass_UMagicLeapRaycastComponent, &UMagicLeapRaycastComponent::StaticClass, TEXT("/Script/MagicLeap"), TEXT("UMagicLeapRaycastComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapRaycastComponent);
	DEFINE_FUNCTION(UMagicLeapRaycastFunctionLibrary::execMakeRaycastQueryParams)
	{
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_STRUCT(FVector,Z_Param_UpVector);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HorizontalFovDegrees);
		P_GET_UBOOL(Z_Param_CollideWithUnobserved);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMagicLeapRaycastQueryParams*)Z_Param__Result=UMagicLeapRaycastFunctionLibrary::MakeRaycastQueryParams(Z_Param_Position,Z_Param_Direction,Z_Param_UpVector,Z_Param_Width,Z_Param_Height,Z_Param_HorizontalFovDegrees,Z_Param_CollideWithUnobserved,Z_Param_UserData);
		P_NATIVE_END;
	}
	void UMagicLeapRaycastFunctionLibrary::StaticRegisterNativesUMagicLeapRaycastFunctionLibrary()
	{
		UClass* Class = UMagicLeapRaycastFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeRaycastQueryParams", &UMagicLeapRaycastFunctionLibrary::execMakeRaycastQueryParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics
	{
		struct MagicLeapRaycastFunctionLibrary_eventMakeRaycastQueryParams_Parms
		{
			FVector Position;
			FVector Direction;
			FVector UpVector;
			int32 Width;
			int32 Height;
			float HorizontalFovDegrees;
			bool CollideWithUnobserved;
			int32 UserData;
			FMagicLeapRaycastQueryParams ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserData;
		static void NewProp_CollideWithUnobserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CollideWithUnobserved;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalFovDegrees;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapRaycastFunctionLibrary_eventMakeRaycastQueryParams_Parms, ReturnValue), Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapRaycastFunctionLibrary_eventMakeRaycastQueryParams_Parms, UserData), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_CollideWithUnobserved_SetBit(void* Obj)
	{
		((MagicLeapRaycastFunctionLibrary_eventMakeRaycastQueryParams_Parms*)Obj)->CollideWithUnobserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_CollideWithUnobserved = { "CollideWithUnobserved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapRaycastFunctionLibrary_eventMakeRaycastQueryParams_Parms), &Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_CollideWithUnobserved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_HorizontalFovDegrees = { "HorizontalFovDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapRaycastFunctionLibrary_eventMakeRaycastQueryParams_Parms, HorizontalFovDegrees), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapRaycastFunctionLibrary_eventMakeRaycastQueryParams_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapRaycastFunctionLibrary_eventMakeRaycastQueryParams_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapRaycastFunctionLibrary_eventMakeRaycastQueryParams_Parms, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapRaycastFunctionLibrary_eventMakeRaycastQueryParams_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapRaycastFunctionLibrary_eventMakeRaycastQueryParams_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_CollideWithUnobserved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_HorizontalFovDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_UpVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raycast|MagicLeap" },
		{ "Direction", "1,0,0" },
		{ "Height", "1" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
		{ "NativeMakeFunc", "" },
		{ "UpVector", "0,0,1" },
		{ "Width", "1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary, nullptr, "MakeRaycastQueryParams", nullptr, nullptr, sizeof(MagicLeapRaycastFunctionLibrary_eventMakeRaycastQueryParams_Parms), Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary_NoRegister()
	{
		return UMagicLeapRaycastFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams, "MakeRaycastQueryParams" }, // 143964982
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MagicLeap" },
		{ "IncludePath", "RaycastComponent.h" },
		{ "ModuleRelativePath", "Public/RaycastComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapRaycastFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary_Statics::ClassParams = {
		&UMagicLeapRaycastFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapRaycastFunctionLibrary, 2287954976);
	template<> MAGICLEAP_API UClass* StaticClass<UMagicLeapRaycastFunctionLibrary>()
	{
		return UMagicLeapRaycastFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapRaycastFunctionLibrary(Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary, &UMagicLeapRaycastFunctionLibrary::StaticClass, TEXT("/Script/MagicLeap"), TEXT("UMagicLeapRaycastFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapRaycastFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
