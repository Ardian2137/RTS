// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SALWARTS_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define SALWARTS_MyGameInstance_generated_h

#define RTS_Source_SalwaRTS_MyGameInstance_h_15_RPC_WRAPPERS
#define RTS_Source_SalwaRTS_MyGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define RTS_Source_SalwaRTS_MyGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_UMyGameInstance(); \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_MyGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_UMyGameInstance(); \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_MyGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public:


#define RTS_Source_SalwaRTS_MyGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance)


#define RTS_Source_SalwaRTS_MyGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define RTS_Source_SalwaRTS_MyGameInstance_h_12_PROLOG
#define RTS_Source_SalwaRTS_MyGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_MyGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_MyGameInstance_h_15_RPC_WRAPPERS \
	RTS_Source_SalwaRTS_MyGameInstance_h_15_INCLASS \
	RTS_Source_SalwaRTS_MyGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_Source_SalwaRTS_MyGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_MyGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_MyGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_MyGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_MyGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_Source_SalwaRTS_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
