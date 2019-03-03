// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

//Forward Declarations
class UProjectileMovementComponent;

UCLASS()
class TANKBATTLES_API AProjectile : public AActor
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
private:
	UProjectileMovementComponent* ProjectileMovement = nullptr;

public:	
	AProjectile();
	virtual void Tick(float DeltaTime) override;
	void LaunchProjectile(float Speed);

};
