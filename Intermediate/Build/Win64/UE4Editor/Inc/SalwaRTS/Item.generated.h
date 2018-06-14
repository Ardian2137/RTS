// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SALWARTS_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define SALWARTS_Item_generated_h

#define RTS_Source_SalwaRTS_Public_Item_h_12_RPC_WRAPPERS
#define RTS_Source_SalwaRTS_Public_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define RTS_Source_SalwaRTS_Public_Item_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_AItem(); \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_Public_Item_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_AItem(); \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_Public_Item_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define RTS_Source_SalwaRTS_Public_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define RTS_Source_SalwaRTS_Public_Item_h_12_PRIVATE_PROPERTY_OFFSET
#define RTS_Source_SalwaRTS_Public_Item_h_9_PROLOG
#define RTS_Source_SalwaRTS_Public_Item_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_Public_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_Public_Item_h_12_RPC_WRAPPERS \
	RTS_Source_SalwaRTS_Public_Item_h_12_INCLASS \
	RTS_Source_SalwaRTS_Public_Item_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_Source_SalwaRTS_Public_Item_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_Public_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_Public_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_Public_Item_h_12_INCLASS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_Public_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_Source_SalwaRTS_Public_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
