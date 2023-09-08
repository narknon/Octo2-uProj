#pragma once
#include "CoreMinimal.h"
#include "ECharacterMoveModeForDB.generated.h"

UENUM(BlueprintType)
enum class ECharacterMoveModeForDB : uint8 {
    DEFAULT,
    WALK,
    LADDER,
    CANOE,
};

