// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SALWARTS_ManaComponent_generated_h
#error "ManaComponent.generated.h already included, missing '#pragma once' in ManaComponent.h"
#endif
#define SALWARTS_ManaComponent_generated_h

#define RTS_Source_SalwaRTS_Public_ManaComponent_h_9_DELEGATE \
static inline void FOnManaAmountChanged_DelegateWrapper(const FMulticastScriptDelegate& OnManaAmountChanged) \
{ \
	OnManaAmountChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define RTS_Source_SalwaRTS_Public_ManaComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetManaPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetManaPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentMana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxMana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxMana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestoreMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestoreMana(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConsumeMana(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxMana(Z_Param_NewMaxHealth); \
		P_NATIVE_END; \
	}


#define RTS_Source_SalwaRTS_Public_ManaComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetManaPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetManaPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentMana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxMana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxMana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestoreMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestoreMana(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConsumeMana(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxMana(Z_Param_NewMaxHealth); \
		P_NATIVE_END; \
	}


#define RTS_Source_SalwaRTS_Public_ManaComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaComponent(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_UManaComponent(); \
public: \
	DECLARE_CLASS(UManaComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(UManaComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_Public_ManaComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUManaComponent(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_UManaComponent(); \
public: \
	DECLARE_CLASS(UManaComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(UManaComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_Public_ManaComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManaComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaComponent(UManaComponent&&); \
	NO_API UManaComponent(const UManaComponent&); \
public:


#define RTS_Source_SalwaRTS_Public_ManaComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaComponent(UManaComponent&&); \
	NO_API UManaComponent(const UManaComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManaComponent)


#define RTS_Source_SalwaRTS_Public_ManaComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define RTS_Source_SalwaRTS_Public_ManaComponent_h_11_PROLOG
#define RTS_Source_SalwaRTS_Public_ManaComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_Public_ManaComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_Public_ManaComponent_h_14_RPC_WRAPPERS \
	RTS_Source_SalwaRTS_Public_ManaComponent_h_14_INCLASS \
	RTS_Source_SalwaRTS_Public_ManaComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_Source_SalwaRTS_Public_ManaComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_Public_ManaComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_Public_ManaComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_Public_ManaComponent_h_14_INCLASS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_Public_ManaComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_Source_SalwaRTS_Public_ManaComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
