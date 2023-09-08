#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_EFFECT_ATTACH_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_EFFECT_ATTACH_TYPE : uint8 {
    eATTACH_NONE,
    eATTACH_ENFORCER,
    eATTACH_TARGET,
    eATTACH_OWNAREA,
    eATTACH_OTHERAREA,
    eATTACH_PARTYALL,
    eATTACH_ENEMYALL,
    eATTACH_OWNER,
    eATTACH_MAX UMETA(Hidden),
};

