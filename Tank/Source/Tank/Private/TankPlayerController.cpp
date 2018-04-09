// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

ATankPawn * ATankPlayerController::GetControllerTank() const
{
	return Cast<ATankPawn>(GetPawn());
}

void ATankPlayerController::BeginPlay()
{
	auto ControlledTank = GetControllerTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("no controlledTank~"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Controlled Tank %s"),*ControlledTank->GetName());
	}
}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControllerTank())
	{
		return;
	}
}
