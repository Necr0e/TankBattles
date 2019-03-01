#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Tank.h"
#include "TankAIController.generated.h"

UCLASS()
class TANKBATTLES_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	void BeginPlay() override;

	ATank* GetAIControlledTank() const;
	ATank* GetPlayerTank() const;

};
