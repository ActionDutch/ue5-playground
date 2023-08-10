// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tactics/Public/TacticsCore/TacticsGMBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTacticsGMBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TACTICS_API UClass* Z_Construct_UClass_ATacticsGMBase();
	TACTICS_API UClass* Z_Construct_UClass_ATacticsGMBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tactics();
// End Cross Module References
	void ATacticsGMBase::StaticRegisterNativesATacticsGMBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATacticsGMBase);
	UClass* Z_Construct_UClass_ATacticsGMBase_NoRegister()
	{
		return ATacticsGMBase::StaticClass();
	}
	struct Z_Construct_UClass_ATacticsGMBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATacticsGMBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tactics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATacticsGMBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TacticsCore/TacticsGMBase.h" },
		{ "ModuleRelativePath", "Public/TacticsCore/TacticsGMBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATacticsGMBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATacticsGMBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATacticsGMBase_Statics::ClassParams = {
		&ATacticsGMBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATacticsGMBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATacticsGMBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATacticsGMBase()
	{
		if (!Z_Registration_Info_UClass_ATacticsGMBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATacticsGMBase.OuterSingleton, Z_Construct_UClass_ATacticsGMBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATacticsGMBase.OuterSingleton;
	}
	template<> TACTICS_API UClass* StaticClass<ATacticsGMBase>()
	{
		return ATacticsGMBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATacticsGMBase);
	ATacticsGMBase::~ATacticsGMBase() {}
	struct Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsGMBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsGMBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATacticsGMBase, ATacticsGMBase::StaticClass, TEXT("ATacticsGMBase"), &Z_Registration_Info_UClass_ATacticsGMBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATacticsGMBase), 982485852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsGMBase_h_419888235(TEXT("/Script/Tactics"),
		Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsGMBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsGMBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
