// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveBurst/MoveBurst_Player.h"
#include "Engine/Classes/Engine/HitResult.h"
#include "EnhancedInput/Public/EnhancedActionKeyMapping.h"
#include "MoveBurst/S_AttackData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveBurst_Player() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
	MOVEBURST_API UClass* Z_Construct_UClass_AMoveBurst_Player();
	MOVEBURST_API UClass* Z_Construct_UClass_AMoveBurst_Player_NoRegister();
	MOVEBURST_API UClass* Z_Construct_UClass_UDamageInterface_NoRegister();
	MOVEBURST_API UScriptStruct* Z_Construct_UScriptStruct_FS_AttackData();
	UPackage* Z_Construct_UPackage__Script_MoveBurst();
// End Cross Module References
	DEFINE_FUNCTION(AMoveBurst_Player::execDeactivateLeftLeg)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateLeftLeg();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMoveBurst_Player::execDeactivateRightLeg)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateRightLeg();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMoveBurst_Player::execDeactivateLeftArm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateLeftArm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMoveBurst_Player::execDeactivateRightArm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateRightArm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMoveBurst_Player::execActivateLeftLegHitBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateLeftLegHitBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMoveBurst_Player::execActivateRightLegHitBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateRightLegHitBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMoveBurst_Player::execActivateLeftArmHitBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateLeftArmHitBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMoveBurst_Player::execActivateRightArmHitBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateRightArmHitBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMoveBurst_Player::execGetMoveGaugePercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMoveGaugePercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMoveBurst_Player::execGetSpecialGaugePercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpecialGaugePercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMoveBurst_Player::execGetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMoveBurst_Player::execOnLeftLegOverlapStarted)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeftLegOverlapStarted(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMoveBurst_Player::execOnRightLegOverlapStarted)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRightLegOverlapStarted(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMoveBurst_Player::execOnLeftArmOverlapStarted)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeftArmOverlapStarted(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMoveBurst_Player::execOnRightArmOverlapStarted)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRightArmOverlapStarted(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
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
			{ "ActivateLeftArmHitBox", &AMoveBurst_Player::execActivateLeftArmHitBox },
			{ "ActivateLeftLegHitBox", &AMoveBurst_Player::execActivateLeftLegHitBox },
			{ "ActivateRightArmHitBox", &AMoveBurst_Player::execActivateRightArmHitBox },
			{ "ActivateRightLegHitBox", &AMoveBurst_Player::execActivateRightLegHitBox },
			{ "DeactivateLeftArm", &AMoveBurst_Player::execDeactivateLeftArm },
			{ "DeactivateLeftLeg", &AMoveBurst_Player::execDeactivateLeftLeg },
			{ "DeactivateRightArm", &AMoveBurst_Player::execDeactivateRightArm },
			{ "DeactivateRightLeg", &AMoveBurst_Player::execDeactivateRightLeg },
			{ "FinishAttackMontage", &AMoveBurst_Player::execFinishAttackMontage },
			{ "GetHealthPercent", &AMoveBurst_Player::execGetHealthPercent },
			{ "GetMoveGaugePercent", &AMoveBurst_Player::execGetMoveGaugePercent },
			{ "GetSpecialGaugePercent", &AMoveBurst_Player::execGetSpecialGaugePercent },
			{ "OnLeftArmOverlapStarted", &AMoveBurst_Player::execOnLeftArmOverlapStarted },
			{ "OnLeftLegOverlapStarted", &AMoveBurst_Player::execOnLeftLegOverlapStarted },
			{ "OnRightArmOverlapStarted", &AMoveBurst_Player::execOnRightArmOverlapStarted },
			{ "OnRightLegOverlapStarted", &AMoveBurst_Player::execOnRightLegOverlapStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftArmHitBox_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftArmHitBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftArmHitBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "ActivateLeftArmHitBox", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftArmHitBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftArmHitBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftArmHitBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftArmHitBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftLegHitBox_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftLegHitBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftLegHitBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "ActivateLeftLegHitBox", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftLegHitBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftLegHitBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftLegHitBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftLegHitBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_ActivateRightArmHitBox_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_ActivateRightArmHitBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_ActivateRightArmHitBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "ActivateRightArmHitBox", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_ActivateRightArmHitBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_ActivateRightArmHitBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_ActivateRightArmHitBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_ActivateRightArmHitBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_ActivateRightLegHitBox_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_ActivateRightLegHitBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_ActivateRightLegHitBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "ActivateRightLegHitBox", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_ActivateRightLegHitBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_ActivateRightLegHitBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_ActivateRightLegHitBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_ActivateRightLegHitBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftArm_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftArm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "DeactivateLeftArm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftArm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftArm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftLeg_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftLeg_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftLeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "DeactivateLeftLeg", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftLeg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftLeg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftLeg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftLeg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightArm_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightArm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "DeactivateRightArm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightArm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightArm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightLeg_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightLeg_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightLeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "DeactivateRightLeg", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightLeg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightLeg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightLeg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightLeg_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_AMoveBurst_Player_GetHealthPercent_Statics
	{
		struct MoveBurst_Player_eventGetHealthPercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMoveBurst_Player_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoveBurst_Player_GetHealthPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "GetHealthPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMoveBurst_Player_GetHealthPercent_Statics::MoveBurst_Player_eventGetHealthPercent_Parms), Z_Construct_UFunction_AMoveBurst_Player_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_GetHealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_GetHealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_GetHealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_GetMoveGaugePercent_Statics
	{
		struct MoveBurst_Player_eventGetMoveGaugePercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMoveBurst_Player_GetMoveGaugePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventGetMoveGaugePercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoveBurst_Player_GetMoveGaugePercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_GetMoveGaugePercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_GetMoveGaugePercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_GetMoveGaugePercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "GetMoveGaugePercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMoveBurst_Player_GetMoveGaugePercent_Statics::MoveBurst_Player_eventGetMoveGaugePercent_Parms), Z_Construct_UFunction_AMoveBurst_Player_GetMoveGaugePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_GetMoveGaugePercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_GetMoveGaugePercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_GetMoveGaugePercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_GetMoveGaugePercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_GetMoveGaugePercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_GetSpecialGaugePercent_Statics
	{
		struct MoveBurst_Player_eventGetSpecialGaugePercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMoveBurst_Player_GetSpecialGaugePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventGetSpecialGaugePercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoveBurst_Player_GetSpecialGaugePercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_GetSpecialGaugePercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_GetSpecialGaugePercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_GetSpecialGaugePercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "GetSpecialGaugePercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMoveBurst_Player_GetSpecialGaugePercent_Statics::MoveBurst_Player_eventGetSpecialGaugePercent_Parms), Z_Construct_UFunction_AMoveBurst_Player_GetSpecialGaugePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_GetSpecialGaugePercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_GetSpecialGaugePercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_GetSpecialGaugePercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_GetSpecialGaugePercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_GetSpecialGaugePercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics
	{
		struct MoveBurst_Player_eventOnLeftArmOverlapStarted_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnLeftArmOverlapStarted_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnLeftArmOverlapStarted_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnLeftArmOverlapStarted_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnLeftArmOverlapStarted_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MoveBurst_Player_eventOnLeftArmOverlapStarted_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoveBurst_Player_eventOnLeftArmOverlapStarted_Parms), &Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnLeftArmOverlapStarted_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "OnLeftArmOverlapStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::MoveBurst_Player_eventOnLeftArmOverlapStarted_Parms), Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics
	{
		struct MoveBurst_Player_eventOnLeftLegOverlapStarted_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnLeftLegOverlapStarted_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnLeftLegOverlapStarted_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnLeftLegOverlapStarted_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnLeftLegOverlapStarted_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MoveBurst_Player_eventOnLeftLegOverlapStarted_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoveBurst_Player_eventOnLeftLegOverlapStarted_Parms), &Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnLeftLegOverlapStarted_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "OnLeftLegOverlapStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::MoveBurst_Player_eventOnLeftLegOverlapStarted_Parms), Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics
	{
		struct MoveBurst_Player_eventOnRightArmOverlapStarted_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnRightArmOverlapStarted_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnRightArmOverlapStarted_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnRightArmOverlapStarted_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnRightArmOverlapStarted_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MoveBurst_Player_eventOnRightArmOverlapStarted_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoveBurst_Player_eventOnRightArmOverlapStarted_Parms), &Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnRightArmOverlapStarted_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Overlap methods for each limb hitbox/sphere\n" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
		{ "ToolTip", "Overlap methods for each limb hitbox/sphere" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "OnRightArmOverlapStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::MoveBurst_Player_eventOnRightArmOverlapStarted_Parms), Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics
	{
		struct MoveBurst_Player_eventOnRightLegOverlapStarted_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnRightLegOverlapStarted_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnRightLegOverlapStarted_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnRightLegOverlapStarted_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnRightLegOverlapStarted_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MoveBurst_Player_eventOnRightLegOverlapStarted_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoveBurst_Player_eventOnRightLegOverlapStarted_Parms), &Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_Player_eventOnRightLegOverlapStarted_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveBurst_Player, nullptr, "OnRightLegOverlapStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::MoveBurst_Player_eventOnRightLegOverlapStarted_Parms), Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_specialAttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_specialAttackMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_commandString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_commandString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_commandInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_commandInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_commandInputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_specialGauge_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_specialGauge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_specialGaugeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_specialGaugeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveGauge_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveGauge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveGaugeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveGaugeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_attackData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_attackData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightArmBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rightArmBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftArmBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_leftArmBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLegBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rightLegBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLegBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_leftLegBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoveBurst_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveBurst,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMoveBurst_Player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftArmHitBox, "ActivateLeftArmHitBox" }, // 539356849
		{ &Z_Construct_UFunction_AMoveBurst_Player_ActivateLeftLegHitBox, "ActivateLeftLegHitBox" }, // 1633121166
		{ &Z_Construct_UFunction_AMoveBurst_Player_ActivateRightArmHitBox, "ActivateRightArmHitBox" }, // 1994301273
		{ &Z_Construct_UFunction_AMoveBurst_Player_ActivateRightLegHitBox, "ActivateRightLegHitBox" }, // 4182602493
		{ &Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftArm, "DeactivateLeftArm" }, // 1494837276
		{ &Z_Construct_UFunction_AMoveBurst_Player_DeactivateLeftLeg, "DeactivateLeftLeg" }, // 1718312419
		{ &Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightArm, "DeactivateRightArm" }, // 3807226595
		{ &Z_Construct_UFunction_AMoveBurst_Player_DeactivateRightLeg, "DeactivateRightLeg" }, // 358156915
		{ &Z_Construct_UFunction_AMoveBurst_Player_FinishAttackMontage, "FinishAttackMontage" }, // 1002539357
		{ &Z_Construct_UFunction_AMoveBurst_Player_GetHealthPercent, "GetHealthPercent" }, // 2151557190
		{ &Z_Construct_UFunction_AMoveBurst_Player_GetMoveGaugePercent, "GetMoveGaugePercent" }, // 658814384
		{ &Z_Construct_UFunction_AMoveBurst_Player_GetSpecialGaugePercent, "GetSpecialGaugePercent" }, // 316538433
		{ &Z_Construct_UFunction_AMoveBurst_Player_OnLeftArmOverlapStarted, "OnLeftArmOverlapStarted" }, // 555069193
		{ &Z_Construct_UFunction_AMoveBurst_Player_OnLeftLegOverlapStarted, "OnLeftLegOverlapStarted" }, // 3389408639
		{ &Z_Construct_UFunction_AMoveBurst_Player_OnRightArmOverlapStarted, "OnRightArmOverlapStarted" }, // 273505660
		{ &Z_Construct_UFunction_AMoveBurst_Player_OnRightLegOverlapStarted, "OnRightLegOverlapStarted" }, // 2748427422
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialAttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialAttackMontage = { "specialAttackMontage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, specialAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialAttackMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_commandString_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Directional Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_commandString = { "commandString", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, commandString), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_commandString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_commandString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_commandInputs_Inner = { "commandInputs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_commandInputs_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Directional Input" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_commandInputs = { "commandInputs", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, commandInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_commandInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_commandInputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, health), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_maxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, maxHealth), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialGauge_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialGauge = { "specialGauge", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, specialGauge), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialGauge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialGauge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialGaugeMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialGaugeMax = { "specialGaugeMax", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, specialGaugeMax), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialGaugeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialGaugeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveGauge_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Move Gauge" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveGauge = { "moveGauge", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, moveGauge), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveGauge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveGauge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveGaugeMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Move Gauge" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveGaugeMax = { "moveGaugeMax", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, moveGaugeMax), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveGaugeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveGaugeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Move Gauge" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveMultiplier = { "moveMultiplier", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, moveMultiplier), METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveMultiplier_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_attackData_Inner = { "attackData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FS_AttackData, METADATA_PARAMS(nullptr, 0) }; // 2750883578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_attackData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attack Data" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_attackData = { "attackData", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, attackData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_attackData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_attackData_MetaData)) }; // 2750883578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_rightArmBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MoveBurst_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_rightArmBox = { "rightArmBox", nullptr, (EPropertyFlags)0x004000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, rightArmBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_rightArmBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_rightArmBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_leftArmBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MoveBurst_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_leftArmBox = { "leftArmBox", nullptr, (EPropertyFlags)0x004000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, leftArmBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_leftArmBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_leftArmBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_rightLegBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MoveBurst_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_rightLegBox = { "rightLegBox", nullptr, (EPropertyFlags)0x004000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, rightLegBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_rightLegBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_rightLegBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_leftLegBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MoveBurst_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_leftLegBox = { "leftLegBox", nullptr, (EPropertyFlags)0x004000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_Player, leftLegBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_leftLegBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_leftLegBox_MetaData)) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialAttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_commandString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_commandInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_commandInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialGauge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_specialGaugeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveGauge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveGaugeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_moveMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_attackData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_attackData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_rightArmBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_leftArmBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_rightLegBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_leftLegBox,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMoveBurst_Player_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDamageInterface_NoRegister, (int32)VTABLE_OFFSET(AMoveBurst_Player, IDamageInterface), false },  // 174255639
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
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_Player_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_AMoveBurst_Player, AMoveBurst_Player::StaticClass, TEXT("AMoveBurst_Player"), &Z_Registration_Info_UClass_AMoveBurst_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveBurst_Player), 2443422034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_2935032231(TEXT("/Script/MoveBurst"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
