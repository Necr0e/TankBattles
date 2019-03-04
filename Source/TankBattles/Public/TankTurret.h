#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"


UCLASS(meta = (BlueprintSpawnableComponent))
class TANKBATTLES_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxDegreesPerSecond = 25.0f;

public:
	void Rotate(float RelativeSpeed);
};
