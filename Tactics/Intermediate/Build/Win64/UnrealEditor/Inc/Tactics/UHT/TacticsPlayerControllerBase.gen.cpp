// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tactics/Public/TacticsCore/TacticsPlayerControllerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTacticsPlayerControllerBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	TACTICS_API UClass* Z_Construct_UClass_ATacticsPlayerControllerBase();
	TACTICS_API UClass* Z_Construct_UClass_ATacticsPlayerControllerBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tactics();
// End Cross Module References
	void ATacticsPlayerControllerBase::StaticRegisterNativesATacticsPlayerControllerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATacticsPlayerControllerBase);
	UClass* Z_Construct_UClass_ATacticsPlayerControllerBase_NoRegister()
	{
		return ATacticsPlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_ATacticsPlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATacticsPlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tactics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATacticsPlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TacticsCore/TacticsPlayerControllerBase.h" },
		{ "ModuleRelativePath", "Public/TacticsCore/TacticsPlayerControllerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATacticsPlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATacticsPlayerControllerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATacticsPlayerControllerBase_Statics::ClassParams = {
		&ATacticsPlayerControllerBase::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATacticsPlayerControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATacticsPlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATacticsPlayerControllerBase()
	{
		if (!Z_Registration_Info_UClass_ATacticsPlayerControllerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATacticsPlayerControllerBase.OuterSingleton, Z_Construct_UClass_ATacticsPlayerControllerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATacticsPlayerControllerBase.OuterSingleton;
	}
	template<> TACTICS_API UClass* StaticClass<ATacticsPlayerControllerBase>()
	{
		return ATacticsPlayerControllerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATacticsPlayerControllerBase);
	ATacticsPlayerControllerBase::~ATacticsPlayerControllerBase() {}
	struct Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsPlayerControllerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsPlayerControllerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATacticsPlayerControllerBase, ATacticsPlayerControllerBase::StaticClass, TEXT("ATacticsPlayerControllerBase"), &Z_Registration_Info_UClass_ATacticsPlayerControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATacticsPlayerControllerBase), 596559885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsPlayerControllerBase_h_60816384(TEXT("/Script/Tactics"),
		Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsPlayerControllerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylen_OneDrive_Documents_Unreal_Projects_ue5_playground_Tactics_Source_Tactics_Public_TacticsCore_TacticsPlayerControllerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
