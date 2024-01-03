// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DamageInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FS_AttackData;
#ifdef MOVEBURST_DamageInterface_generated_h
#error "DamageInterface.generated.h already included, missing '#pragma once' in DamageInterface.h"
#endif
#define MOVEBURST_DamageInterface_generated_h

#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_SPARSE_DATA
#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_RPC_WRAPPERS \
	virtual void OnHit_Implementation(AActor* InstigatingActor, FS_AttackData AttackData) {}; \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnHit_Implementation(AActor* InstigatingActor, FS_AttackData AttackData) {}; \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_ACCESSORS
#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVEBURST_API UDamageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVEBURST_API, UDamageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVEBURST_API UDamageInterface(UDamageInterface&&); \
	MOVEBURST_API UDamageInterface(const UDamageInterface&); \
public: \
	MOVEBURST_API virtual ~UDamageInterface();


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVEBURST_API UDamageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVEBURST_API UDamageInterface(UDamageInterface&&); \
	MOVEBURST_API UDamageInterface(const UDamageInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVEBURST_API, UDamageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageInterface) \
	MOVEBURST_API virtual ~UDamageInterface();


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamageInterface(); \
	friend struct Z_Construct_UClass_UDamageInterface_Statics; \
public: \
	DECLARE_CLASS(UDamageInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MoveBurst"), MOVEBURST_API) \
	DECLARE_SERIALIZER(UDamageInterface)


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamageInterface() {} \
public: \
	typedef UDamageInterface UClassType; \
	typedef IDamageInterface ThisClass; \
	static void Execute_OnHit(UObject* O, AActor* InstigatingActor, FS_AttackData AttackData); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IDamageInterface() {} \
public: \
	typedef UDamageInterface UClassType; \
	typedef IDamageInterface ThisClass; \
	static void Execute_OnHit(UObject* O, AActor* InstigatingActor, FS_AttackData AttackData); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_11_PROLOG
#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_SPARSE_DATA \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_RPC_WRAPPERS \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_ACCESSORS \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_SPARSE_DATA \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_ACCESSORS \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEBURST_API UClass* StaticClass<class UDamageInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
