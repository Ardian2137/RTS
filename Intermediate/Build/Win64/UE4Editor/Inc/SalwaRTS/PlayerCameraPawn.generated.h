// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SALWARTS_PlayerCameraPawn_generated_h
#error "PlayerCameraPawn.generated.h already included, missing '#pragma once' in PlayerCameraPawn.h"
#endif
#define SALWARTS_PlayerCameraPawn_generated_h

#define RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_RPC_WRAPPERS
#define RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCameraPawn(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_APlayerCameraPawn(); \
public: \
	DECLARE_CLASS(APlayerCameraPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(APlayerCameraPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCameraPawn(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_APlayerCameraPawn(); \
public: \
	DECLARE_CLASS(APlayerCameraPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(APlayerCameraPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCameraPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCameraPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCameraPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCameraPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCameraPawn(APlayerCameraPawn&&); \
	NO_API APlayerCameraPawn(const APlayerCameraPawn&); \
public:


#define RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCameraPawn(APlayerCameraPawn&&); \
	NO_API APlayerCameraPawn(const APlayerCameraPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCameraPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCameraPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCameraPawn)


#define RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_PRIVATE_PROPERTY_OFFSET
#define RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_13_PROLOG
#define RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_RPC_WRAPPERS \
	RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_INCLASS \
	RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_INCLASS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_Source_SalwaRTS_Public_PlayerCameraPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
