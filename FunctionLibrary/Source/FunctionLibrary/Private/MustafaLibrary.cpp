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
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(Actor, 0);
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	PlayerController->GetPlayerViewPoint(PlayerViewPointLocation, PlayerViewPointRotation);

	FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * 1000.0f;
	FVector LineTraceStart = PlayerViewPointLocation;

	FHitResult HitResult;

	// Visualize the linetrace for a duration of 5 seconds
	DrawDebugLine(Actor->GetWorld(), LineTraceStart, HitResult.Location, FColor::Red, true, 5.0f);

	bool bDidHit = Actor->GetWorld()->LineTraceSingleByChannel(HitResult, LineTraceStart, LineTraceEnd, ECC_Visibility);
	if (bDidHit)
	{
		OutHitLocation = HitResult.Location;
		return true;
	}

	return false;
}