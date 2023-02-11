#include "MustafaLibrary.h"

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
