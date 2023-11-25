// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveBurst/MoveBurst_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveBurst_Player() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	MOVEBURST_API UClass* Z_Construct_UClass_AMoveBurst_Player();
	MOVEBURST_API UClass* Z_Construct_UClass_AMoveBurst_Player_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MoveBurst();
// End Cross Module References
	void AMoveBurst_Player::StaticRegisterNativesAMoveBurst_Player()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoveBurst_Player);
	UClass* Z_Construct_UClass_AMoveBurst_Player_NoRegister()
	{
		return AMoveBurst_Player::StaticClass();
	}
	struct Z_Construct_UClass_AMoveBurst_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoveBurst_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveBurst,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_Player_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MoveBurst_Player.h" },
		{ "ModuleRelativePath", "MoveBurst_Player.h" },
	};
#endif
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveBurst_Player_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_tempSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_tempCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_bCrouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_standingCapsuleHalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_crouchingCapsuleHalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_normalJumpHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_highJumpHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_Player_Statics::NewProp_doubleJumpHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoveBurst_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveBurst_Player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveBurst_Player_Statics::ClassParams = {
		&AMoveBurst_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMoveBurst_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_AMoveBurst_Player, AMoveBurst_Player::StaticClass, TEXT("AMoveBurst_Player"), &Z_Registration_Info_UClass_AMoveBurst_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveBurst_Player), 1647368875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_2024953320(TEXT("/Script/MoveBurst"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_Player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
