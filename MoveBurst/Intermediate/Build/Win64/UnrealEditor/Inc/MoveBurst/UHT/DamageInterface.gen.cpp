// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveBurst/DamageInterface.h"
#include "MoveBurst/S_AttackData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MOVEBURST_API UClass* Z_Construct_UClass_UDamageInterface();
	MOVEBURST_API UClass* Z_Construct_UClass_UDamageInterface_NoRegister();
	MOVEBURST_API UScriptStruct* Z_Construct_UScriptStruct_FS_AttackData();
	UPackage* Z_Construct_UPackage__Script_MoveBurst();
// End Cross Module References
	DEFINE_FUNCTION(IDamageInterface::execOnHit)
	{
		P_GET_OBJECT(AActor,Z_Param_InstigatingActor);
		P_GET_STRUCT(FS_AttackData,Z_Param_AttackData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit_Implementation(Z_Param_InstigatingActor,Z_Param_AttackData);
		P_NATIVE_END;
	}
	struct DamageInterface_eventOnHit_Parms
	{
		AActor* InstigatingActor;
		FS_AttackData AttackData;
	};
	void IDamageInterface::OnHit(AActor* InstigatingActor, FS_AttackData AttackData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnHit instead.");
	}
	void UDamageInterface::StaticRegisterNativesUDamageInterface()
	{
		UClass* Class = UDamageInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &IDamageInterface::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDamageInterface_OnHit_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatingActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamageInterface_OnHit_Statics::NewProp_InstigatingActor = { "InstigatingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DamageInterface_eventOnHit_Parms, InstigatingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDamageInterface_OnHit_Statics::NewProp_AttackData = { "AttackData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DamageInterface_eventOnHit_Parms, AttackData), Z_Construct_UScriptStruct_FS_AttackData, METADATA_PARAMS(nullptr, 0) }; // 2750883578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageInterface_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageInterface_OnHit_Statics::NewProp_InstigatingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageInterface_OnHit_Statics::NewProp_AttackData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageInterface_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DamageInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageInterface_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageInterface, nullptr, "OnHit", nullptr, nullptr, sizeof(DamageInterface_eventOnHit_Parms), Z_Construct_UFunction_UDamageInterface_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageInterface_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageInterface_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageInterface_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageInterface_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageInterface);
	UClass* Z_Construct_UClass_UDamageInterface_NoRegister()
	{
		return UDamageInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDamageInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveBurst,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamageInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageInterface_OnHit, "OnHit" }, // 4002425830
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "DamageInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageInterface_Statics::ClassParams = {
		&UDamageInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageInterface()
	{
		if (!Z_Registration_Info_UClass_UDamageInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageInterface.OuterSingleton, Z_Construct_UClass_UDamageInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamageInterface.OuterSingleton;
	}
	template<> MOVEBURST_API UClass* StaticClass<UDamageInterface>()
	{
		return UDamageInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageInterface);
	UDamageInterface::~UDamageInterface() {}
	static FName NAME_UDamageInterface_OnHit = FName(TEXT("OnHit"));
	void IDamageInterface::Execute_OnHit(UObject* O, AActor* InstigatingActor, FS_AttackData AttackData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDamageInterface::StaticClass()));
		DamageInterface_eventOnHit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDamageInterface_OnHit);
		if (Func)
		{
			Parms.InstigatingActor=InstigatingActor;
			Parms.AttackData=AttackData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDamageInterface*)(O->GetNativeInterfaceAddress(UDamageInterface::StaticClass())))
		{
			I->OnHit_Implementation(InstigatingActor,AttackData);
		}
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamageInterface, UDamageInterface::StaticClass, TEXT("UDamageInterface"), &Z_Registration_Info_UClass_UDamageInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageInterface), 174255639U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_3763572659(TEXT("/Script/MoveBurst"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Fighter_MoveBurst_Source_MoveBurst_DamageInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
