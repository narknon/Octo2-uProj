#pragma once
#include "CoreMinimal.h"
#include "EMANAGER_CREATE_PHASE.generated.h"

UENUM(BlueprintType)
enum class EMANAGER_CREATE_PHASE : uint8 {
    ULTRA_FIRST,
    FIRST,
    IN_GAME,
    ANY_TIME,
};

