#pragma once
#include "CoreMinimal.h"
#include "ESPACT_MER_RESULT_PARAM_TYPE.generated.h"

UENUM(BlueprintType)
enum class ESPACT_MER_RESULT_PARAM_TYPE : uint8 {
    RESULT_NONE,
    RESULT_LEAF,
    RESULT_ITEM,
    RESULT_MAX UMETA(Hidden),
};

