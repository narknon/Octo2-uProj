#pragma once
#include "CoreMinimal.h"
#include "EITEM_USE_TYPE.generated.h"

UENUM(BlueprintType)
enum class EITEM_USE_TYPE : uint8 {
    eDISABLE,
    eALWAYS,
    eFIELD_ONLY,
    eBATTLE_ONLY,
};

