#pragma once
#include "CoreMinimal.h"
#include "ESTORY_TASK_TYPE.generated.h"

UENUM(BlueprintType)
enum class ESTORY_TASK_TYPE : uint8 {
    NONE,
    NORMAL,
    SUB,
    INTERLUDE,
};

