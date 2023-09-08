#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_TARGET_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_TARGET_TYPE : uint8 {
    eSELF,
    ePARTY_SINGLE,
    ePARTY_ALL,
    eENEMY_SINGLE,
    eENEMY_ALL,
    eALL,
    eALL_SINGLE,
};

