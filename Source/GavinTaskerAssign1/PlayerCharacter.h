// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class GAVINTASKERASSIGN1_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

	static constexpr float MAX_SPEED = 1200.f;
	static constexpr float MIN_SPEED = 0.f;

	static const int MAX_HEALTH = 100;
	static const int MIN_HEALTH = 0;

	float speed;
	int health;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintPure, Category = "Player")
		float GetSpeed();

	UFUNCTION(BlueprintCallable, Category = "Player")
		void SetSpeed(float nSpeed);

	UFUNCTION(BlueprintPure, Category = "Player")
		int GetHealth();

	UFUNCTION(BlueprintCallable, Category = "Player")
		void SetHealth(int nHealth);

	UFUNCTION(BlueprintPure, Category = "Player")
		float GetMaxSpeed();

	UFUNCTION(BlueprintPure, Category = "Player")
		float GetMinSpeed();

	UFUNCTION(BlueprintPure, Category = "Player")
		int GetMaxHealth();

	UFUNCTION(BlueprintPure, Category = "Player")
		int GetMinHealth();

};
