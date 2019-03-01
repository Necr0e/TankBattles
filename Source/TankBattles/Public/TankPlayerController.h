#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankPlayerController.generated.h"


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

public:
	virtual void Tick(float DeltaTime) override;
};
