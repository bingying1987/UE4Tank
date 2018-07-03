// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

ATankPawn * ATankAIController::GetControllerTank() const
{
	return Cast<ATankPawn>(GetPawn());
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	auto PlayTank = GetPlayerTank();
	if (!PlayTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController can't find player tank."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController found player tank %s"), *PlayTank->GetName());
	}
}

ATankPawn * ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn)
	{
		return nullptr;
	}
	return Cast<ATankPawn>(PlayerPawn);
}

void ATankAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (GetPlayerTank())
	{
		GetControllerTank()->AimAt(GetPlayerTank()->GetActorLocation());
	}
}


