#pragma once
#include "CoreMinimal.h"
#include "SKILL_INVOKE.generated.h"

UENUM(BlueprintType)
enum class SKILL_INVOKE : uint8 {
    eNONE,
    ePASSIVE,
    eBATTLE,
    eFIELD,
};

