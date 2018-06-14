// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SALWARTS_MyGameMode_generated_h
#error "MyGameMode.generated.h already included, missing '#pragma once' in MyGameMode.h"
#endif
#define SALWARTS_MyGameMode_generated_h

#define RTS_Source_SalwaRTS_MyGameMode_h_18_RPC_WRAPPERS
#define RTS_Source_SalwaRTS_MyGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define RTS_Source_SalwaRTS_MyGameMode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameMode(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_AMyGameMode(); \
public: \
	DECLARE_CLASS(AMyGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(AMyGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_MyGameMode_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameMode(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_AMyGameMode(); \
public: \
	DECLARE_CLASS(AMyGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(AMyGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_MyGameMode_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameMode(AMyGameMode&&); \
	NO_API AMyGameMode(const AMyGameMode&); \
public:


#define RTS_Source_SalwaRTS_MyGameMode_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameMode(AMyGameMode&&); \
	NO_API AMyGameMode(const AMyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameMode)


#define RTS_Source_SalwaRTS_MyGameMode_h_18_PRIVATE_PROPERTY_OFFSET
#define RTS_Source_SalwaRTS_MyGameMode_h_15_PROLOG
#define RTS_Source_SalwaRTS_MyGameMode_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_MyGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_MyGameMode_h_18_RPC_WRAPPERS \
	RTS_Source_SalwaRTS_MyGameMode_h_18_INCLASS \
	RTS_Source_SalwaRTS_MyGameMode_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_Source_SalwaRTS_MyGameMode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_MyGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_MyGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_MyGameMode_h_18_INCLASS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_MyGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_Source_SalwaRTS_MyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
