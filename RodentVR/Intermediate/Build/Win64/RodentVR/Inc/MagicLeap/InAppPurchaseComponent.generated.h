// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPurchaseConfirmation;
struct FPurchaseItemDetails;
#ifdef MAGICLEAP_InAppPurchaseComponent_generated_h
#error "InAppPurchaseComponent.generated.h already included, missing '#pragma once' in InAppPurchaseComponent.h"
#endif
#define MAGICLEAP_InAppPurchaseComponent_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics; \
	MAGICLEAP_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAP_API UScriptStruct* StaticStruct<struct FPurchaseConfirmation>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics; \
	MAGICLEAP_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAP_API UScriptStruct* StaticStruct<struct FPurchaseItemDetails>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_170_DELEGATE \
static inline void FGetPurchaseHistoryFailure_DelegateWrapper(const FMulticastScriptDelegate& GetPurchaseHistoryFailure) \
{ \
	GetPurchaseHistoryFailure.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_165_DELEGATE \
struct InAppPurchaseComponent_eventGetPurchaseHistorySuccess_Parms \
{ \
	TArray<FPurchaseConfirmation> PurchaseHistory; \
}; \
static inline void FGetPurchaseHistorySuccess_DelegateWrapper(const FMulticastScriptDelegate& GetPurchaseHistorySuccess, TArray<FPurchaseConfirmation> const& PurchaseHistory) \
{ \
	InAppPurchaseComponent_eventGetPurchaseHistorySuccess_Parms Parms; \
	Parms.PurchaseHistory=PurchaseHistory; \
	GetPurchaseHistorySuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_159_DELEGATE \
static inline void FPurchaseConfirmationFailure_DelegateWrapper(const FMulticastScriptDelegate& PurchaseConfirmationFailure) \
{ \
	PurchaseConfirmationFailure.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_154_DELEGATE \
struct InAppPurchaseComponent_eventPurchaseConfirmationSuccess_Parms \
{ \
	FPurchaseConfirmation PurchaseConfirmations; \
}; \
static inline void FPurchaseConfirmationSuccess_DelegateWrapper(const FMulticastScriptDelegate& PurchaseConfirmationSuccess, FPurchaseConfirmation const& PurchaseConfirmations) \
{ \
	InAppPurchaseComponent_eventPurchaseConfirmationSuccess_Parms Parms; \
	Parms.PurchaseConfirmations=PurchaseConfirmations; \
	PurchaseConfirmationSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_148_DELEGATE \
static inline void FGetItemsDetailsFailure_DelegateWrapper(const FMulticastScriptDelegate& GetItemsDetailsFailure) \
{ \
	GetItemsDetailsFailure.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_143_DELEGATE \
struct InAppPurchaseComponent_eventGetItemsDetailsSuccess_Parms \
{ \
	TArray<FPurchaseItemDetails> ItemsDetails; \
}; \
static inline void FGetItemsDetailsSuccess_DelegateWrapper(const FMulticastScriptDelegate& GetItemsDetailsSuccess, TArray<FPurchaseItemDetails> const& ItemsDetails) \
{ \
	InAppPurchaseComponent_eventGetItemsDetailsSuccess_Parms Parms; \
	Parms.ItemsDetails=ItemsDetails; \
	GetItemsDetailsSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_137_DELEGATE \
struct InAppPurchaseComponent_eventInAppPurchaseLogMessage_Parms \
{ \
	FString LogMessage; \
}; \
static inline void FInAppPurchaseLogMessage_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseLogMessage, const FString& LogMessage) \
{ \
	InAppPurchaseComponent_eventInAppPurchaseLogMessage_Parms Parms; \
	Parms.LogMessage=LogMessage; \
	InAppPurchaseLogMessage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTryGetPurchaseHistoryAsync); \
	DECLARE_FUNCTION(execTryPurchaseItemAsync); \
	DECLARE_FUNCTION(execTryGetItemsDetailsAsync);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTryGetPurchaseHistoryAsync); \
	DECLARE_FUNCTION(execTryPurchaseItemAsync); \
	DECLARE_FUNCTION(execTryGetItemsDetailsAsync);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInAppPurchaseComponent(); \
	friend struct Z_Construct_UClass_UInAppPurchaseComponent_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeap"), NO_API) \
	DECLARE_SERIALIZER(UInAppPurchaseComponent)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseComponent(); \
	friend struct Z_Construct_UClass_UInAppPurchaseComponent_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeap"), NO_API) \
	DECLARE_SERIALIZER(UInAppPurchaseComponent)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInAppPurchaseComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInAppPurchaseComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInAppPurchaseComponent(UInAppPurchaseComponent&&); \
	NO_API UInAppPurchaseComponent(const UInAppPurchaseComponent&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInAppPurchaseComponent(UInAppPurchaseComponent&&); \
	NO_API UInAppPurchaseComponent(const UInAppPurchaseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInAppPurchaseComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInAppPurchaseComponent)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_86_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAP_API UClass* StaticClass<class UInAppPurchaseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_InAppPurchaseComponent_h


#define FOREACH_ENUM_CLOUDSTATUS(op) \
	op(CloudStatus::CloudStatus_NotDone) \
	op(CloudStatus::CloudStatus_Done) 

enum class CloudStatus : uint8;
template<> MAGICLEAP_API UEnum* StaticEnum<CloudStatus>();

#define FOREACH_ENUM_PURCHASETYPE(op) \
	op(PurchaseType::Consumable) \
	op(PurchaseType::Nonconsumable) \
	op(PurchaseType::Undefined) 

enum class PurchaseType : uint8;
template<> MAGICLEAP_API UEnum* StaticEnum<PurchaseType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
