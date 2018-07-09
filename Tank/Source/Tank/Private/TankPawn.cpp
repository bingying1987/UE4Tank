// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPawn.h"
#include "TankBarrel.h"

// Sets default values
ATankPawn::ATankPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TankAimingComponent = CreateDefaultSubobject<UTankAimingComponent>(FName("Aiming Component"));
}

// Called when the game starts or when spawned
void ATankPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATankPawn::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

// Called to bind functionality to input
void ATankPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATankPawn::AimAt(FVector HitLocation)
{
	TankAimingComponent->AimAt(HitLocation,FireSpeed);
}

void ATankPawn::SetBarrelRefrence(UTankBarrel* BarrelToSet)
{
	TankAimingComponent->SetBarrelRefrence(BarrelToSet);
}

void ATankPawn::SetTurretRefrence(UTankTurret* TurretToSet)
{
	TankAimingComponent->SetTurretRefrence(TurretToSet);
}

void ATankPawn::Fire()
{

}