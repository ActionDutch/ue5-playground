// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tactics/TacticsGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTacticsGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TACTICS_API UClass* Z_Construct_UClass_ATacticsGameModeBase();
	TACTICS_API UClass* Z_Construct_UClass_ATacticsGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tactics();
// End Cross Module References
	void ATacticsGameModeBase::StaticRegisterNativesATacticsGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATacticsGameModeBase);
	UClass* Z_Construct_UClass_ATacticsGameModeBase_NoRegister()
	{
		return ATacticsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATacticsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATacticsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tactics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATacticsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TacticsGameModeBase.h" },
		{ "ModuleRelativePath", "TacticsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATacticsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATacticsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATacticsGameModeBase_Statics::ClassParams = {
		&ATacticsGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATacticsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATacticsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATacticsGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATacticsGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATacticsGameModeBase.OuterSingleton, Z_Construct_UClass_ATacticsGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATacticsGameModeBase.OuterSingleton;
	}
	template<> TACTICS_API UClass* StaticClass<ATacticsGameModeBase>()
	{
		return ATacticsGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATacticsGameModeBase);
	ATacticsGameModeBase::~ATacticsGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_TacticsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_TacticsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATacticsGameModeBase, ATacticsGameModeBase::StaticClass, TEXT("ATacticsGameModeBase"), &Z_Registration_Info_UClass_ATacticsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATacticsGameModeBase), 457252263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_TacticsGameModeBase_h_2902437796(TEXT("/Script/Tactics"),
		Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_TacticsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_TacticsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
