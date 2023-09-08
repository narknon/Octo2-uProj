#pragma once
#include "CoreMinimal.h"
#include "EPOTENTIALITY_ACTION_TYPE.generated.h"

UENUM(BlueprintType)
enum class EPOTENTIALITY_ACTION_TYPE : uint8 {
    eNONE,
    eADD_ABILITY,
    eSKILL_ALL,
    eCONVERGENCE,
    eREPEAT,
    eBP_MAX UMETA(Hidden),
    eFORCE_WEAKNESS,
    eDOUBLE_ACTION,
    eNO_USE_MATERIAL,
};

