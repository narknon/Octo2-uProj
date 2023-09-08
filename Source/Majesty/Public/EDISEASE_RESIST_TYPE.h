#pragma once
#include "CoreMinimal.h"
#include "EDISEASE_RESIST_TYPE.generated.h"

UENUM(BlueprintType)
enum class EDISEASE_RESIST_TYPE : uint8 {
    ePOISON,
    eSILENCE,
    eBLIND,
    eCONFUSION,
    eSLEEP,
    eFEAR,
    eSTUN,
    eINSTANT_DEATH,
    eTRANSFORM,
    eDEBUFF,
};

