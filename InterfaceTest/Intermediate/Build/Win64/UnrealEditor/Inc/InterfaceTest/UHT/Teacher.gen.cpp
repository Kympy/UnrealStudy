// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterfaceTest/Teacher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeacher() {}
// Cross Module References
	INTERFACETEST_API UClass* Z_Construct_UClass_UPerson();
	INTERFACETEST_API UClass* Z_Construct_UClass_UTeacher();
	INTERFACETEST_API UClass* Z_Construct_UClass_UTeacher_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterfaceTest();
// End Cross Module References
	void UTeacher::StaticRegisterNativesUTeacher()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTeacher);
	UClass* Z_Construct_UClass_UTeacher_NoRegister()
	{
		return UTeacher::StaticClass();
	}
	struct Z_Construct_UClass_UTeacher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTeacher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerson,
		(UObject* (*)())Z_Construct_UPackage__Script_InterfaceTest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTeacher_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeacher_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Teacher.h" },
		{ "ModuleRelativePath", "Teacher.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTeacher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTeacher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTeacher_Statics::ClassParams = {
		&UTeacher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTeacher_Statics::Class_MetaDataParams), Z_Construct_UClass_UTeacher_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTeacher()
	{
		if (!Z_Registration_Info_UClass_UTeacher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTeacher.OuterSingleton, Z_Construct_UClass_UTeacher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTeacher.OuterSingleton;
	}
	template<> INTERFACETEST_API UClass* StaticClass<UTeacher>()
	{
		return UTeacher::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTeacher);
	UTeacher::~UTeacher() {}
	struct Z_CompiledInDeferFile_FID_TestUnreal_UnrealStudy_InterfaceTest_Source_InterfaceTest_Teacher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUnreal_UnrealStudy_InterfaceTest_Source_InterfaceTest_Teacher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTeacher, UTeacher::StaticClass, TEXT("UTeacher"), &Z_Registration_Info_UClass_UTeacher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTeacher), 2030079390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUnreal_UnrealStudy_InterfaceTest_Source_InterfaceTest_Teacher_h_2900135508(TEXT("/Script/InterfaceTest"),
		Z_CompiledInDeferFile_FID_TestUnreal_UnrealStudy_InterfaceTest_Source_InterfaceTest_Teacher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestUnreal_UnrealStudy_InterfaceTest_Source_InterfaceTest_Teacher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
