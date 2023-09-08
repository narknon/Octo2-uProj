#pragma once
#include "CoreMinimal.h"
#include "EAILMENT_REMOVE_DISEASE_TYPE.generated.h"

UENUM(BlueprintType)
enum class EAILMENT_REMOVE_DISEASE_TYPE : uint8 {
    eALL,
    eDECONDITION_ALL,
    eBUFF_ALL,
    eDEBUFF_ALL,
    eSPECIFIED,
    eSTONE,
    eCOVER,
    eGROGGY,
    eDECONDITION_OLDEST,
    eBUFF_OLDEST,
    eDEBUFF_OLDEST,
    eDECONDITION_RANDOM,
    eBUFF_RANDOM,
    eDEBUFF_RANDOM,
};

