#pragma once
#include "CoreMinimal.h"
#include "EDISMANTLING_EFFECT_TYPE.generated.h"

UENUM(BlueprintType)
enum class EDISMANTLING_EFFECT_TYPE : uint8 {
    eNONE,
    eHP_RECOVERY,
    eSP_RECOVERY,
    eBP_RECOVERY,
    eBUFF,
    eMAX,
};

