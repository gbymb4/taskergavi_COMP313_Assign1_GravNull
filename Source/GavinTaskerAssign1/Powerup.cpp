// Fill out your copyright notice in the Description page of Project Settings.


#include "Powerup.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APowerup::APowerup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PowerupModel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Powerup Model"));
	PlayerCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Player Collider"));

	PlayerCollider->InitCapsuleSize(34.f, 88.f);

	RootComponent = PowerupModel;

	PlayerCollider->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void APowerup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APowerup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	PlayerCollider->OnComponentBeginOverlap.AddDynamic(this, &APowerup::OnOverlapActorBegin);
	PlayerCollider->OnComponentEndOverlap.AddDynamic(this, &APowerup::OnOverlapActorEnd);
}

void APowerup::OnOverlapActorBegin(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComponent,
	int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{
	

}

void APowerup::OnOverlapActorEnd(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{

}