#pragma once
#include "CoreMinimal.h"
#include "EITEM_ATTRIBUTE.generated.h"

UENUM(BlueprintType)
enum class EITEM_ATTRIBUTE : uint8 {
    NONE,
    eHp,
    eHpAndRevival,
    eMp,
    eHpAndMp,
    eSpecial,
    eFire,
    eWater,
    eThunder,
    eWind,
    eSoil,
    eNothing,
    eStop,
    eSlow,
    eCatch,
    eHpUp,
    eMpUp,
    ePowerUp,
    ePhysicalUp,
    eBrainUp,
    eSpiritUp,
    eDexterityUp,
    eAgilityUp,
    eStatusRecover,
    eDamage,
};

