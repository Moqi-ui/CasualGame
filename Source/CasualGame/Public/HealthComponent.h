// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnHealthChangedSignature, UHealthComponent*, HealthComp, float, Health, float, DamageAmount, const class UDamageType*, DamageType, class AController*, InstigatedBy, AActor*, DamageCauser);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CASUALGAME_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:

	UPROPERTY(BlueprintAssignable, Category = "Event")
		FOnHealthChangedSignature OnHealthChanged;

	UPROPERTY(BlueprintCallable, Category = "Event")
		FOnHealthChangedSignature OnHealthChanged1;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "TopCate")
		float Health;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float MaxHealth;

	UFUNCTION(BlueprintCallable)
		void HandleTakeDamage(AActor* DamageActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
};
