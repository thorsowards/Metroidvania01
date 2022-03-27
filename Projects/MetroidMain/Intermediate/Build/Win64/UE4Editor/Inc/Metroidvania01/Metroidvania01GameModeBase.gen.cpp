// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Metroidvania01/Metroidvania01GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetroidvania01GameModeBase() {}
// Cross Module References
	METROIDVANIA01_API UClass* Z_Construct_UClass_AMetroidvania01GameModeBase_NoRegister();
	METROIDVANIA01_API UClass* Z_Construct_UClass_AMetroidvania01GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Metroidvania01();
// End Cross Module References
	void AMetroidvania01GameModeBase::StaticRegisterNativesAMetroidvania01GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMetroidvania01GameModeBase_NoRegister()
	{
		return AMetroidvania01GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMetroidvania01GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMetroidvania01GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Metroidvania01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMetroidvania01GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Metroidvania01GameModeBase.h" },
		{ "ModuleRelativePath", "Metroidvania01GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMetroidvania01GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMetroidvania01GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMetroidvania01GameModeBase_Statics::ClassParams = {
		&AMetroidvania01GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMetroidvania01GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMetroidvania01GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMetroidvania01GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMetroidvania01GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMetroidvania01GameModeBase, 4050767432);
	template<> METROIDVANIA01_API UClass* StaticClass<AMetroidvania01GameModeBase>()
	{
		return AMetroidvania01GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMetroidvania01GameModeBase(Z_Construct_UClass_AMetroidvania01GameModeBase, &AMetroidvania01GameModeBase::StaticClass, TEXT("/Script/Metroidvania01"), TEXT("AMetroidvania01GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMetroidvania01GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
