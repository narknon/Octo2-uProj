#pragma once
#include "CoreMinimal.h"
#include "EENEMY_DEAD_TYPE.generated.h"

UENUM(BlueprintType)
enum class EENEMY_DEAD_TYPE : uint8 {
    eNORMAL_S,
    eNORMAL_M,
    eNORMAL_L,
    eBOSS_M,
    eBOSS_L,
    eRETURN,
    eNO_KNOCKBACK_M,
    eDESTRUCTION,
    eGALDERA_VANISH,
};

