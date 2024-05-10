// Copyright Epic Games, Inc. All Rights Reserved.

#include "AZP_ActorUtilsBPLibrary.h"
#include <Kismet/GameplayStatics.h>
#include <GameFramework/ProjectileMovementComponent.h>
#include "Engine/Engine.h"
#include "Engine/World.h"

UAZP_ActorUtilsBPLibrary::UAZP_ActorUtilsBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

TArray<AActor*> UAZP_ActorUtilsBPLibrary::FindMatchingActors(const UObject* WorldContext, UClass* ActorClass)
{
	TArray<AActor*> MatchingActors;
	UWorld* World = WorldContext->GetWorld();
	if (World == nullptr)
	{
		return MatchingActors;
	}
	UGameplayStatics::GetAllActorsOfClass(WorldContext, ActorClass, MatchingActors);
	return MatchingActors;
}

TArray<AActor*> UAZP_ActorUtilsBPLibrary::GetNearestActorArrayWithTag(const UObject* WorldContext, AActor* SourceActor, float Radius, UClass* ActorClass, FName Tag)
{
	TArray<AActor*> NearestActors;

	UWorld* World = WorldContext->GetWorld();
	if (World == nullptr)
	{
		return NearestActors;
	}

	if (SourceActor == nullptr || ActorClass == nullptr)
	{
		return NearestActors;
	}

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(WorldContext, ActorClass, FoundActors);

	for (AActor* Actor : FoundActors)
	{
		if (Actor != nullptr && Actor != SourceActor && Actor->ActorHasTag(Tag) && Actor->GetDistanceTo(SourceActor) <= Radius)
		{
			if (IsValid(Actor)) {
				NearestActors.Add(Actor);
			}
		}
	}

	// sort by distance
	NearestActors.Sort([SourceActor](const AActor& A, const AActor& B)
		{
			return A.GetDistanceTo(SourceActor) < B.GetDistanceTo(SourceActor);
		});

	return NearestActors;
}

TArray<AActor*> UAZP_ActorUtilsBPLibrary::GetNearestActorArray(const UObject* WorldContext, AActor* SourceActor, float Radius, UClass* ActorClass)
{
	TArray<AActor*> NearestActors;

	UWorld* World = WorldContext->GetWorld();
	if (World == nullptr)
	{
		return NearestActors;
	}

	if (SourceActor == nullptr || ActorClass == nullptr)
	{
		return NearestActors;
	}

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(WorldContext, ActorClass, FoundActors);

	for (AActor* Actor : FoundActors)
	{
		if (Actor != nullptr && Actor != SourceActor && Actor->GetDistanceTo(SourceActor) <= Radius)
		{
			if (IsValid(Actor)) {
				NearestActors.Add(Actor);
			}
		}
	}

	NearestActors.Sort([SourceActor](const AActor& A, const AActor& B)
		{
			return A.GetDistanceTo(SourceActor) < B.GetDistanceTo(SourceActor);
		});

	return NearestActors;
}

TArray<AActor*> UAZP_ActorUtilsBPLibrary::SpawnActorsInCircle(const UObject* WorldContext, UClass* ActorClass, float Radius, int32 NumActors, const FVector CenterLocation)
{
	TArray<AActor*> SpawnedActors;
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull);

	if (World == nullptr)
	{
		return SpawnedActors;
	}

	if (!ActorClass || NumActors <= 0 || Radius <= 0.f)
	{
		return SpawnedActors;
	}

	float AngleIncrement = 360.f / NumActors;

	for (int32 i = 0; i < NumActors; i++)
	{
		float Angle = FMath::DegreesToRadians(AngleIncrement * i);
		FVector SpawnLocation = CenterLocation + FVector(FMath::Cos(Angle), FMath::Sin(Angle), 0.f) * Radius;
		AActor* SpawnedActor = World->SpawnActor(ActorClass, &SpawnLocation);
		if (SpawnedActor)
		{
			SpawnedActors.Add(SpawnedActor);
		}
	}

	return SpawnedActors;
}

FVector UAZP_ActorUtilsBPLibrary::GetRandomPointInCircle(AActor* CenterActor, float Radius)
{
	if (!CenterActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("CenterActor is nullptr."));
		return FVector::ZeroVector;
	}

	UWorld* World = CenterActor->GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to get World."));
		return FVector::ZeroVector;
	}

	float RandomAngle = FMath::RandRange(0.0f, 360.0f);
	float RandomRadian = FMath::DegreesToRadians(RandomAngle);
	FVector CenterLocation = CenterActor->GetActorLocation();
	FVector Offset = FVector(CenterLocation.X + Radius * FMath::Cos(RandomRadian),
		CenterLocation.Y + Radius * FMath::Sin(RandomRadian),
		CenterLocation.Z);
	Offset.Z = Offset.Z + 100;

	return Offset;
}

TArray<AActor*> UAZP_ActorUtilsBPLibrary::FindActorsInRadiusChain(const UObject* WorldContext, AActor* TargetActor, float Range, int32 MaxActors, UClass* ActorClass, FName Tag)
{
	TArray<AActor*> FoundActors;

	UWorld* World = WorldContext->GetWorld();
	if (!World || !TargetActor || !ActorClass)
		return FoundActors;

	FVector TargetLocation = TargetActor->GetActorLocation();

	TArray<AActor*> SelectedActors;

	while (FoundActors.Num() < MaxActors)
	{
		TArray<AActor*> ActorsInRadius;
		UGameplayStatics::GetAllActorsOfClass(WorldContext, ActorClass, ActorsInRadius);

		TArray<AActor*> Candidates;

		for (AActor* Actor : ActorsInRadius)
		{
			if (!SelectedActors.Contains(Actor) && Actor->ActorHasTag(Tag))
			{
				float DistanceToActor = FVector::Dist(Actor->GetActorLocation(), TargetLocation);
				if (DistanceToActor <= Range)
				{
					Candidates.Add(Actor);
				}
			}
		}

		if (Candidates.Num() > 0)
		{
			int32 RandomIndex = FMath::RandRange(0, Candidates.Num() - 1);
			AActor* RandomActor = Candidates[RandomIndex];

			FoundActors.Add(RandomActor);
			SelectedActors.Add(RandomActor);
			TargetActor = RandomActor;
		}
		else
		{
			break;
		}
	}

	return FoundActors;
}

TArray<FVector> UAZP_ActorUtilsBPLibrary::GetLocationsBetweenActors(AActor* SourceActor, AActor* TargetActor, int32 NumLocations)
{
	TArray<FVector> LocationsBetween;

	if (SourceActor == nullptr || TargetActor == nullptr || NumLocations <= 1)
	{
		return LocationsBetween;
	}

	FVector SourceLocation = SourceActor->GetActorLocation();
	FVector TargetLocation = TargetActor->GetActorLocation();
	float Distance = FVector::Dist(SourceLocation, TargetLocation);

	if (Distance <= 0)
	{
		return LocationsBetween;
	}

	float Step = Distance / static_cast<float>(NumLocations - 1);

	for (int32 i = 0; i < NumLocations; ++i)
	{
		FVector Location = FMath::Lerp(SourceLocation, TargetLocation, i * Step / Distance);
		LocationsBetween.Add(Location);
	}

	return LocationsBetween;
}



TArray<AActor*> UAZP_ActorUtilsBPLibrary::GetActorsBetweenActorsLine(const UObject* WorldContext, AActor* SourceActor, AActor* TargetActor, float LineThickness, UClass* ActorClass, FName Tag)
{
	TArray<AActor*> ActorsBetween;

	if (SourceActor == nullptr || TargetActor == nullptr || ActorClass == nullptr)
	{
		return ActorsBetween;
	}

	UWorld* World = WorldContext->GetWorld();
	if (World == nullptr)
	{
		return ActorsBetween;
	}

	FVector SourceLocation = SourceActor->GetActorLocation();
	FVector TargetLocation = TargetActor->GetActorLocation();
	FVector Direction = (TargetLocation - SourceLocation).GetSafeNormal();
	FVector LineCenter = (SourceLocation + TargetLocation) * 0.5f;
	float HalfLength = FVector::Dist(SourceLocation, TargetLocation) * 0.5f;

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(WorldContext, ActorClass, FoundActors);

	for (AActor* Actor : FoundActors)
	{
		if (Actor != nullptr && Actor != SourceActor && Actor != TargetActor && Actor->ActorHasTag(Tag))
		{
			FVector ActorLocation = Actor->GetActorLocation();
			FVector LineToActor = ActorLocation - LineCenter;
			float DistanceToLine = FVector::CrossProduct(LineToActor, Direction).Size();

			if (DistanceToLine <= LineThickness && FVector::Dist(LineCenter, ActorLocation) <= HalfLength)
			{
				ActorsBetween.Add(Actor);
			}
		}
	}

	return ActorsBetween;
}