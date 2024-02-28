// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestFunctionLibraryBPLibrary.h"
#include "TestFunctionLibrary.h"

UTestFunctionLibraryBPLibrary::UTestFunctionLibraryBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UTestFunctionLibraryBPLibrary::TestFunctionLibrarySampleFunction(float Param)
{
	return -1;
}

FString UTestFunctionLibraryBPLibrary::TestMetadata(FString param)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, param);
	return param;
}

void UTestFunctionLibraryBPLibrary::BPNativeEvent_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "BPNativeEvent");
}
