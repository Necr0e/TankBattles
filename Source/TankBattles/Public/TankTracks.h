#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTracks.generated.h"

UCLASS(meta = (BlueprintSpawnableComponent))
class TANKBATTLES_API UTankTracks : public UStaticMeshComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = Input)
	void SetThrottle(float Throttle);

	// Max force applied to each track in Newtons
	UPROPERTY(EditDefaultsOnly)
	float MaxDrivingForce = 40000000.0f;
};
