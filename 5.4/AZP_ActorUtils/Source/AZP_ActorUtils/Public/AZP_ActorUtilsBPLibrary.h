// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "AZP_ActorUtilsBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UAZP_ActorUtilsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext", DisplayName = "Get Nearest Actor Array", Keywords = "azp gnaa"), Category = "AZP_ActorUtils|Actor")
	static TArray<AActor*> GetNearestActorArray(const UObject* WorldContext, AActor* SourceActor, float Radius, UClass* ActorClass);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext", DisplayName = "Get Nearest Actor Array With Tag", Keywords = "azp gnaa gnaawt"), Category = "AZP_ActorUtils|Actor")
	static TArray<AActor*> GetNearestActorArrayWithTag(const UObject* WorldContext, AActor* SourceActor, float Radius, UClass* ActorClass, FName Tag);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext", DisplayName = "Find Matching Actors", Keywords = "azp fma"), Category = "AZP_ActorUtils|Actor")
	static TArray<AActor*> FindMatchingActors(const UObject* WorldContext, UClass* ActorClass);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext", DisplayName = "Spawn Actors In Circle", Keywords = "azp saic"), Category = "AZP_ActorUtils|Actor")
	static TArray<AActor*> SpawnActorsInCircle(const UObject* WorldContext, UClass* ActorClass, float Radius, int32 NumActors, const FVector CenterLocation);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Random Point In Circle", Keywords = "azp grpic"), Category = "AZP_ActorUtils|Actor")
	static FVector GetRandomPointInCircle(AActor* CenterActor, float Radius);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext", DisplayName = "Find Actors In Radius Chain", Keywords = "azp fairc"), Category = "AZP_ActorUtils|Actor")
	static TArray<AActor*> FindActorsInRadiusChain(const UObject* WorldContext, AActor* TargetActor, float Range, int32 MaxActors, UClass* ActorClass, FName Tag);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext", DisplayName = "Get Actors Between Actors Line", Keywords = "azp gabal"), Category = "AZP_ActorUtils|Actor")
	static TArray<AActor*> GetActorsBetweenActorsLine(const UObject* WorldContext, AActor* SourceActor, AActor* TargetActor, float LineThickness, UClass* ActorClass, FName Tag);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Locations Between Actors", Keywords = "azp glba"), Category = "AZP_ActorUtils|Actor")
	static TArray<FVector> GetLocationsBetweenActors(AActor* SourceActor, AActor* TargetActor, int32 NumLocations);
};
