// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SALWARTS_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define SALWARTS_Weapon_generated_h

#define RTS_Source_SalwaRTS_Weapon_h_30_RPC_WRAPPERS
#define RTS_Source_SalwaRTS_Weapon_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define RTS_Source_SalwaRTS_Weapon_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_AWeapon(); \
public: \
	DECLARE_CLASS(AWeapon, AItem, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_Weapon_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend SALWARTS_API class UClass* Z_Construct_UClass_AWeapon(); \
public: \
	DECLARE_CLASS(AWeapon, AItem, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SalwaRTS"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RTS_Source_SalwaRTS_Weapon_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define RTS_Source_SalwaRTS_Weapon_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define RTS_Source_SalwaRTS_Weapon_h_30_PRIVATE_PROPERTY_OFFSET
#define RTS_Source_SalwaRTS_Weapon_h_27_PROLOG
#define RTS_Source_SalwaRTS_Weapon_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_Weapon_h_30_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_Weapon_h_30_RPC_WRAPPERS \
	RTS_Source_SalwaRTS_Weapon_h_30_INCLASS \
	RTS_Source_SalwaRTS_Weapon_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_Source_SalwaRTS_Weapon_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_Source_SalwaRTS_Weapon_h_30_PRIVATE_PROPERTY_OFFSET \
	RTS_Source_SalwaRTS_Weapon_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_Weapon_h_30_INCLASS_NO_PURE_DECLS \
	RTS_Source_SalwaRTS_Weapon_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_Source_SalwaRTS_Weapon_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Sword) \
	op(EWeaponType::Axe) \
	op(EWeaponType::Shield) \
	op(EWeaponType::Mace) \
	op(EWeaponType::Bow) \
	op(EWeaponType::Crossbow) \
	op(EWeaponType::None) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
