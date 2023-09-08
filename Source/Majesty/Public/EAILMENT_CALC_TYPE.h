#pragma once
#include "CoreMinimal.h"
#include "EAILMENT_CALC_TYPE.generated.h"

UENUM(BlueprintType)
enum class EAILMENT_CALC_TYPE : uint8 {
    ePHYSICS,
    eMAGIC,
    eRATIO,
    eRATIO_CURRENT,
    eFIX,
    eITEM,
    eDRAIN,
};

