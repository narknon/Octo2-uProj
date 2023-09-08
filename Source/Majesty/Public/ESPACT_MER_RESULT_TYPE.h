#pragma once
#include "CoreMinimal.h"
#include "ESPACT_MER_RESULT_TYPE.generated.h"

UENUM(BlueprintType)
enum class ESPACT_MER_RESULT_TYPE : uint8 {
    NONE,
    SUCCESS,
    FAILURE,
};

