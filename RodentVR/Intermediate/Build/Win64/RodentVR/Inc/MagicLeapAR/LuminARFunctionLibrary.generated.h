// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLatentActionInfo;
class ULuminARSessionConfig;
struct FVector2D;
enum class ELuminARLineTraceChannel : uint8;
struct FARTraceResult;
enum class ELuminARTrackingState : uint8;
class UARSessionConfig;
class UTexture2D;
class ULuminARCandidateImage;
#ifdef MAGICLEAPAR_LuminARFunctionLibrary_generated_h
#error "LuminARFunctionLibrary.generated.h already included, missing '#pragma once' in LuminARFunctionLibrary.h"
#endif
#define MAGICLEAPAR_LuminARFunctionLibrary_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartLuminARSession);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartLuminARSession);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuminARSessionFunctionLibrary(); \
	friend struct Z_Construct_UClass_ULuminARSessionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(ULuminARSessionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapAR"), NO_API) \
	DECLARE_SERIALIZER(ULuminARSessionFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesULuminARSessionFunctionLibrary(); \
	friend struct Z_Construct_UClass_ULuminARSessionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(ULuminARSessionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapAR"), NO_API) \
	DECLARE_SERIALIZER(ULuminARSessionFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuminARSessionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuminARSessionFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuminARSessionFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuminARSessionFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuminARSessionFunctionLibrary(ULuminARSessionFunctionLibrary&&); \
	NO_API ULuminARSessionFunctionLibrary(const ULuminARSessionFunctionLibrary&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuminARSessionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuminARSessionFunctionLibrary(ULuminARSessionFunctionLibrary&&); \
	NO_API ULuminARSessionFunctionLibrary(const ULuminARSessionFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuminARSessionFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuminARSessionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuminARSessionFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_14_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPAR_API UClass* StaticClass<class ULuminARSessionFunctionLibrary>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLuminARLineTrace); \
	DECLARE_FUNCTION(execGetTrackingState);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLuminARLineTrace); \
	DECLARE_FUNCTION(execGetTrackingState);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuminARFrameFunctionLibrary(); \
	friend struct Z_Construct_UClass_ULuminARFrameFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(ULuminARFrameFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapAR"), NO_API) \
	DECLARE_SERIALIZER(ULuminARFrameFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_INCLASS \
private: \
	static void StaticRegisterNativesULuminARFrameFunctionLibrary(); \
	friend struct Z_Construct_UClass_ULuminARFrameFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(ULuminARFrameFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapAR"), NO_API) \
	DECLARE_SERIALIZER(ULuminARFrameFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuminARFrameFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuminARFrameFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuminARFrameFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuminARFrameFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuminARFrameFunctionLibrary(ULuminARFrameFunctionLibrary&&); \
	NO_API ULuminARFrameFunctionLibrary(const ULuminARFrameFunctionLibrary&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuminARFrameFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuminARFrameFunctionLibrary(ULuminARFrameFunctionLibrary&&); \
	NO_API ULuminARFrameFunctionLibrary(const ULuminARFrameFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuminARFrameFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuminARFrameFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuminARFrameFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_34_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPAR_API UClass* StaticClass<class ULuminARFrameFunctionLibrary>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddLuminRuntimeCandidateImage);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddLuminRuntimeCandidateImage);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuminARImageTrackingFunctionLibrary(); \
	friend struct Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(ULuminARImageTrackingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapAR"), NO_API) \
	DECLARE_SERIALIZER(ULuminARImageTrackingFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_INCLASS \
private: \
	static void StaticRegisterNativesULuminARImageTrackingFunctionLibrary(); \
	friend struct Z_Construct_UClass_ULuminARImageTrackingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(ULuminARImageTrackingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapAR"), NO_API) \
	DECLARE_SERIALIZER(ULuminARImageTrackingFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuminARImageTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuminARImageTrackingFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuminARImageTrackingFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuminARImageTrackingFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuminARImageTrackingFunctionLibrary(ULuminARImageTrackingFunctionLibrary&&); \
	NO_API ULuminARImageTrackingFunctionLibrary(const ULuminARImageTrackingFunctionLibrary&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuminARImageTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuminARImageTrackingFunctionLibrary(ULuminARImageTrackingFunctionLibrary&&); \
	NO_API ULuminARImageTrackingFunctionLibrary(const ULuminARImageTrackingFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuminARImageTrackingFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuminARImageTrackingFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuminARImageTrackingFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_63_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPAR_API UClass* StaticClass<class ULuminARImageTrackingFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
