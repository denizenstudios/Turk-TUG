// Fill out your copyright notice in the Description page of Project Settings.
#include "YXX.h"

#include "TurkMovement_BP.h"

// Sets default values
ATurkMovement_BP::ATurkMovement_BP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATurkMovement_BP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATurkMovement_BP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATurkMovement_BP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

