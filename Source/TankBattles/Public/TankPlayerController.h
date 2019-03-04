#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

//Forward Delcarations
class ATank;

UCLASS()
class TANKBATTLES_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

private:
	ATank* GetControlledTank() const;
	void AimAtCrosshairs();
	bool GetSightRayHitLocation(FVector& OutHitLication) const;
	bool GetLookDirection(FVector2D ScreenLocation, FVector &LookDirection) const;
	bool GetHitLocation(FVector LookDirection, FVector &HitLocation) const;
	
	UPROPERTY(EditDefaultsOnly)
	float CrosshairXLocation = 0.5;
	UPROPERTY(EditDefaultsOnly)
	float CrosshairYLocation = 0.333;
	// Line trace range, Default 10km
	UPROPERTY(EditDefaultsOnly)
	float LineTraceRange = 100000000.0;

public:
	virtual void Tick(float DeltaTime) override;
};
