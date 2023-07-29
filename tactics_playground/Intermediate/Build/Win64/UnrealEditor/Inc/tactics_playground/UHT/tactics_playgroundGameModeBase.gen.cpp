// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "tactics_playground/tactics_playgroundGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetactics_playgroundGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TACTICS_PLAYGROUND_API UClass* Z_Construct_UClass_Atactics_playgroundGameModeBase();
	TACTICS_PLAYGROUND_API UClass* Z_Construct_UClass_Atactics_playgroundGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_tactics_playground();
// End Cross Module References
	void Atactics_playgroundGameModeBase::StaticRegisterNativesAtactics_playgroundGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Atactics_playgroundGameModeBase);
	UClass* Z_Construct_UClass_Atactics_playgroundGameModeBase_NoRegister()
	{
		return Atactics_playgroundGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Atactics_playgroundGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Atactics_playgroundGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_tactics_playground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atactics_playgroundGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "tactics_playgroundGameModeBase.h" },
		{ "ModuleRelativePath", "tactics_playgroundGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Atactics_playgroundGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atactics_playgroundGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Atactics_playgroundGameModeBase_Statics::ClassParams = {
		&Atactics_playgroundGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Atactics_playgroundGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Atactics_playgroundGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Atactics_playgroundGameModeBase()
	{
		if (!Z_Registration_Info_UClass_Atactics_playgroundGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Atactics_playgroundGameModeBase.OuterSingleton, Z_Construct_UClass_Atactics_playgroundGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Atactics_playgroundGameModeBase.OuterSingleton;
	}
	template<> TACTICS_PLAYGROUND_API UClass* StaticClass<Atactics_playgroundGameModeBase>()
	{
		return Atactics_playgroundGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Atactics_playgroundGameModeBase);
	Atactics_playgroundGameModeBase::~Atactics_playgroundGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_tactics_playground_Source_tactics_playground_tactics_playgroundGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_tactics_playground_Source_tactics_playground_tactics_playgroundGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Atactics_playgroundGameModeBase, Atactics_playgroundGameModeBase::StaticClass, TEXT("Atactics_playgroundGameModeBase"), &Z_Registration_Info_UClass_Atactics_playgroundGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Atactics_playgroundGameModeBase), 3726776426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_tactics_playground_Source_tactics_playground_tactics_playgroundGameModeBase_h_61443403(TEXT("/Script/tactics_playground"),
		Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_tactics_playground_Source_tactics_playground_tactics_playgroundGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_tactics_playground_Source_tactics_playground_tactics_playgroundGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
