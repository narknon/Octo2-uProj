#pragma once
#include "CoreMinimal.h"
#include "EMAPCHANGE_TYPE.generated.h"

UENUM(BlueprintType)
enum class EMAPCHANGE_TYPE : uint8 {
    eNONE,
    eVILLAGE,
    eTOWN,
    eCITY,
    eTOWN_CATHEDRAL,
    eFIELD,
    eDUNGEON_CAVE,
    eDUNGEON_WOODS,
    eDUNGEON_REMAINS,
    eDUNGEON_UNDERPASS,
    eDUNGEON_MANSION,
    eDUNGEON_JOB,
    eDUNGEON_LAST,
    eDUNGEON_SHIP,
    eDUNGEON_MOUNTAIN,
    eOCEAN,
};

