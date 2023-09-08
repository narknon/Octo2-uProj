#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugLoadCheatCommand.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ADebugLoadCheatCommand : public AActor {
    GENERATED_BODY()
public:
    ADebugLoadCheatCommand(const FObjectInitializer& ObjectInitializer);
};

