// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMath/GameMathCubeActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMathCubeActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEMATH_API UClass* Z_Construct_UClass_AGameMathCubeActor();
GAMEMATH_API UClass* Z_Construct_UClass_AGameMathCubeActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameMath();
// End Cross Module References

// Begin Class AGameMathCubeActor Function OnBoxOverlap
struct Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics
{
	struct GameMathCubeActor_eventOnBoxOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameMathCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameMathCubeActor_eventOnBoxOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameMathCubeActor_eventOnBoxOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameMathCubeActor_eventOnBoxOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameMathCubeActor_eventOnBoxOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((GameMathCubeActor_eventOnBoxOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameMathCubeActor_eventOnBoxOverlap_Parms), &Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameMathCubeActor_eventOnBoxOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMathCubeActor, nullptr, "OnBoxOverlap", nullptr, nullptr, Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::GameMathCubeActor_eventOnBoxOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::GameMathCubeActor_eventOnBoxOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameMathCubeActor::execOnBoxOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBoxOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AGameMathCubeActor Function OnBoxOverlap

// Begin Class AGameMathCubeActor
void AGameMathCubeActor::StaticRegisterNativesAGameMathCubeActor()
{
	UClass* Class = AGameMathCubeActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBoxOverlap", &AGameMathCubeActor::execOnBoxOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameMathCubeActor);
UClass* Z_Construct_UClass_AGameMathCubeActor_NoRegister()
{
	return AGameMathCubeActor::StaticClass();
}
struct Z_Construct_UClass_AGameMathCubeActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameMathCubeActor.h" },
		{ "ModuleRelativePath", "GameMathCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[] = {
		{ "Category", "GameMathCubeActor" },
		{ "ModuleRelativePath", "GameMathCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveDir_MetaData[] = {
		{ "Category", "GameMathCubeActor" },
		{ "ModuleRelativePath", "GameMathCubeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boxcomp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameMathCubeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_moveDir;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Boxcomp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameMathCubeActor_OnBoxOverlap, "OnBoxOverlap" }, // 2455643456
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameMathCubeActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameMathCubeActor_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMathCubeActor, moveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveSpeed_MetaData), NewProp_moveSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameMathCubeActor_Statics::NewProp_moveDir = { "moveDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMathCubeActor, moveDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveDir_MetaData), NewProp_moveDir_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameMathCubeActor_Statics::NewProp_Boxcomp = { "Boxcomp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameMathCubeActor, Boxcomp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boxcomp_MetaData), NewProp_Boxcomp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameMathCubeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMathCubeActor_Statics::NewProp_moveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMathCubeActor_Statics::NewProp_moveDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMathCubeActor_Statics::NewProp_Boxcomp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameMathCubeActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameMathCubeActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameMath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameMathCubeActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameMathCubeActor_Statics::ClassParams = {
	&AGameMathCubeActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameMathCubeActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameMathCubeActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameMathCubeActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameMathCubeActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameMathCubeActor()
{
	if (!Z_Registration_Info_UClass_AGameMathCubeActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameMathCubeActor.OuterSingleton, Z_Construct_UClass_AGameMathCubeActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameMathCubeActor.OuterSingleton;
}
template<> GAMEMATH_API UClass* StaticClass<AGameMathCubeActor>()
{
	return AGameMathCubeActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameMathCubeActor);
AGameMathCubeActor::~AGameMathCubeActor() {}
// End Class AGameMathCubeActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_UnrealEngine_GameMath_GameMath_Source_GameMath_GameMathCubeActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameMathCubeActor, AGameMathCubeActor::StaticClass, TEXT("AGameMathCubeActor"), &Z_Registration_Info_UClass_AGameMathCubeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameMathCubeActor), 1672187840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_UnrealEngine_GameMath_GameMath_Source_GameMath_GameMathCubeActor_h_2612057181(TEXT("/Script/GameMath"),
	Z_CompiledInDeferFile_FID_Github_UnrealEngine_GameMath_GameMath_Source_GameMath_GameMathCubeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_UnrealEngine_GameMath_GameMath_Source_GameMath_GameMathCubeActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
