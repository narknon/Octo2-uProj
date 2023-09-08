#pragma once
#include "CoreMinimal.h"
#include "EABILITY_USE_TYPE.generated.h"

UENUM(BlueprintType)
enum class EABILITY_USE_TYPE : uint8 {
    eALWAYS,
    eBATTLE_ONLY,
    eFIELD_ONLY,
    eSUPPORT,
};

