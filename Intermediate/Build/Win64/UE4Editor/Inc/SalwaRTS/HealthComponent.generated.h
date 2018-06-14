// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SALWARTS_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define SALWARTS_HealthComponent_generated_h

#define RTS_Source_SalwaRTS_HealthComponent_h_9_DELEGATE \
static inline void FOnHealthAmountChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthAmountChanged) \
{ \
	OnHealthAmountChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define RTS_Source_SalwaRTS_HealthComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealthPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestoreHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestoreHealth(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLooseHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LooseHealth(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxHealth(Z_Param_NewMaxHealth); \
		P_NATIVE_END; \
	}


#define RTS_Source_SalwaRTS_HealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealthPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestoreHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestoreHealth(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLooseHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LooseHealth(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxHealth(Z_Param_NewMaxHealth); \
		P_NATIVE_END; \
	}


#define RTS_Source_SalwaRTS_HealthComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_UHealthComponent(); \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_HealthComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_UHealthComponent(); \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_HealthComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define RTS_Source_SalwaRTS_HealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define RTS_Source_SalwaRTS_HealthComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define RTS_Source_SalwaRTS_HealthComponent_h_11_PROLOG
#define RTS_Source_SalwaRTS_HealthComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_HealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_HealthComponent_h_14_RPC_WRAPPERS \
	RTS_Source_SalwaRTS_HealthComponent_h_14_INCLASS \
	RTS_Source_SalwaRTS_HealthComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_Source_SalwaRTS_HealthComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_HealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_HealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_HealthComponent_h_14_INCLASS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_HealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_Source_SalwaRTS_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
