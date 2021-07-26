// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	speed = GetMaxSpeed() / 2;
	health = GetMaxHealth();
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float APlayerCharacter::GetSpeed()
{
	return speed;
}

void APlayerCharacter::SetSpeed(float nSpeed)
{
	float nTotalSpeed = GetSpeed() + nSpeed;
	speed = nTotalSpeed > GetMaxSpeed() ? GetMaxSpeed() : nTotalSpeed < GetMinSpeed() ? GetMinSpeed() : nTotalSpeed; //Protect Against Improper Use
}

int APlayerCharacter::GetHealth()
{
	return health;
}

void APlayerCharacter::SetHealth(int nHealth)
{
	int nTotalHealth = GetHealth() + nHealth;
	health = nTotalHealth > GetMaxHealth() ? GetMaxHealth() : nTotalHealth < GetMinHealth() ? GetMinHealth() : nTotalHealth; //Protect Against Improper Use
}

float APlayerCharacter::GetMaxSpeed()
{
	return MAX_SPEED;
}

float APlayerCharacter::GetMinSpeed()
{
	return MIN_SPEED;
}

int APlayerCharacter::GetMaxHealth()
{
	return MAX_HEALTH;
}

int APlayerCharacter::GetMinHealth()
{
	return MIN_HEALTH;
}