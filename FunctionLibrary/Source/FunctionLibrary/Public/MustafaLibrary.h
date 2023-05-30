// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MustafaLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FUNCTIONLIBRARY_API UMustafaLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		// 
		UFUNCTION(BlueprintCallable, Category = "mustafa library")
		static FString text(FString Name);

		UFUNCTION(BlueprintCallable, Category = "mustafa library")
		static float IncVariable(float A, float B);

		// Pure function with bool
		UFUNCTION(BlueprintPure, Category = "mustafa library")
		static bool MyPureMethod();

		UFUNCTION(BlueprintCallable, Category = "mustafa library")
		static bool DoLinetrace(AActor* Actor, FVector& OutHitLocation);

		UPROPERTY(EditAnywhere, Category = "mustafa library")
		TEnumAsByte<ECollisionChannel> TraceChannelProperty = ECC_Pawn;
};