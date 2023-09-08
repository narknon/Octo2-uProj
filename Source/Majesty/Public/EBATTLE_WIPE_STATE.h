#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_WIPE_STATE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_WIPE_STATE : uint8 {
    eNONE,
    eBATTLE_START_WIPE_IN,
    eBATTLE_START_WIPE_OUT,
    eBATTLE_END_WIPE_IN,
    eBATTLE_END_WIPE_OUT,
};

