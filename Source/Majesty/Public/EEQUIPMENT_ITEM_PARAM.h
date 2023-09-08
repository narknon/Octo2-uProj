#pragma once
#include "CoreMinimal.h"
#include "EEQUIPMENT_ITEM_PARAM.generated.h"

UENUM(BlueprintType)
enum class EEQUIPMENT_ITEM_PARAM : uint8 {
    eMAX_HP,
    eMAX_MP,
    eATK,
    eMATK,
    eDEF,
    eMDEF,
    eACC,
    eAGI,
    eCRI,
    eEVA,
};

