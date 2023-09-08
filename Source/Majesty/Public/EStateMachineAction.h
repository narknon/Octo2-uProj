#pragma once
#include "CoreMinimal.h"
#include "EStateMachineAction.generated.h"

UENUM(BlueprintType)
enum class EStateMachineAction : uint8 {
    ENTRY,
    UPDATE,
    EXIT,
};

