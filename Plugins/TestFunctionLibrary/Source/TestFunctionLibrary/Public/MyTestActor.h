// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyTestActor.generated.h"

UCLASS(Blueprintable)
class TESTFUNCTIONLIBRARY_API AMyTestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyTestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void TestFunction01(int32 key);

	UFUNCTION(BlueprintCallable, meta = (), Category = "TopCG | SubCG")
	void TestFunction02();

	UFUNCTION(BlueprintImplementableEvent)
		void BPImplementation1();

	UFUNCTION(BlueprintNativeEvent, Category = TopCategory, meta = (DisplayName = "BPNativeEvent2"))
		void BPNativeEvent1();

};
