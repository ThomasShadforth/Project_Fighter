// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveBurst_Player.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MOVEBURST_MoveBurst_Player_generated_h
#error "MoveBurst_Player.generated.h already included, missing '#pragma once' in MoveBurst_Player.h"
#endif
#define MOVEBURST_MoveBurst_Player_generated_h

#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_SPARSE_DATA
#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeactivateLeftLeg); \
	DECLARE_FUNCTION(execDeactivateRightLeg); \
	DECLARE_FUNCTION(execDeactivateLeftArm); \
	DECLARE_FUNCTION(execDeactivateRightArm); \
	DECLARE_FUNCTION(execActivateLeftLegHitBox); \
	DECLARE_FUNCTION(execActivateRightLegHitBox); \
	DECLARE_FUNCTION(execActivateLeftArmHitBox); \
	DECLARE_FUNCTION(execActivateRightArmHitBox); \
	DECLARE_FUNCTION(execGetMoveGaugePercent); \
	DECLARE_FUNCTION(execGetSpecialGaugePercent); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execOnLeftLegOverlapStarted); \
	DECLARE_FUNCTION(execOnRightLegOverlapStarted); \
	DECLARE_FUNCTION(execOnLeftArmOverlapStarted); \
	DECLARE_FUNCTION(execOnRightArmOverlapStarted); \
	DECLARE_FUNCTION(execFinishAttackMontage);


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeactivateLeftLeg); \
	DECLARE_FUNCTION(execDeactivateRightLeg); \
	DECLARE_FUNCTION(execDeactivateLeftArm); \
	DECLARE_FUNCTION(execDeactivateRightArm); \
	DECLARE_FUNCTION(execActivateLeftLegHitBox); \
	DECLARE_FUNCTION(execActivateRightLegHitBox); \
	DECLARE_FUNCTION(execActivateLeftArmHitBox); \
	DECLARE_FUNCTION(execActivateRightArmHitBox); \
	DECLARE_FUNCTION(execGetMoveGaugePercent); \
	DECLARE_FUNCTION(execGetSpecialGaugePercent); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execOnLeftLegOverlapStarted); \
	DECLARE_FUNCTION(execOnRightLegOverlapStarted); \
	DECLARE_FUNCTION(execOnLeftArmOverlapStarted); \
	DECLARE_FUNCTION(execOnRightArmOverlapStarted); \
	DECLARE_FUNCTION(execFinishAttackMontage);


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_ACCESSORS
#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoveBurst_Player(); \
	friend struct Z_Construct_UClass_AMoveBurst_Player_Statics; \
public: \
	DECLARE_CLASS(AMoveBurst_Player, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveBurst"), NO_API) \
	DECLARE_SERIALIZER(AMoveBurst_Player) \
	virtual UObject* _getUObject() const override { return const_cast<AMoveBurst_Player*>(this); }


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMoveBurst_Player(); \
	friend struct Z_Construct_UClass_AMoveBurst_Player_Statics; \
public: \
	DECLARE_CLASS(AMoveBurst_Player, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveBurst"), NO_API) \
	DECLARE_SERIALIZER(AMoveBurst_Player) \
	virtual UObject* _getUObject() const override { return const_cast<AMoveBurst_Player*>(this); }


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMoveBurst_Player(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMoveBurst_Player) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoveBurst_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoveBurst_Player); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoveBurst_Player(AMoveBurst_Player&&); \
	NO_API AMoveBurst_Player(const AMoveBurst_Player&); \
public: \
	NO_API virtual ~AMoveBurst_Player();


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoveBurst_Player(AMoveBurst_Player&&); \
	NO_API AMoveBurst_Player(const AMoveBurst_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoveBurst_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoveBurst_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoveBurst_Player) \
	NO_API virtual ~AMoveBurst_Player();


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_15_PROLOG
#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_SPARSE_DATA \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_RPC_WRAPPERS \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_ACCESSORS \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_INCLASS \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_SPARSE_DATA \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_ACCESSORS \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEBURST_API UClass* StaticClass<class AMoveBurst_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
