// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AZP_ActorUtils/Public/AZP_ActorUtilsBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAZP_ActorUtilsBPLibrary() {}

// Begin Cross Module References
AZP_ACTORUTILS_API UClass* Z_Construct_UClass_UAZP_ActorUtilsBPLibrary();
AZP_ACTORUTILS_API UClass* Z_Construct_UClass_UAZP_ActorUtilsBPLibrary_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AZP_ActorUtils();
// End Cross Module References

// Begin Class UAZP_ActorUtilsBPLibrary Function FindActorsInRadiusChain
struct Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics
{
	struct AZP_ActorUtilsBPLibrary_eventFindActorsInRadiusChain_Parms
	{
		const UObject* WorldContext;
		AActor* TargetActor;
		float Range;
		int32 MaxActors;
		UClass* ActorClass;
		FName Tag;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AZP_ActorUtils|Actor" },
		{ "DisplayName", "Find Actors In Radius Chain" },
		{ "Keywords", "azp fairc" },
		{ "ModuleRelativePath", "Public/AZP_ActorUtilsBPLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxActors;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventFindActorsInRadiusChain_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventFindActorsInRadiusChain_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventFindActorsInRadiusChain_Parms, Range), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_MaxActors = { "MaxActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventFindActorsInRadiusChain_Parms, MaxActors), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventFindActorsInRadiusChain_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventFindActorsInRadiusChain_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventFindActorsInRadiusChain_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_MaxActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAZP_ActorUtilsBPLibrary, nullptr, "FindActorsInRadiusChain", nullptr, nullptr, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::AZP_ActorUtilsBPLibrary_eventFindActorsInRadiusChain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::AZP_ActorUtilsBPLibrary_eventFindActorsInRadiusChain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAZP_ActorUtilsBPLibrary::execFindActorsInRadiusChain)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Range);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxActors);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=UAZP_ActorUtilsBPLibrary::FindActorsInRadiusChain(Z_Param_WorldContext,Z_Param_TargetActor,Z_Param_Range,Z_Param_MaxActors,Z_Param_ActorClass,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UAZP_ActorUtilsBPLibrary Function FindActorsInRadiusChain

// Begin Class UAZP_ActorUtilsBPLibrary Function FindMatchingActors
struct Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics
{
	struct AZP_ActorUtilsBPLibrary_eventFindMatchingActors_Parms
	{
		const UObject* WorldContext;
		UClass* ActorClass;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AZP_ActorUtils|Actor" },
		{ "DisplayName", "Find Matching Actors" },
		{ "Keywords", "azp fma" },
		{ "ModuleRelativePath", "Public/AZP_ActorUtilsBPLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventFindMatchingActors_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventFindMatchingActors_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventFindMatchingActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAZP_ActorUtilsBPLibrary, nullptr, "FindMatchingActors", nullptr, nullptr, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::AZP_ActorUtilsBPLibrary_eventFindMatchingActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::AZP_ActorUtilsBPLibrary_eventFindMatchingActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAZP_ActorUtilsBPLibrary::execFindMatchingActors)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=UAZP_ActorUtilsBPLibrary::FindMatchingActors(Z_Param_WorldContext,Z_Param_ActorClass);
	P_NATIVE_END;
}
// End Class UAZP_ActorUtilsBPLibrary Function FindMatchingActors

// Begin Class UAZP_ActorUtilsBPLibrary Function GetActorsBetweenActorsLine
struct Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics
{
	struct AZP_ActorUtilsBPLibrary_eventGetActorsBetweenActorsLine_Parms
	{
		const UObject* WorldContext;
		AActor* SourceActor;
		AActor* TargetActor;
		float LineThickness;
		UClass* ActorClass;
		FName Tag;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AZP_ActorUtils|Actor" },
		{ "DisplayName", "Get Actors Between Actors Line" },
		{ "Keywords", "azp gabal" },
		{ "ModuleRelativePath", "Public/AZP_ActorUtilsBPLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetActorsBetweenActorsLine_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetActorsBetweenActorsLine_Parms, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetActorsBetweenActorsLine_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetActorsBetweenActorsLine_Parms, LineThickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetActorsBetweenActorsLine_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetActorsBetweenActorsLine_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetActorsBetweenActorsLine_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_SourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAZP_ActorUtilsBPLibrary, nullptr, "GetActorsBetweenActorsLine", nullptr, nullptr, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::AZP_ActorUtilsBPLibrary_eventGetActorsBetweenActorsLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::AZP_ActorUtilsBPLibrary_eventGetActorsBetweenActorsLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAZP_ActorUtilsBPLibrary::execGetActorsBetweenActorsLine)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_OBJECT(AActor,Z_Param_SourceActor);
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LineThickness);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=UAZP_ActorUtilsBPLibrary::GetActorsBetweenActorsLine(Z_Param_WorldContext,Z_Param_SourceActor,Z_Param_TargetActor,Z_Param_LineThickness,Z_Param_ActorClass,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UAZP_ActorUtilsBPLibrary Function GetActorsBetweenActorsLine

// Begin Class UAZP_ActorUtilsBPLibrary Function GetLocationsBetweenActors
struct Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics
{
	struct AZP_ActorUtilsBPLibrary_eventGetLocationsBetweenActors_Parms
	{
		AActor* SourceActor;
		AActor* TargetActor;
		int32 NumLocations;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AZP_ActorUtils|Actor" },
		{ "DisplayName", "Get Locations Between Actors" },
		{ "Keywords", "azp glba" },
		{ "ModuleRelativePath", "Public/AZP_ActorUtilsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLocations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetLocationsBetweenActors_Parms, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetLocationsBetweenActors_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::NewProp_NumLocations = { "NumLocations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetLocationsBetweenActors_Parms, NumLocations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetLocationsBetweenActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::NewProp_SourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::NewProp_NumLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAZP_ActorUtilsBPLibrary, nullptr, "GetLocationsBetweenActors", nullptr, nullptr, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::AZP_ActorUtilsBPLibrary_eventGetLocationsBetweenActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::AZP_ActorUtilsBPLibrary_eventGetLocationsBetweenActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAZP_ActorUtilsBPLibrary::execGetLocationsBetweenActors)
{
	P_GET_OBJECT(AActor,Z_Param_SourceActor);
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumLocations);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=UAZP_ActorUtilsBPLibrary::GetLocationsBetweenActors(Z_Param_SourceActor,Z_Param_TargetActor,Z_Param_NumLocations);
	P_NATIVE_END;
}
// End Class UAZP_ActorUtilsBPLibrary Function GetLocationsBetweenActors

// Begin Class UAZP_ActorUtilsBPLibrary Function GetNearestActorArray
struct Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics
{
	struct AZP_ActorUtilsBPLibrary_eventGetNearestActorArray_Parms
	{
		const UObject* WorldContext;
		AActor* SourceActor;
		float Radius;
		UClass* ActorClass;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AZP_ActorUtils|Actor" },
		{ "DisplayName", "Get Nearest Actor Array" },
		{ "Keywords", "azp gnaa" },
		{ "ModuleRelativePath", "Public/AZP_ActorUtilsBPLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetNearestActorArray_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetNearestActorArray_Parms, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetNearestActorArray_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetNearestActorArray_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetNearestActorArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::NewProp_SourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAZP_ActorUtilsBPLibrary, nullptr, "GetNearestActorArray", nullptr, nullptr, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::AZP_ActorUtilsBPLibrary_eventGetNearestActorArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::AZP_ActorUtilsBPLibrary_eventGetNearestActorArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAZP_ActorUtilsBPLibrary::execGetNearestActorArray)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_OBJECT(AActor,Z_Param_SourceActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=UAZP_ActorUtilsBPLibrary::GetNearestActorArray(Z_Param_WorldContext,Z_Param_SourceActor,Z_Param_Radius,Z_Param_ActorClass);
	P_NATIVE_END;
}
// End Class UAZP_ActorUtilsBPLibrary Function GetNearestActorArray

// Begin Class UAZP_ActorUtilsBPLibrary Function GetNearestActorArrayWithTag
struct Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics
{
	struct AZP_ActorUtilsBPLibrary_eventGetNearestActorArrayWithTag_Parms
	{
		const UObject* WorldContext;
		AActor* SourceActor;
		float Radius;
		UClass* ActorClass;
		FName Tag;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AZP_ActorUtils|Actor" },
		{ "DisplayName", "Get Nearest Actor Array With Tag" },
		{ "Keywords", "azp gnaa gnaawt" },
		{ "ModuleRelativePath", "Public/AZP_ActorUtilsBPLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetNearestActorArrayWithTag_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetNearestActorArrayWithTag_Parms, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetNearestActorArrayWithTag_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetNearestActorArrayWithTag_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetNearestActorArrayWithTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetNearestActorArrayWithTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::NewProp_SourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAZP_ActorUtilsBPLibrary, nullptr, "GetNearestActorArrayWithTag", nullptr, nullptr, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::AZP_ActorUtilsBPLibrary_eventGetNearestActorArrayWithTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::AZP_ActorUtilsBPLibrary_eventGetNearestActorArrayWithTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAZP_ActorUtilsBPLibrary::execGetNearestActorArrayWithTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_OBJECT(AActor,Z_Param_SourceActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=UAZP_ActorUtilsBPLibrary::GetNearestActorArrayWithTag(Z_Param_WorldContext,Z_Param_SourceActor,Z_Param_Radius,Z_Param_ActorClass,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UAZP_ActorUtilsBPLibrary Function GetNearestActorArrayWithTag

// Begin Class UAZP_ActorUtilsBPLibrary Function GetRandomPointInCircle
struct Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics
{
	struct AZP_ActorUtilsBPLibrary_eventGetRandomPointInCircle_Parms
	{
		AActor* CenterActor;
		float Radius;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AZP_ActorUtils|Actor" },
		{ "DisplayName", "Get Random Point In Circle" },
		{ "Keywords", "azp grpic" },
		{ "ModuleRelativePath", "Public/AZP_ActorUtilsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::NewProp_CenterActor = { "CenterActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetRandomPointInCircle_Parms, CenterActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetRandomPointInCircle_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventGetRandomPointInCircle_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::NewProp_CenterActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAZP_ActorUtilsBPLibrary, nullptr, "GetRandomPointInCircle", nullptr, nullptr, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::AZP_ActorUtilsBPLibrary_eventGetRandomPointInCircle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::AZP_ActorUtilsBPLibrary_eventGetRandomPointInCircle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAZP_ActorUtilsBPLibrary::execGetRandomPointInCircle)
{
	P_GET_OBJECT(AActor,Z_Param_CenterActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UAZP_ActorUtilsBPLibrary::GetRandomPointInCircle(Z_Param_CenterActor,Z_Param_Radius);
	P_NATIVE_END;
}
// End Class UAZP_ActorUtilsBPLibrary Function GetRandomPointInCircle

// Begin Class UAZP_ActorUtilsBPLibrary Function SpawnActorsInCircle
struct Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics
{
	struct AZP_ActorUtilsBPLibrary_eventSpawnActorsInCircle_Parms
	{
		const UObject* WorldContext;
		UClass* ActorClass;
		float Radius;
		int32 NumActors;
		FVector CenterLocation;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AZP_ActorUtils|Actor" },
		{ "DisplayName", "Spawn Actors In Circle" },
		{ "Keywords", "azp saic" },
		{ "ModuleRelativePath", "Public/AZP_ActorUtilsBPLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventSpawnActorsInCircle_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventSpawnActorsInCircle_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventSpawnActorsInCircle_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::NewProp_NumActors = { "NumActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventSpawnActorsInCircle_Parms, NumActors), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::NewProp_CenterLocation = { "CenterLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventSpawnActorsInCircle_Parms, CenterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterLocation_MetaData), NewProp_CenterLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZP_ActorUtilsBPLibrary_eventSpawnActorsInCircle_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::NewProp_NumActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::NewProp_CenterLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAZP_ActorUtilsBPLibrary, nullptr, "SpawnActorsInCircle", nullptr, nullptr, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::AZP_ActorUtilsBPLibrary_eventSpawnActorsInCircle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::AZP_ActorUtilsBPLibrary_eventSpawnActorsInCircle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAZP_ActorUtilsBPLibrary::execSpawnActorsInCircle)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumActors);
	P_GET_STRUCT(FVector,Z_Param_CenterLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=UAZP_ActorUtilsBPLibrary::SpawnActorsInCircle(Z_Param_WorldContext,Z_Param_ActorClass,Z_Param_Radius,Z_Param_NumActors,Z_Param_CenterLocation);
	P_NATIVE_END;
}
// End Class UAZP_ActorUtilsBPLibrary Function SpawnActorsInCircle

// Begin Class UAZP_ActorUtilsBPLibrary
void UAZP_ActorUtilsBPLibrary::StaticRegisterNativesUAZP_ActorUtilsBPLibrary()
{
	UClass* Class = UAZP_ActorUtilsBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindActorsInRadiusChain", &UAZP_ActorUtilsBPLibrary::execFindActorsInRadiusChain },
		{ "FindMatchingActors", &UAZP_ActorUtilsBPLibrary::execFindMatchingActors },
		{ "GetActorsBetweenActorsLine", &UAZP_ActorUtilsBPLibrary::execGetActorsBetweenActorsLine },
		{ "GetLocationsBetweenActors", &UAZP_ActorUtilsBPLibrary::execGetLocationsBetweenActors },
		{ "GetNearestActorArray", &UAZP_ActorUtilsBPLibrary::execGetNearestActorArray },
		{ "GetNearestActorArrayWithTag", &UAZP_ActorUtilsBPLibrary::execGetNearestActorArrayWithTag },
		{ "GetRandomPointInCircle", &UAZP_ActorUtilsBPLibrary::execGetRandomPointInCircle },
		{ "SpawnActorsInCircle", &UAZP_ActorUtilsBPLibrary::execSpawnActorsInCircle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAZP_ActorUtilsBPLibrary);
UClass* Z_Construct_UClass_UAZP_ActorUtilsBPLibrary_NoRegister()
{
	return UAZP_ActorUtilsBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UAZP_ActorUtilsBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "AZP_ActorUtilsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/AZP_ActorUtilsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindActorsInRadiusChain, "FindActorsInRadiusChain" }, // 2235298144
		{ &Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_FindMatchingActors, "FindMatchingActors" }, // 3468903247
		{ &Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetActorsBetweenActorsLine, "GetActorsBetweenActorsLine" }, // 3378923853
		{ &Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetLocationsBetweenActors, "GetLocationsBetweenActors" }, // 1470776439
		{ &Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArray, "GetNearestActorArray" }, // 1588762549
		{ &Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetNearestActorArrayWithTag, "GetNearestActorArrayWithTag" }, // 457521649
		{ &Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_GetRandomPointInCircle, "GetRandomPointInCircle" }, // 3362103843
		{ &Z_Construct_UFunction_UAZP_ActorUtilsBPLibrary_SpawnActorsInCircle, "SpawnActorsInCircle" }, // 3546705862
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAZP_ActorUtilsBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAZP_ActorUtilsBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AZP_ActorUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAZP_ActorUtilsBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAZP_ActorUtilsBPLibrary_Statics::ClassParams = {
	&UAZP_ActorUtilsBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAZP_ActorUtilsBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAZP_ActorUtilsBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAZP_ActorUtilsBPLibrary()
{
	if (!Z_Registration_Info_UClass_UAZP_ActorUtilsBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAZP_ActorUtilsBPLibrary.OuterSingleton, Z_Construct_UClass_UAZP_ActorUtilsBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAZP_ActorUtilsBPLibrary.OuterSingleton;
}
template<> AZP_ACTORUTILS_API UClass* StaticClass<UAZP_ActorUtilsBPLibrary>()
{
	return UAZP_ActorUtilsBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAZP_ActorUtilsBPLibrary);
UAZP_ActorUtilsBPLibrary::~UAZP_ActorUtilsBPLibrary() {}
// End Class UAZP_ActorUtilsBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ActorUtils_Plugins_AZP_ActorUtils_Source_AZP_ActorUtils_Public_AZP_ActorUtilsBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAZP_ActorUtilsBPLibrary, UAZP_ActorUtilsBPLibrary::StaticClass, TEXT("UAZP_ActorUtilsBPLibrary"), &Z_Registration_Info_UClass_UAZP_ActorUtilsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAZP_ActorUtilsBPLibrary), 3236870525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ActorUtils_Plugins_AZP_ActorUtils_Source_AZP_ActorUtils_Public_AZP_ActorUtilsBPLibrary_h_2144243365(TEXT("/Script/AZP_ActorUtils"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ActorUtils_Plugins_AZP_ActorUtils_Source_AZP_ActorUtils_Public_AZP_ActorUtilsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ActorUtils_Plugins_AZP_ActorUtils_Source_AZP_ActorUtils_Public_AZP_ActorUtilsBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
