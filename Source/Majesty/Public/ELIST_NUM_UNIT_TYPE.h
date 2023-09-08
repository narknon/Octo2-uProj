#pragma once
#include "CoreMinimal.h"
#include "ELIST_NUM_UNIT_TYPE.generated.h"

UENUM(BlueprintType)
enum class ELIST_NUM_UNIT_TYPE : uint8 {
    ePRICE,
    ePERCENT,
    eLEVEL,
    eNONE,
    eRANK,
};

