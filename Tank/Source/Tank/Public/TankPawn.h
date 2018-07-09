// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TankAimingComponent.h"
#include "TankPawn.generated.h"

class UTankBarrel;
class UTankTurret;
UCLASS()
class TANK_API ATankPawn : public APawn
{
	GENERATED_BODY()
public:
	void AimAt(FVector HitLocation);
protected:
	UTankAimingComponent* TankAimingComponent = nullptr;
public:
	// Sets default values for this pawn's properties
	ATankPawn();
	UFUNCTION(BlueprintCallable,Category = Setup)
	void SetBarrelRefrence(UTankBarrel* BarrelToSet);
	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetTurretRefrence(UTankTurret* TurretToSet);
	UPROPERTY(EditAnywhere, Category = Fire)
	float FireSpeed = 4000.0f;//µ¥Î»ÀåÃ×

	UFUNCTION(BlueprintCallable, Category = Firing)
	void Fire();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
