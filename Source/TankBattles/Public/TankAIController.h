#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

class ATank;

UCLASS()
class TANKBATTLES_API ATankAIController : public AAIController
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;

private:
	ATank* GetAIControlledTank() const;
	ATank* GetPlayerTank() const;

public:
	virtual void Tick(float DeltaTime) override;
};
