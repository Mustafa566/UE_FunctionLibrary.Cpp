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

	// 
	UFUNCTION(BlueprintCallable, Category = "mustafa library")
	static FString text(FString Name);

	UFUNCTION(BlueprintCallable, Category = "mustafa library")
	static float AddTwoNumbers(float A, float B);

	// Pure function with bool
	UFUNCTION(BlueprintPure, Category = "mustafa library")
	static bool MyPureMethod();
};
