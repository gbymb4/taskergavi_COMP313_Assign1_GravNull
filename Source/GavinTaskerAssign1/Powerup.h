// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Powerup.generated.h"

UCLASS()
class GAVINTASKERASSIGN1_API APowerup : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* PowerupModel;

	UPROPERTY(EditAnywhere, Category = "Collision")
		class UCapsuleComponent* PlayerCollider;

public:	
	// Sets default values for this actor's properties
	APowerup();

	bool active;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnOverlapActorBegin(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor, UPrimitiveComponent* OtherComponent,
			int32 OtherBodyIndex, bool bFromSweep,
			const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapActorEnd(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex);

	UFUNCTION(BlueprintPure, Category = "Powerup")
		bool GetIsActive();

};
