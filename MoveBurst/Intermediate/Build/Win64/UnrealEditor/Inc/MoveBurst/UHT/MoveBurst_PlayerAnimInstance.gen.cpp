// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveBurst/MoveBurst_PlayerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveBurst_PlayerAnimInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	MOVEBURST_API UClass* Z_Construct_UClass_AMoveBurst_Player_NoRegister();
	MOVEBURST_API UClass* Z_Construct_UClass_UMoveBurst_PlayerAnimInstance();
	MOVEBURST_API UClass* Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MoveBurst();
// End Cross Module References
	DEFINE_FUNCTION(UMoveBurst_PlayerAnimInstance::execUpdateAnimationProperties)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UMoveBurst_PlayerAnimInstance::StaticRegisterNativesUMoveBurst_PlayerAnimInstance()
	{
		UClass* Class = UMoveBurst_PlayerAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UMoveBurst_PlayerAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoveBurst_PlayerAnimInstance_UpdateAnimationProperties_Statics
	{
		struct MoveBurst_PlayerAnimInstance_eventUpdateAnimationProperties_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoveBurst_PlayerAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveBurst_PlayerAnimInstance_eventUpdateAnimationProperties_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoveBurst_PlayerAnimInstance_UpdateAnimationProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoveBurst_PlayerAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveBurst_PlayerAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MoveBurst_PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveBurst_PlayerAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveBurst_PlayerAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoveBurst_PlayerAnimInstance_UpdateAnimationProperties_Statics::MoveBurst_PlayerAnimInstance_eventUpdateAnimationProperties_Parms), Z_Construct_UFunction_UMoveBurst_PlayerAnimInstance_UpdateAnimationProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveBurst_PlayerAnimInstance_UpdateAnimationProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoveBurst_PlayerAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveBurst_PlayerAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoveBurst_PlayerAnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoveBurst_PlayerAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoveBurst_PlayerAnimInstance);
	UClass* Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_NoRegister()
	{
		return UMoveBurst_PlayerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerMovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerMovementComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMove_MetaData[];
#endif
		static void NewProp_bShouldMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[];
#endif
		static void NewProp_bIsFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMovingForward_MetaData[];
#endif
		static void NewProp_bIsMovingForward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMovingForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMovingBackward_MetaData[];
#endif
		static void NewProp_bIsMovingBackward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMovingBackward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCrouching_MetaData[];
#endif
		static void NewProp_bCrouching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrouching;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveBurst,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoveBurst_PlayerAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 2501251869
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MoveBurst_PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "MoveBurst_PlayerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_playerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "MoveBurst_PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_playerCharacter = { "playerCharacter", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoveBurst_PlayerAnimInstance, playerCharacter), Z_Construct_UClass_AMoveBurst_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_playerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_playerCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_playerMovementComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoveBurst_PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_playerMovementComp = { "playerMovementComp", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoveBurst_PlayerAnimInstance, playerMovementComp), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_playerMovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_playerMovementComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_velocity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "MoveBurst_PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoveBurst_PlayerAnimInstance, velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MoveBurst_PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoveBurst_PlayerAnimInstance, speed), METADATA_PARAMS(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bShouldMove_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "MoveBurst_PlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bShouldMove_SetBit(void* Obj)
	{
		((UMoveBurst_PlayerAnimInstance*)Obj)->bShouldMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoveBurst_PlayerAnimInstance), &Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bShouldMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bShouldMove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsFalling_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "MoveBurst_PlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
	{
		((UMoveBurst_PlayerAnimInstance*)Obj)->bIsFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoveBurst_PlayerAnimInstance), &Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsFalling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsMovingForward_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MoveBurst_PlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsMovingForward_SetBit(void* Obj)
	{
		((UMoveBurst_PlayerAnimInstance*)Obj)->bIsMovingForward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsMovingForward = { "bIsMovingForward", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoveBurst_PlayerAnimInstance), &Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsMovingForward_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsMovingForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsMovingForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsMovingBackward_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MoveBurst_PlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsMovingBackward_SetBit(void* Obj)
	{
		((UMoveBurst_PlayerAnimInstance*)Obj)->bIsMovingBackward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsMovingBackward = { "bIsMovingBackward", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoveBurst_PlayerAnimInstance), &Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsMovingBackward_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsMovingBackward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsMovingBackward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bCrouching_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crouching" },
		{ "ModuleRelativePath", "MoveBurst_PlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bCrouching_SetBit(void* Obj)
	{
		((UMoveBurst_PlayerAnimInstance*)Obj)->bCrouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bCrouching = { "bCrouching", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoveBurst_PlayerAnimInstance), &Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bCrouching_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_playerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_playerMovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bShouldMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsMovingForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bIsMovingBackward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::NewProp_bCrouching,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveBurst_PlayerAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::ClassParams = {
		&UMoveBurst_PlayerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoveBurst_PlayerAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UMoveBurst_PlayerAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoveBurst_PlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UMoveBurst_PlayerAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoveBurst_PlayerAnimInstance.OuterSingleton;
	}
	template<> MOVEBURST_API UClass* StaticClass<UMoveBurst_PlayerAnimInstance>()
	{
		return UMoveBurst_PlayerAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveBurst_PlayerAnimInstance);
	UMoveBurst_PlayerAnimInstance::~UMoveBurst_PlayerAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_PlayerAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_PlayerAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoveBurst_PlayerAnimInstance, UMoveBurst_PlayerAnimInstance::StaticClass, TEXT("UMoveBurst_PlayerAnimInstance"), &Z_Registration_Info_UClass_UMoveBurst_PlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoveBurst_PlayerAnimInstance), 2891626732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_PlayerAnimInstance_h_1561962462(TEXT("/Script/MoveBurst"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_PlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_PlayerAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
