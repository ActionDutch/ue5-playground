// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tactics/Public/TacticsCore/TacticsPawnBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTacticsPawnBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	TACTICS_API UClass* Z_Construct_UClass_ATacticsPawnBase();
	TACTICS_API UClass* Z_Construct_UClass_ATacticsPawnBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tactics();
// End Cross Module References
	void ATacticsPawnBase::StaticRegisterNativesATacticsPawnBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATacticsPawnBase);
	UClass* Z_Construct_UClass_ATacticsPawnBase_NoRegister()
	{
		return ATacticsPawnBase::StaticClass();
	}
	struct Z_Construct_UClass_ATacticsPawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATacticsPawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tactics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATacticsPawnBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TacticsCore/TacticsPawnBase.h" },
		{ "ModuleRelativePath", "Public/TacticsCore/TacticsPawnBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATacticsPawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATacticsPawnBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATacticsPawnBase_Statics::ClassParams = {
		&ATacticsPawnBase::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATacticsPawnBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATacticsPawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATacticsPawnBase()
	{
		if (!Z_Registration_Info_UClass_ATacticsPawnBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATacticsPawnBase.OuterSingleton, Z_Construct_UClass_ATacticsPawnBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATacticsPawnBase.OuterSingleton;
	}
	template<> TACTICS_API UClass* StaticClass<ATacticsPawnBase>()
	{
		return ATacticsPawnBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATacticsPawnBase);
	ATacticsPawnBase::~ATacticsPawnBase() {}
	struct Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsPawnBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsPawnBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATacticsPawnBase, ATacticsPawnBase::StaticClass, TEXT("ATacticsPawnBase"), &Z_Registration_Info_UClass_ATacticsPawnBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATacticsPawnBase), 3311192807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsPawnBase_h_2851272872(TEXT("/Script/Tactics"),
		Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsPawnBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsPawnBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
