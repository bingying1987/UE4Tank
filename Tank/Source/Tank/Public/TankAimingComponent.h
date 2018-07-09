// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

class UTankBarrel;
class UTankTurret;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();
private:
	UTankBarrel *Barrel = nullptr;
	UTankTurret *Turret = nullptr;
public:	


	void AimAt(FVector HitLocation, float Speed);
	void SetBarrelRefrence(UTankBarrel* BarrelToSet);
	void SetTurretRefrence(UTankTurret* TurretToSet);
	void MoveBarrelTowards(FVector AimDirection);
};
