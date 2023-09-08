#pragma once
#include "CoreMinimal.h"
#include "EABILITY_TYPE.generated.h"

UENUM(BlueprintType)
enum class EABILITY_TYPE : uint8 {
    ePHYSICS,
    eMAGIC,
    eHP_RECOVERY,
    eMP_RECOVERY,
    eREVIVE,
    eTAME_MONSTER,
    eBUFF,
    eDEBUFF,
    eOTHER,
    eREVIVE_RECOVERY,
    eSTEAL_ITEM,
    eSTEAL_MONEY,
    eBRIBE,
    eSUMMON,
    eSCATTER,
    eSEAL_ACTION,
};

