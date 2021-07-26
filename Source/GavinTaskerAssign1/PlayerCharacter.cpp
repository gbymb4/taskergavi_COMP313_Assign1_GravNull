// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"

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

float APlayerCharacter::SetSpeed(float nSpeed)
{
	speed = nSpeed > GetMaxSpeed() ? GetMaxSpeed() : (nSpeed < GetMinSpeed() ? GetMinSpeed() : nSpeed); //Protect Against Improper Use

	UCharacterMovementComponent* playerController = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetCharacterMovement(); 
	playerController->MaxWalkSpeed = speed; //Update Controller Walking Speed

	return GetSpeed();
}

int APlayerCharacter::GetHealth()
{
	return health;
}

int APlayerCharacter::SetHealth(int nHealth)
{
	health = nHealth > GetMaxHealth() ? GetMaxHealth() : (nHealth < GetMinHealth() ? GetMinHealth() : nHealth); //Protect Against Improper Use
	return GetHealth();
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