// Fill out your copyright notice in the Description page of Project Settings.


#include "TacticsCore/TacticsPawnBase.h"

// Sets default values
ATacticsPawnBase::ATacticsPawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATacticsPawnBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATacticsPawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATacticsPawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

