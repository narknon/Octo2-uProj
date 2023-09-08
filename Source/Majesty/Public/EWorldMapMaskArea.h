#pragma once
#include "CoreMinimal.h"
#include "EWorldMapMaskArea.generated.h"

UENUM(BlueprintType)
enum class EWorldMapMaskArea : uint8 {
    eNONE,
    eSNOW_INNER,
    eSNOW_MIDDLE,
    eSNOW_OUTER,
    eCITY_INNER,
    eCITY_MIDDLE_1,
    eCITY_MIDDLE_2,
    eCITY_OUTER,
    eSEA_INNER,
    eSEA_MIDDLE,
    eSEA_OUTER,
    eMOUNTAIN_INNER,
    eMOUNTAIN_MIDDLE,
    eMOUNTAIN_OUTER,
    eDESERT_INNER,
    eDESERT_MIDDLE,
    eDESERT_OUTER,
    eISLAND_INNER,
    eISLAND_MIDDLE,
    eISLAND_OUTER_1,
    eISLAND_OUTER_2,
    eWILDERNESS_INNER,
    eWILDERNESS_MIDDLE,
    eWILDERNESS_OUTER,
    eFOREST_INNER,
    eFOREST_MIDDLE,
    eFOREST_OUTER_1,
    eFOREST_OUTER_2,
};

