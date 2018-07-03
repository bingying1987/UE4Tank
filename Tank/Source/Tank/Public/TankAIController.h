// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "TankPawn.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class TANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
	
private:
	virtual void Tick(float DeltaSeconds) override;
	ATankPawn* GetControllerTank() const;
	void BeginPlay() override;
	ATankPawn* GetPlayerTank() const;
};
