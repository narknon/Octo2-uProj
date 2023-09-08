#pragma once
#include "CoreMinimal.h"
#include "EENDROLL_PARTY_DISEASE_BITMASK.generated.h"

UENUM(BlueprintType)
enum class EENDROLL_PARTY_DISEASE_BITMASK : uint8 {
    eNONE,
    ePOISON,
    eSILENCE,
    eBLIND,
    eCONFUSION,
    eSLEEP,
    eFEAR,
    eSTUN,
    eNEEDLE,
    eSHIELD_LV0,
    eSHIELD_LV1,
    eSHIELD_LV2,
    eSHIELD_LV3,
    eREBOUND_SEAL,
    eDARK_FLAME,
    eFROZEN,
    eDEADLY_SENSE,
    eCHARM,
    eSLEEP_DOOM,
};

