#pragma once
#include "CoreMinimal.h"
#include "EMYSHIP_CUSTOM_TYPE.generated.h"

UENUM(BlueprintType)
enum class EMYSHIP_CUSTOM_TYPE : uint8 {
    NONE,
    TYPE_A,
    TYPE_B,
    TYPE_C,
    TYPE_D,
    MAX_NUM,
};

