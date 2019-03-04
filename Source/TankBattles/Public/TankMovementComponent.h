#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

class UTankTracks;

UCLASS(meta = (BlueprintSpawnableComponent))
class TANKBATTLES_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()
private:
	UTankTracks* LeftTrack = nullptr;
	UTankTracks* RightTrack = nullptr;

public:
	UFUNCTION(BlueprintCallable, Category = Input)
	void IntendMoveForward(float Throw);
	UFUNCTION(BlueprintCallable, Category = Input)
	void IntendTurnRight(float Throw);
	UFUNCTION(BlueprintCallable, Category = Setup)
	void Initialise(UTankTracks* LeftTrackToSet, UTankTracks* RightTrackToSet);
};
