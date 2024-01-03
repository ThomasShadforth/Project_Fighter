// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveBurst/MoveBurst_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveBurst_PlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	MOVEBURST_API UClass* Z_Construct_UClass_AMoveBurst_PlayerController();
	MOVEBURST_API UClass* Z_Construct_UClass_AMoveBurst_PlayerController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MoveBurst();
// End Cross Module References
	void AMoveBurst_PlayerController::StaticRegisterNativesAMoveBurst_PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoveBurst_PlayerController);
	UClass* Z_Construct_UClass_AMoveBurst_PlayerController_NoRegister()
	{
		return AMoveBurst_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMoveBurst_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerHUDClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_playerHUDClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerHUD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoveBurst_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveBurst,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MoveBurst_PlayerController.h" },
		{ "ModuleRelativePath", "MoveBurst_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_PlayerController_Statics::NewProp_playerHUDClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MoveBurst_PlayerController" },
		{ "ModuleRelativePath", "MoveBurst_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMoveBurst_PlayerController_Statics::NewProp_playerHUDClass = { "playerHUDClass", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_PlayerController, playerHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_PlayerController_Statics::NewProp_playerHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_PlayerController_Statics::NewProp_playerHUDClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurst_PlayerController_Statics::NewProp_playerHUD_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MoveBurst_PlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoveBurst_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveBurst_PlayerController_Statics::NewProp_playerHUD = { "playerHUD", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveBurst_PlayerController, playerHUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_PlayerController_Statics::NewProp_playerHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_PlayerController_Statics::NewProp_playerHUD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveBurst_PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_PlayerController_Statics::NewProp_playerHUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveBurst_PlayerController_Statics::NewProp_playerHUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoveBurst_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveBurst_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveBurst_PlayerController_Statics::ClassParams = {
		&AMoveBurst_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMoveBurst_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMoveBurst_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurst_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoveBurst_PlayerController()
	{
		if (!Z_Registration_Info_UClass_AMoveBurst_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoveBurst_PlayerController.OuterSingleton, Z_Construct_UClass_AMoveBurst_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMoveBurst_PlayerController.OuterSingleton;
	}
	template<> MOVEBURST_API UClass* StaticClass<AMoveBurst_PlayerController>()
	{
		return AMoveBurst_PlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveBurst_PlayerController);
	AMoveBurst_PlayerController::~AMoveBurst_PlayerController() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMoveBurst_PlayerController, AMoveBurst_PlayerController::StaticClass, TEXT("AMoveBurst_PlayerController"), &Z_Registration_Info_UClass_AMoveBurst_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveBurst_PlayerController), 1447201479U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_PlayerController_h_1914676329(TEXT("/Script/MoveBurst"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurst_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
