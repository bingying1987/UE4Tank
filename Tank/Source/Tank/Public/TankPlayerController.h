// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TankPawn.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
private:
	ATankPawn* GetControllerTank() const;
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	void AimTowardsCrosshair();
};
