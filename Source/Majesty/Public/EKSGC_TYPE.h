#pragma once
#include "CoreMinimal.h"
#include "EKSGC_TYPE.generated.h"

UENUM(BlueprintType)
enum class EKSGC_TYPE : uint8 {
    eNONE,
    eTITLE,
    eFIELD,
    eFC,
    eMENU,
    eEVENT,
    eBATTLE,
    eGAME_OVER,
    eEND_ROLL,
    eMAX,
};

