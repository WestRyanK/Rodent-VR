// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapAR/Public/LuminARFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuminARFunctionLibrary() {}
// Cross Module References
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ULuminARSessionFunctionLibrary_NoRegister();
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ULuminARSessionFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MagicLeapAR();
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ULuminARSessionConfig_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ULuminARFrameFunctionLibrary_NoRegister();
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ULuminARFrameFunctionLibrary();
	MAGICLEAPAR_API UEnum* Z_Construct_UEnum_MagicLeapAR_ELuminARTrackingState();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARTraceResult();
	MAGICLEAPAR_API UEnum* Z_Construct_UEnum_MagicLeapAR_ELuminARLineTraceChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary_NoRegister();
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary();
	MAGICLEAPAR_API UClass* Z_Construct_UClass_ULuminARCandidateImage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULuminARSessionFunctionLibrary::execStartLuminARSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(ULuminARSessionConfig,Z_Param_Configuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULuminARSessionFunctionLibrary::StartLuminARSession(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Configuration);
		P_NATIVE_END;
	}
	void ULuminARSessionFunctionLibrary::StaticRegisterNativesULuminARSessionFunctionLibrary()
	{
		UClass* Class = ULuminARSessionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartLuminARSession", &ULuminARSessionFunctionLibrary::execStartLuminARSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics
	{
		struct LuminARSessionFunctionLibrary_eventStartLuminARSession_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			ULuminARSessionConfig* Configuration;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Configuration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARSessionFunctionLibrary_eventStartLuminARSession_Parms, Configuration), Z_Construct_UClass_ULuminARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARSessionFunctionLibrary_eventStartLuminARSession_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARSessionFunctionLibrary_eventStartLuminARSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics::NewProp_Configuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "LuminAR|Session" },
		{ "Comment", "/**\n\x09 * Starts a new LuminAR tracking session LuminAR specific configuration.\n\x09 * If the session already started and the config isn't the same, it will stop the previous session and start a new session with the new config.\n\x09 * Note that this is a latent action, you can query the session start result by querying GetLuminARSessionStatus() after the latent action finished.\n\x09 *\n\x09 * @param Configuration\x09\x09\x09\x09The LuminARSession configuration to start the session.\n\x09 */" },
		{ "Keywords", "luminar session start config" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/LuminARFunctionLibrary.h" },
		{ "ToolTip", "Starts a new LuminAR tracking session LuminAR specific configuration.\nIf the session already started and the config isn't the same, it will stop the previous session and start a new session with the new config.\nNote that this is a latent action, you can query the session start result by querying GetLuminARSessionStatus() after the latent action finished.\n\n@param Configuration                         The LuminARSession configuration to start the session." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuminARSessionFunctionLibrary, nullptr, "StartLuminARSession", nullptr, nullptr, sizeof(LuminARSessionFunctionLibrary_eventStartLuminARSession_Parms), Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuminARSessionFunctionLibrary_NoRegister()
	{
		return ULuminARSessionFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULuminARSessionFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuminARSessionFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapAR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuminARSessionFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuminARSessionFunctionLibrary_StartLuminARSession, "StartLuminARSession" }, // 1598869178
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARSessionFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A function library that provides static/Blueprint functions associated with LuminAR session.*/" },
		{ "IncludePath", "LuminARFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/LuminARFunctionLibrary.h" },
		{ "ToolTip", "A function library that provides static/Blueprint functions associated with LuminAR session." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuminARSessionFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuminARSessionFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuminARSessionFunctionLibrary_Statics::ClassParams = {
		&ULuminARSessionFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULuminARSessionFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARSessionFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuminARSessionFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuminARSessionFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuminARSessionFunctionLibrary, 2731427837);
	template<> MAGICLEAPAR_API UClass* StaticClass<ULuminARSessionFunctionLibrary>()
	{
		return ULuminARSessionFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuminARSessionFunctionLibrary(Z_Construct_UClass_ULuminARSessionFunctionLibrary, &ULuminARSessionFunctionLibrary::StaticClass, TEXT("/Script/MagicLeapAR"), TEXT("ULuminARSessionFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuminARSessionFunctionLibrary);
	DEFINE_FUNCTION(ULuminARFrameFunctionLibrary::execLuminARLineTrace)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition);
		P_GET_TSET(ELuminARLineTraceChannel,Z_Param_TraceChannels);
		P_GET_TARRAY_REF(FARTraceResult,Z_Param_Out_OutHitResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULuminARFrameFunctionLibrary::LuminARLineTrace(Z_Param_WorldContextObject,Z_Param_Out_ScreenPosition,Z_Param_TraceChannels,Z_Param_Out_OutHitResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuminARFrameFunctionLibrary::execGetTrackingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELuminARTrackingState*)Z_Param__Result=ULuminARFrameFunctionLibrary::GetTrackingState();
		P_NATIVE_END;
	}
	void ULuminARFrameFunctionLibrary::StaticRegisterNativesULuminARFrameFunctionLibrary()
	{
		UClass* Class = ULuminARFrameFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTrackingState", &ULuminARFrameFunctionLibrary::execGetTrackingState },
			{ "LuminARLineTrace", &ULuminARFrameFunctionLibrary::execLuminARLineTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState_Statics
	{
		struct LuminARFrameFunctionLibrary_eventGetTrackingState_Parms
		{
			ELuminARTrackingState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARFrameFunctionLibrary_eventGetTrackingState_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapAR_ELuminARTrackingState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "LuminAR|MotionTracking" },
		{ "Comment", "/**\n\x09 * Returns the current ARCore session status.\n\x09 *\n\x09 * @return\x09""A EARSessionStatus enum that describes the session status.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetTrackingQuality() & GetHeadTrackingMapEvents()" },
		{ "Keywords", "luminar session" },
		{ "ModuleRelativePath", "Public/LuminARFunctionLibrary.h" },
		{ "ToolTip", "Returns the current ARCore session status.\n\n@return      A EARSessionStatus enum that describes the session status." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuminARFrameFunctionLibrary, nullptr, "GetTrackingState", nullptr, nullptr, sizeof(LuminARFrameFunctionLibrary_eventGetTrackingState_Parms), Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics
	{
		struct LuminARFrameFunctionLibrary_eventLuminARLineTrace_Parms
		{
			UObject* WorldContextObject;
			FVector2D ScreenPosition;
			TSet<ELuminARLineTraceChannel> TraceChannels;
			TArray<FARTraceResult> OutHitResults;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutHitResults;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHitResults_Inner;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TraceChannels;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TraceChannels_ElementProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannels_ElementProp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LuminARFrameFunctionLibrary_eventLuminARLineTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LuminARFrameFunctionLibrary_eventLuminARLineTrace_Parms), &Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_OutHitResults = { "OutHitResults", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARFrameFunctionLibrary_eventLuminARLineTrace_Parms, OutHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_OutHitResults_Inner = { "OutHitResults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_TraceChannels = { "TraceChannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARFrameFunctionLibrary_eventLuminARLineTrace_Parms, TraceChannels), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_TraceChannels_ElementProp = { "TraceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapAR_ELuminARLineTraceChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_TraceChannels_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_ScreenPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARFrameFunctionLibrary_eventLuminARLineTrace_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_ScreenPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_ScreenPosition_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARFrameFunctionLibrary_eventLuminARLineTrace_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_OutHitResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_OutHitResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_TraceChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_TraceChannels_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_TraceChannels_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "LuminAR|LineTrace" },
		{ "Comment", "/**\n\x09 * Traces a ray from the user's device in the direction of the given location in the camera\n\x09 * view. Intersections with detected scene geometry are returned, sorted by distance from the\n\x09 * device; the nearest intersection is returned first.\n\x09 *\n\x09 * @param WorldContextObject\x09The world context.\n\x09 * @param ScreenPosition\x09\x09The position on the screen to cast the ray from.\n\x09 * @param ARObjectType\x09\x09\x09""A set of ELuminARLineTraceChannel indicate which type of line trace it should perform.\n\x09 * @param OutHitResults\x09\x09\x09The list of hit results sorted by distance.\n\x09 * @return\x09\x09\x09\x09\x09\x09True if there is a hit detected.\n\x09 */" },
		{ "Keywords", "luminar raycast hit" },
		{ "ModuleRelativePath", "Public/LuminARFunctionLibrary.h" },
		{ "ToolTip", "Traces a ray from the user's device in the direction of the given location in the camera\nview. Intersections with detected scene geometry are returned, sorted by distance from the\ndevice; the nearest intersection is returned first.\n\n@param WorldContextObject    The world context.\n@param ScreenPosition                The position on the screen to cast the ray from.\n@param ARObjectType                  A set of ELuminARLineTraceChannel indicate which type of line trace it should perform.\n@param OutHitResults                 The list of hit results sorted by distance.\n@return                                              True if there is a hit detected." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuminARFrameFunctionLibrary, nullptr, "LuminARLineTrace", nullptr, nullptr, sizeof(LuminARFrameFunctionLibrary_eventLuminARLineTrace_Parms), Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuminARFrameFunctionLibrary_NoRegister()
	{
		return ULuminARFrameFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULuminARFrameFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuminARFrameFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapAR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuminARFrameFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuminARFrameFunctionLibrary_GetTrackingState, "GetTrackingState" }, // 360203850
		{ &Z_Construct_UFunction_ULuminARFrameFunctionLibrary_LuminARLineTrace, "LuminARLineTrace" }, // 1988870634
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARFrameFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A function library that provides static/Blueprint functions associated with most recent LuminAR tracking frame.*/" },
		{ "IncludePath", "LuminARFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/LuminARFunctionLibrary.h" },
		{ "ToolTip", "A function library that provides static/Blueprint functions associated with most recent LuminAR tracking frame." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuminARFrameFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuminARFrameFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuminARFrameFunctionLibrary_Statics::ClassParams = {
		&ULuminARFrameFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULuminARFrameFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARFrameFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuminARFrameFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuminARFrameFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuminARFrameFunctionLibrary, 3419584316);
	template<> MAGICLEAPAR_API UClass* StaticClass<ULuminARFrameFunctionLibrary>()
	{
		return ULuminARFrameFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuminARFrameFunctionLibrary(Z_Construct_UClass_ULuminARFrameFunctionLibrary, &ULuminARFrameFunctionLibrary::StaticClass, TEXT("/Script/MagicLeapAR"), TEXT("ULuminARFrameFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuminARFrameFunctionLibrary);
	DEFINE_FUNCTION(ULuminARImageTrackingFunctionLibrary::execAddLuminRuntimeCandidateImage)
	{
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig);
		P_GET_OBJECT(UTexture2D,Z_Param_CandidateTexture);
		P_GET_PROPERTY(FStrProperty,Z_Param_FriendlyName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PhysicalWidth);
		P_GET_UBOOL(Z_Param_bUseUnreliablePose);
		P_GET_UBOOL(Z_Param_bImageIsStationary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULuminARCandidateImage**)Z_Param__Result=ULuminARImageTrackingFunctionLibrary::AddLuminRuntimeCandidateImage(Z_Param_SessionConfig,Z_Param_CandidateTexture,Z_Param_FriendlyName,Z_Param_PhysicalWidth,Z_Param_bUseUnreliablePose,Z_Param_bImageIsStationary);
		P_NATIVE_END;
	}
	void ULuminARImageTrackingFunctionLibrary::StaticRegisterNativesULuminARImageTrackingFunctionLibrary()
	{
		UClass* Class = ULuminARImageTrackingFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLuminRuntimeCandidateImage", &ULuminARImageTrackingFunctionLibrary::execAddLuminRuntimeCandidateImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics
	{
		struct LuminARImageTrackingFunctionLibrary_eventAddLuminRuntimeCandidateImage_Parms
		{
			UARSessionConfig* SessionConfig;
			UTexture2D* CandidateTexture;
			FString FriendlyName;
			float PhysicalWidth;
			bool bUseUnreliablePose;
			bool bImageIsStationary;
			ULuminARCandidateImage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bImageIsStationary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImageIsStationary;
		static void NewProp_bUseUnreliablePose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseUnreliablePose;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhysicalWidth;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CandidateTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARImageTrackingFunctionLibrary_eventAddLuminRuntimeCandidateImage_Parms, ReturnValue), Z_Construct_UClass_ULuminARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_bImageIsStationary_SetBit(void* Obj)
	{
		((LuminARImageTrackingFunctionLibrary_eventAddLuminRuntimeCandidateImage_Parms*)Obj)->bImageIsStationary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_bImageIsStationary = { "bImageIsStationary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LuminARImageTrackingFunctionLibrary_eventAddLuminRuntimeCandidateImage_Parms), &Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_bImageIsStationary_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_bUseUnreliablePose_SetBit(void* Obj)
	{
		((LuminARImageTrackingFunctionLibrary_eventAddLuminRuntimeCandidateImage_Parms*)Obj)->bUseUnreliablePose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_bUseUnreliablePose = { "bUseUnreliablePose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LuminARImageTrackingFunctionLibrary_eventAddLuminRuntimeCandidateImage_Parms), &Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_bUseUnreliablePose_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_PhysicalWidth = { "PhysicalWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARImageTrackingFunctionLibrary_eventAddLuminRuntimeCandidateImage_Parms, PhysicalWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARImageTrackingFunctionLibrary_eventAddLuminRuntimeCandidateImage_Parms, FriendlyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_CandidateTexture = { "CandidateTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARImageTrackingFunctionLibrary_eventAddLuminRuntimeCandidateImage_Parms, CandidateTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_SessionConfig = { "SessionConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuminARImageTrackingFunctionLibrary_eventAddLuminRuntimeCandidateImage_Parms, SessionConfig), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_bImageIsStationary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_bUseUnreliablePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_PhysicalWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_CandidateTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::NewProp_SessionConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "LuminAR|Image Tracking" },
		{ "Comment", "/**\n\x09 * Create a LuminARCandidateImage object and add it to the ARCandidateImageList of the given \\c UARSessionConfig object.\n\x09 *\n\x09 * Note that you need to restart the AR session with the \\c UARSessionConfig you are adding to to make the change take effect.\n\x09 *\n\x09 * On ARCore platform, you can leave the PhysicalWidth to 0 if you don't know the physical size of the image or\n\x09 * the physical size is dynamic. And this function takes time to perform non-trivial image processing (20ms - 30ms),\n\x09 * and should be run on a background thread.\n\x09 *\n\x09 * @return A \\c ULuminARCandidateImage Object pointer if the underlying ARPlatform added the candidate image at runtime successfully.\n\x09 *\x09\x09  Return nullptr otherwise.\n\x09 */" },
		{ "Keywords", "lumin ar augmentedreality augmented reality candidate image" },
		{ "ModuleRelativePath", "Public/LuminARFunctionLibrary.h" },
		{ "ToolTip", "Create a LuminARCandidateImage object and add it to the ARCandidateImageList of the given \\c UARSessionConfig object.\n\nNote that you need to restart the AR session with the \\c UARSessionConfig you are adding to to make the change take effect.\n\nOn ARCore platform, you can leave the PhysicalWidth to 0 if you don't know the physical size of the image or\nthe physical size is dynamic. And this function takes time to perform non-trivial image processing (20ms - 30ms),\nand should be run on a background thread.\n\n@return A \\c ULuminARCandidateImage Object pointer if the underlying ARPlatform added the candidate image at runtime successfully.\n               Return nullptr otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary, nullptr, "AddLuminRuntimeCandidateImage", nullptr, nullptr, sizeof(LuminARImageTrackingFunctionLibrary_eventAddLuminRuntimeCandidateImage_Parms), Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary_NoRegister()
	{
		return ULuminARImageTrackingFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapAR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage, "AddLuminRuntimeCandidateImage" }, // 3316560904
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuminARFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/LuminARFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuminARImageTrackingFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary_Statics::ClassParams = {
		&ULuminARImageTrackingFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuminARImageTrackingFunctionLibrary, 1775658761);
	template<> MAGICLEAPAR_API UClass* StaticClass<ULuminARImageTrackingFunctionLibrary>()
	{
		return ULuminARImageTrackingFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuminARImageTrackingFunctionLibrary(Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary, &ULuminARImageTrackingFunctionLibrary::StaticClass, TEXT("/Script/MagicLeapAR"), TEXT("ULuminARImageTrackingFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuminARImageTrackingFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
