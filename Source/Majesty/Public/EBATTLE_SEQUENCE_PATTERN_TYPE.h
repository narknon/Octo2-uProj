#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_SEQUENCE_PATTERN_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_SEQUENCE_PATTERN_TYPE : uint8 {
    ePATTERN_NONE,
    ePATTERN_A,
    ePATTERN_B,
    ePATTERN_C,
    ePATTERN_D,
    ePATTERN_E,
    ePATTERN_F,
    ePATTERN_G,
    ePATTERN_H,
    ePATTERN_I,
    ePATTERN_MAX UMETA(Hidden),
};

