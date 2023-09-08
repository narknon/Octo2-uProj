#pragma once
#include "CoreMinimal.h"
#include "EGAME_CONDITION_TYPE.generated.h"

UENUM(BlueprintType)
enum class EGAME_CONDITION_TYPE : uint8 {
    eNONE,
    eSOLO,
    ePARTY,
    ePLAYER_MALE,
    ePLAYER_FEMALE,
    ePLAYER_NUTORAL,
    eTARGET_MALE,
    eTARGET_FEMALE,
    eTAEGET_NUTORAL,
};

