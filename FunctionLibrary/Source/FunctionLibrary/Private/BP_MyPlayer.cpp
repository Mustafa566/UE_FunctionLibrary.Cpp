// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_MyPlayer.h"
#include "MustafaLibrary.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"


UMustafaLibrary* MustafaLibrary;

// Sets default values
ABP_MyPlayer::ABP_MyPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ABP_MyPlayer::BeginPlay()
{
	Super::BeginPlay();
	MustafaLibrary = NewObject<UMustafaLibrary>();
}

// Called every frame
void ABP_MyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABP_MyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Movement BP_MyPlayer (WASD)
	PlayerInputComponent->BindAxis("MoveForward", this, &ABP_MyPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABP_MyPlayer::MoveRight);

	// Mouse movement
	PlayerInputComponent->BindAxis("Turn", this, &ABP_MyPlayer::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &ABP_MyPlayer::AddControllerPitchInput);

	// Character jump
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ABP_MyPlayer::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ABP_MyPlayer::StopJump);

	// Character interact
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ABP_MyPlayer::Interact);
}

// Player moving forward and backward
void ABP_MyPlayer::MoveForward(float value)
{
	FVector Direction = GetActorForwardVector();
	AddMovementInput(Direction, value);
}

// Player moving right and left
void ABP_MyPlayer::MoveRight(float value)
{
	FVector Direction = GetActorRightVector();
	AddMovementInput(Direction, value);
}

// Jumping mechanic
void ABP_MyPlayer::StartJump()
{
	bPressedJump = true;
}

void ABP_MyPlayer::StopJump()
{
	bPressedJump = false;
}

// Interact with actors using a linetrace
void ABP_MyPlayer::Interact()
{
	FVector OutHitLocation;
	UMustafaLibrary::DoLinetrace(this, OutHitLocation);
}


void ABP_MyPlayer::OwnPrint(FString Subject)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString(Subject));
}

