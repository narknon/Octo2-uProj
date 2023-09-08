#pragma once
#include "CoreMinimal.h"
#include "ESPACT_MER_DESC_PARAM_TYPE.generated.h"

UENUM(BlueprintType)
enum class ESPACT_MER_DESC_PARAM_TYPE : uint8 {
    PARAM_NONE,
    PARAM_INT_0,
    PARAM_INT_1,
    PARAM_INT_2,
    PARAM_INT_3,
    PARAM_ITEM_0,
    PARAM_ITEM_1,
    PARAM_ITEM_2,
    PARAM_MAX UMETA(Hidden),
};

