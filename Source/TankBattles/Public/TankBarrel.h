#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

UCLASS(meta = (BlueprintSpawnableComponent))
class TANKBATTLES_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxDegreesPerSecond = 20.0f;
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxElevationDegrees = 35.0f;
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MinElevationDegrees = 0.0f;

public:
	void Elevate(float RelativeSpeed);
};
