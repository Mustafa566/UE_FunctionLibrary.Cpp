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
    // Get the player's camera
    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(Actor, 0);
    if (!PlayerController) return false;
    FVector PlayerViewPointLocation;
    FRotator PlayerViewPointRotation;
    PlayerController->GetPlayerViewPoint(PlayerViewPointLocation, PlayerViewPointRotation);

    // Define the linetrace start and end points
    FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * 1000.0f;
    FVector LineTraceStart = PlayerViewPointLocation;

    // Perform the linetrace
    FHitResult HitResult;

    UWorld* World = Actor->GetWorld();
    if (!World) return false;

    bool bDidHit = World->LineTraceSingleByChannel(HitResult, LineTraceStart, LineTraceEnd, ECC_Visibility);
    if (bDidHit)
    {
        OutHitLocation = HitResult.Location;
        // Draw a debug line to visualize the linetrace
        DrawDebugLine(Actor->GetWorld(), LineTraceStart, HitResult.Location, FColor::Green, false, 2.0f, 0, 2.0f);
        return true;
    }
    // Draw a debug line to visualize the linetrace
    DrawDebugLine(Actor->GetWorld(), LineTraceStart, LineTraceEnd, FColor::Red, false, 2.0f, 0, 2.0f);
    return false;
}

