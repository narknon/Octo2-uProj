#pragma once
#include "CoreMinimal.h"
#include "EABILITY_ICON_TYPE.generated.h"

UENUM(BlueprintType)
enum class EABILITY_ICON_TYPE : uint8 {
    eNONE,
    ePHYSICS,
    eMAGIC,
    eHEAL,
    eBUFF,
    eDEBUFF,
};

