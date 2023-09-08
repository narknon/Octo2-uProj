#pragma once
#include "CoreMinimal.h"
#include "EEVENT_MODE.generated.h"

UENUM(BlueprintType)
enum class EEVENT_MODE : uint8 {
    eNORMAL,
    eAUTO,
    eDOUBLE_SPEED,
    eMODE_MAX UMETA(Hidden),
};

