#pragma once
#include "CoreMinimal.h"
#include "EDISEASE_TYPE_BITMASK.generated.h"

UENUM(BlueprintType)
enum class EDISEASE_TYPE_BITMASK : uint8 {
    ePOISON,
    eSILENCE,
    eBLIND,
    eCONFUSION,
    eSLEEP,
    eFEAR,
    eSTUN,
    eBREAKDOWN,
    eSTONE,
    eDOOM,
    eDISABLE_NORMAL_ATTACK,
    eDISABLE_PHYSICS_ABILITY,
    eDISABLE_MAGIC_ABILITY,
    eSPAWN_EFFECT_SIGN_OF_BOOST,
};

