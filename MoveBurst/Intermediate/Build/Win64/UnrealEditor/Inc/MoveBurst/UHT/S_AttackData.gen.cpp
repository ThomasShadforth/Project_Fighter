// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveBurst/S_AttackData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_AttackData() {}
// Cross Module References
	MOVEBURST_API UScriptStruct* Z_Construct_UScriptStruct_FS_AttackData();
	UPackage* Z_Construct_UPackage__Script_MoveBurst();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_AttackData;
class UScriptStruct* FS_AttackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_AttackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_AttackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_AttackData, Z_Construct_UPackage__Script_MoveBurst(), TEXT("S_AttackData"));
	}
	return Z_Registration_Info_UScriptStruct_S_AttackData.OuterSingleton;
}
template<> MOVEBURST_API UScriptStruct* StaticStruct<FS_AttackData>()
{
	return FS_AttackData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FS_AttackData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputString_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_inputString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectMoveGauge_MetaData[];
#endif
		static void NewProp_bAffectMoveGauge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectMoveGauge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movementGaugeDecreased_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_movementGaugeDecreased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movementGaugeIncreased_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_movementGaugeIncreased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresMeter_MetaData[];
#endif
		static void NewProp_bRequiresMeter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresMeter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meterAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_meterAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attackDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meterGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_meterGain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_AttackData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_AttackData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_AttackName_MetaData[] = {
		{ "Category", "S_AttackData" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_AttackName = { "AttackName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_AttackData, AttackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_AttackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_AttackName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_inputString_MetaData[] = {
		{ "Category", "S_AttackData" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_inputString = { "inputString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_AttackData, inputString), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_inputString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_inputString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bAffectMoveGauge_MetaData[] = {
		{ "Category", "S_AttackData" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bAffectMoveGauge_SetBit(void* Obj)
	{
		((FS_AttackData*)Obj)->bAffectMoveGauge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bAffectMoveGauge = { "bAffectMoveGauge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FS_AttackData), &Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bAffectMoveGauge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bAffectMoveGauge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bAffectMoveGauge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_movementGaugeDecreased_MetaData[] = {
		{ "Category", "S_AttackData" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_movementGaugeDecreased = { "movementGaugeDecreased", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_AttackData, movementGaugeDecreased), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_movementGaugeDecreased_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_movementGaugeDecreased_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_movementGaugeIncreased_MetaData[] = {
		{ "Category", "S_AttackData" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_movementGaugeIncreased = { "movementGaugeIncreased", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_AttackData, movementGaugeIncreased), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_movementGaugeIncreased_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_movementGaugeIncreased_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bRequiresMeter_MetaData[] = {
		{ "Category", "S_AttackData" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bRequiresMeter_SetBit(void* Obj)
	{
		((FS_AttackData*)Obj)->bRequiresMeter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bRequiresMeter = { "bRequiresMeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FS_AttackData), &Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bRequiresMeter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bRequiresMeter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bRequiresMeter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_meterAmount_MetaData[] = {
		{ "Category", "S_AttackData" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_meterAmount = { "meterAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_AttackData, meterAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_meterAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_meterAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_attackDamage_MetaData[] = {
		{ "Category", "S_AttackData" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_attackDamage = { "attackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_AttackData, attackDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_attackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_attackDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_meterGain_MetaData[] = {
		{ "Category", "S_AttackData" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_meterGain = { "meterGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_AttackData, meterGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_meterGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_meterGain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_AttackData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_AttackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_inputString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bAffectMoveGauge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_movementGaugeDecreased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_movementGaugeIncreased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bRequiresMeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_meterAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_attackDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_meterGain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_AttackData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveBurst,
		nullptr,
		&NewStructOps,
		"S_AttackData",
		sizeof(FS_AttackData),
		alignof(FS_AttackData),
		Z_Construct_UScriptStruct_FS_AttackData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_AttackData()
	{
		if (!Z_Registration_Info_UScriptStruct_S_AttackData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_AttackData.InnerSingleton, Z_Construct_UScriptStruct_FS_AttackData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_AttackData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_S_AttackData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_S_AttackData_h_Statics::ScriptStructInfo[] = {
		{ FS_AttackData::StaticStruct, Z_Construct_UScriptStruct_FS_AttackData_Statics::NewStructOps, TEXT("S_AttackData"), &Z_Registration_Info_UScriptStruct_S_AttackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_AttackData), 2750883578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_S_AttackData_h_3561329553(TEXT("/Script/MoveBurst"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_S_AttackData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_S_AttackData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
