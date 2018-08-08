// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeapon;
#ifdef SALWARTS_WeaponComponent_generated_h
#error "WeaponComponent.generated.h already included, missing '#pragma once' in WeaponComponent.h"
#endif
#define SALWARTS_WeaponComponent_generated_h

#define RTS_Source_SalwaRTS_WeaponComponent_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAttackMade) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttackMade(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFightingWeaponRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFightingWeaponRange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRightWeapon) \
	{ \
		P_GET_OBJECT(AWeapon,Z_Param_NewRightWeapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetRightWeapon(Z_Param_NewRightWeapon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLeftWeapon) \
	{ \
		P_GET_OBJECT(AWeapon,Z_Param_NewLeftWeapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetLeftWeapon(Z_Param_NewLeftWeapon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHaveTargetInCombatRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HaveTargetInCombatRange(); \
		P_NATIVE_END; \
	}


#define RTS_Source_SalwaRTS_WeaponComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttackMade) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttackMade(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFightingWeaponRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFightingWeaponRange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRightWeapon) \
	{ \
		P_GET_OBJECT(AWeapon,Z_Param_NewRightWeapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetRightWeapon(Z_Param_NewRightWeapon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLeftWeapon) \
	{ \
		P_GET_OBJECT(AWeapon,Z_Param_NewLeftWeapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetLeftWeapon(Z_Param_NewLeftWeapon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHaveTargetInCombatRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HaveTargetInCombatRange(); \
		P_NATIVE_END; \
	}


#define RTS_Source_SalwaRTS_WeaponComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_UWeaponComponent(); \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_WeaponComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_UWeaponComponent(); \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_WeaponComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponComponent(UWeaponComponent&&); \
	NO_API UWeaponComponent(const UWeaponComponent&); \
public:


#define RTS_Source_SalwaRTS_WeaponComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponComponent(UWeaponComponent&&); \
	NO_API UWeaponComponent(const UWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponComponent)


#define RTS_Source_SalwaRTS_WeaponComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RightWeapon() { return STRUCT_OFFSET(UWeaponComponent, RightWeapon); } \
	FORCEINLINE static uint32 __PPO__LeftWeapon() { return STRUCT_OFFSET(UWeaponComponent, LeftWeapon); }


#define RTS_Source_SalwaRTS_WeaponComponent_h_27_PROLOG
#define RTS_Source_SalwaRTS_WeaponComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_WeaponComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_WeaponComponent_h_30_RPC_WRAPPERS \
	RTS_Source_SalwaRTS_WeaponComponent_h_30_INCLASS \
	RTS_Source_SalwaRTS_WeaponComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_Source_SalwaRTS_WeaponComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_WeaponComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_WeaponComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_WeaponComponent_h_30_INCLASS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_WeaponComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_Source_SalwaRTS_WeaponComponent_h


#define FOREACH_ENUM_EFIGHTINGSTYLE(op) \
	op(EFightingStyle::OneHandedAndShield) \
	op(EFightingStyle::TwoHanded) \
	op(EFightingStyle::BareFists) \
	op(EFightingStyle::Crossbow) \
	op(EFightingStyle::Bow) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
