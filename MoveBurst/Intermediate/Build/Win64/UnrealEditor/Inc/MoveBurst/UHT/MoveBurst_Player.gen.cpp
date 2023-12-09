// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveBurst/MoveBurst_Player.h"
#include "EnhancedInput/Public/EnhancedActionKeyMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveBurst_Player() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
	MOVEBURST_API UClass* Z_Construct_UClass_AMoveBurst_Player();
	MOVEBURST_API UClass* Z_Construct_UClass_AMoveBurst_Player_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MoveBurst();
// End Cross Module References
	DEFINE_FUNCTION(AMoveBurst_Player::execFinishAttackMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishAttackMontage();
		P_NATIVE_END;
	}
	void AMoveBurst_Player::StaticRegisterNativesAMoveBurst_Player()
	{
		UClass* Class = AMoveBurst_Player::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishAttackMontage", &AMoveBurst_Player::execFinishAttackMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_FinishAttackMontage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_FinishAttackMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_FinishAttackMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "FinishAttackMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_FinishAttackMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_FinishAttackMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_FinishAttackMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_FinishAttackMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoveBurst_Player);
	UClass* Z_Construct_UClass_AMoveBurst_Player_NoRegister()
	{
		return AMoveBurst_Player::StaticClass();
	}
	struct Z_Construct_UClass_AMoveBurst_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerDefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerDefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_moveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_crouchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pressRightAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pressRightAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pressLeftAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pressLeftAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_releaseRightAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_releaseRightAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_releaseLeftAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_releaseLeftAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_releaseCrouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_releaseCrouchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_releaseJumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_releaseJumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lightPunchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lightPunchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mediumPunchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mediumPunchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heavyPunchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_heavyPunchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lightKickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lightKickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mediumKickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mediumKickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heavyKickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_heavyKickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_directionalInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_directionalInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tempSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tempSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tempCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tempCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCrouching_MetaData[];
#endif
		static void NewProp_bCrouching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrouching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_standingCapsuleHalfHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_standingCapsuleHalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crouchingCapsuleHalfHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_crouchingCapsuleHalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_normalJumpHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_normalJumpHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_highJumpHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_highJumpHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_doubleJumpHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_doubleJumpHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_normalWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_normalWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dashSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dashSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanDash_MetaData[];
#endif
		static void NewProp_bCanDash_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastMoveInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lastMoveInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFacingRight_MetaData[];
#endif
		static void NewProp_bFacingRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFacingRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_previousInputDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_previousInputDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentInputDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentInputDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_punchAttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_punchAttackMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kickAttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_kickAttackMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoveBurst_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveBurst,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMoveBurst_Player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMoveBurst_Player_FinishAttackMontage, "FinishAttackMontage" }, // 1002539357
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MoveBurst_Player.h" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_playerDefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_playerDefaultMappingContext = { "playerDefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, playerDefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_playerDefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_playerDefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveAction = { "moveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_jumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_jumpAction = { "jumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, jumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_jumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_jumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_crouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_crouchAction = { "crouchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, crouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_crouchAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_crouchAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_pressRightAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_pressRightAction = { "pressRightAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, pressRightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_pressRightAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_pressRightAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_pressLeftAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_pressLeftAction = { "pressLeftAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, pressLeftAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_pressLeftAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_pressLeftAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseRightAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseRightAction = { "releaseRightAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, releaseRightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseRightAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseRightAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseLeftAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseLeftAction = { "releaseLeftAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, releaseLeftAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseLeftAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseLeftAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseCrouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseCrouchAction = { "releaseCrouchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, releaseCrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseCrouchAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseCrouchAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseJumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseJumpAction = { "releaseJumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, releaseJumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseJumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseJumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lightPunchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lightPunchAction = { "lightPunchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, lightPunchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lightPunchAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lightPunchAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_mediumPunchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_mediumPunchAction = { "mediumPunchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, mediumPunchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_mediumPunchAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_mediumPunchAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_heavyPunchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_heavyPunchAction = { "heavyPunchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, heavyPunchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_heavyPunchAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_heavyPunchAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lightKickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lightKickAction = { "lightKickAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, lightKickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lightKickAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lightKickAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_mediumKickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_mediumKickAction = { "mediumKickAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, mediumKickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_mediumKickAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_mediumKickAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_heavyKickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_heavyKickAction = { "heavyKickAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, heavyKickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_heavyKickAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_heavyKickAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_directionalInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_directionalInputAction = { "directionalInputAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, directionalInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_directionalInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_directionalInputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_tempSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MoveBurst_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_tempSpringArm = { "tempSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, tempSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_tempSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_tempSpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_tempCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MoveBurst_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_tempCamera = { "tempCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, tempCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_tempCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_tempCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCrouching_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	void Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCrouching_SetBit(void* Obj)
	{
		((AMoveBurst_Player*)Obj)->bCrouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCrouching = { "bCrouching", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMoveBurst_Player), &Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCrouching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_standingCapsuleHalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_standingCapsuleHalfHeight = { "standingCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, standingCapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_standingCapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_standingCapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_crouchingCapsuleHalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_crouchingCapsuleHalfHeight = { "crouchingCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, crouchingCapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_crouchingCapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_crouchingCapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_normalJumpHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_normalJumpHeight = { "normalJumpHeight", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, normalJumpHeight), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_normalJumpHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_normalJumpHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_highJumpHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_highJumpHeight = { "highJumpHeight", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, highJumpHeight), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_highJumpHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_highJumpHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_doubleJumpHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_doubleJumpHeight = { "doubleJumpHeight", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, doubleJumpHeight), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_doubleJumpHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_doubleJumpHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_normalWalkSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_normalWalkSpeed = { "normalWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, normalWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_normalWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_normalWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_dashSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_dashSpeed = { "dashSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, dashSpeed), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_dashSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_dashSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCanDash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	void Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCanDash_SetBit(void* Obj)
	{
		((AMoveBurst_Player*)Obj)->bCanDash = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCanDash = { "bCanDash", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMoveBurst_Player), &Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCanDash_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCanDash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCanDash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lastMoveInput_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MoveBurst_Player" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lastMoveInput = { "lastMoveInput", nullptr, (EPropertyFlags)0x0040008000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, lastMoveInput), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lastMoveInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lastMoveInput_MetaData)) }; // 1165885959
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bFacingRight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MoveBurst_Player" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	void Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bFacingRight_SetBit(void* Obj)
	{
		((AMoveBurst_Player*)Obj)->bFacingRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bFacingRight = { "bFacingRight", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMoveBurst_Player), &Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bFacingRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bFacingRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bFacingRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_previousInputDirection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Directional Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_previousInputDirection = { "previousInputDirection", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, previousInputDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_previousInputDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_previousInputDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_currentInputDirection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Directional Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_currentInputDirection = { "currentInputDirection", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, currentInputDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_currentInputDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_currentInputDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_punchAttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_punchAttackMontage = { "punchAttackMontage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, punchAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_punchAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_punchAttackMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_kickAttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_kickAttackMontage = { "kickAttackMontage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, kickAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_kickAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_kickAttackMontage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveBurst_Player_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_playerDefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_jumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_crouchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_pressRightAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_pressLeftAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseRightAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseLeftAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseCrouchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_releaseJumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lightPunchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_mediumPunchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_heavyPunchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lightKickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_mediumKickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_heavyKickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_directionalInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_tempSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_tempCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCrouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_standingCapsuleHalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_crouchingCapsuleHalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_normalJumpHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_highJumpHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_doubleJumpHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_normalWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_dashSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCanDash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_lastMoveInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bFacingRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_previousInputDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_currentInputDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_punchAttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_kickAttackMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoveBurst_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveBurst_Player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveBurst_Player_Statics::ClassParams = {
		&AMoveBurst_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMoveBurst_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoveBurst_Player()
	{
		if (!Z_Registration_Info_UClass_AMoveBurst_Player.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoveBurst_Player.OuterSingleton, Z_Construct_UClass_AMoveBurst_Player_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMoveBurst_Player.OuterSingleton;
	}
	template<> MOVEBURST_API UClass* StaticClass<AMoveBurst_Player>()
	{
		return AMoveBurst_Player::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveBurst_Player);
	AMoveBurst_Player::~AMoveBurst_Player() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMoveBurst_Player, AMoveBurst_Player::StaticClass, TEXT("AMoveBurst_Player"), &Z_Registration_Info_UClass_AMoveBurst_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveBurst_Player), 3788330853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_3129525976(TEXT("/Script/MoveBurst"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
