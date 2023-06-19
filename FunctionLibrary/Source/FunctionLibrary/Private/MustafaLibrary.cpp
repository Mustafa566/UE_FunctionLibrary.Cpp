#include "MustafaLibrary.h"
#include <Kismet/GameplayStatics.h>
#include <DrawDebugHelpers.h>

FString UMustafaLibrary::text(FString Name)
{
    return FString(Name);
}

float UMustafaLibrary::IncVariable(float A, float B)
{
    return A + B;
}

bool UMustafaLibrary::MyPureMethod()
{
    return false;
}

bool UMustafaLibrary::DoLinetrace(AActor* Actor, FVector& OutHitLocation)
{
    // Get the player's controller
    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(Actor, 0);
    if (!PlayerController) return false;

    // Get the player's view point location and rotation
    FVector PlayerViewPointLocation;
    FRotator PlayerViewPointRotation;
    PlayerController->GetPlayerViewPoint(PlayerViewPointLocation, PlayerViewPointRotation);

    // Define the linetrace start and end points based on the player's view point
    FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * 1000.0f;
    FVector LineTraceStart = PlayerViewPointLocation;

    // Perform the linetrace
    FHitResult HitResult;

    UWorld* World = Actor->GetWorld();
    if (!World) return false;

    // Perform a line trace in the world from LineTraceStart to LineTraceEnd using ECC_Visibility collision channel
    bool bDidHit = World->LineTraceSingleByChannel(HitResult, LineTraceStart, LineTraceEnd, ECC_Visibility);
    if (bDidHit)
    {
        // If the linetrace hits something, store the hit location and the hit actor
        OutHitLocation = HitResult.Location;
        AActor* HitActor = HitResult.GetActor();

        // Print the name of the hit actor to the screen for debugging purposes
        FString HitActorName = HitActor->GetName();
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Hit Actor: %s"), *HitActorName));

        // Draw a debug line to visualize the linetrace (from LineTraceStart to the hit location)
        DrawDebugLine(Actor->GetWorld(), LineTraceStart, HitResult.Location, FColor::Green, false, 2.0f, 0, 2.0f);
        return true;
    }

    // Draw a debug line to visualize the linetrace (from LineTraceStart to LineTraceEnd, no hit)
    DrawDebugLine(Actor->GetWorld(), LineTraceStart, LineTraceEnd, FColor::Red, false, 2.0f, 0, 2.0f);
    return false;
}

