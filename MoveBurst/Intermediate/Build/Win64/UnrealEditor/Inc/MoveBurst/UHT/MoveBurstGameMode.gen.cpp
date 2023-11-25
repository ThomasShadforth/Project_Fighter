// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveBurst/MoveBurstGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveBurstGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MOVEBURST_API UClass* Z_Construct_UClass_AMoveBurstGameMode();
	MOVEBURST_API UClass* Z_Construct_UClass_AMoveBurstGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MoveBurst();
// End Cross Module References
	void AMoveBurstGameMode::StaticRegisterNativesAMoveBurstGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoveBurstGameMode);
	UClass* Z_Construct_UClass_AMoveBurstGameMode_NoRegister()
	{
		return AMoveBurstGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMoveBurstGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoveBurstGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveBurst,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveBurstGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MoveBurstGameMode.h" },
		{ "ModuleRelativePath", "MoveBurstGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoveBurstGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveBurstGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveBurstGameMode_Statics::ClassParams = {
		&AMoveBurstGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMoveBurstGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveBurstGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoveBurstGameMode()
	{
		if (!Z_Registration_Info_UClass_AMoveBurstGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoveBurstGameMode.OuterSingleton, Z_Construct_UClass_AMoveBurstGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMoveBurstGameMode.OuterSingleton;
	}
	template<> MOVEBURST_API UClass* StaticClass<AMoveBurstGameMode>()
	{
		return AMoveBurstGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveBurstGameMode);
	AMoveBurstGameMode::~AMoveBurstGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurstGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurstGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMoveBurstGameMode, AMoveBurstGameMode::StaticClass, TEXT("AMoveBurstGameMode"), &Z_Registration_Info_UClass_AMoveBurstGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveBurstGameMode), 307142774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurstGameMode_h_3255839364(TEXT("/Script/MoveBurst"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurstGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_MoveBurstGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
