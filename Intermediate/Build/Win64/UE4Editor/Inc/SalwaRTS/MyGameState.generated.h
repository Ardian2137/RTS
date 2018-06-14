// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SALWARTS_MyGameState_generated_h
#error "MyGameState.generated.h already included, missing '#pragma once' in MyGameState.h"
#endif
#define SALWARTS_MyGameState_generated_h

#define RTS_Source_SalwaRTS_MyGameState_h_15_RPC_WRAPPERS
#define RTS_Source_SalwaRTS_MyGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define RTS_Source_SalwaRTS_MyGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameState(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_AMyGameState(); \
public: \
	DECLARE_CLASS(AMyGameState, AGameState, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(AMyGameState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_MyGameState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameState(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_AMyGameState(); \
public: \
	DECLARE_CLASS(AMyGameState, AGameState, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(AMyGameState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_MyGameState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameState(AMyGameState&&); \
	NO_API AMyGameState(const AMyGameState&); \
public:


#define RTS_Source_SalwaRTS_MyGameState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameState(AMyGameState&&); \
	NO_API AMyGameState(const AMyGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameState)


#define RTS_Source_SalwaRTS_MyGameState_h_15_PRIVATE_PROPERTY_OFFSET
#define RTS_Source_SalwaRTS_MyGameState_h_12_PROLOG
#define RTS_Source_SalwaRTS_MyGameState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_MyGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_MyGameState_h_15_RPC_WRAPPERS \
	RTS_Source_SalwaRTS_MyGameState_h_15_INCLASS \
	RTS_Source_SalwaRTS_MyGameState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_Source_SalwaRTS_MyGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_MyGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_MyGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_MyGameState_h_15_INCLASS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_MyGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_Source_SalwaRTS_MyGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
