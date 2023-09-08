#pragma once
#include "CoreMinimal.h"
#include "ETRAKING_RELEASED_TYPE.generated.h"

UENUM(BlueprintType)
enum class ETRAKING_RELEASED_TYPE : uint8 {
    eTOWN_OUTSIDE,
    eCHANGE_TIMEZOON,
    eFLAG_ON,
    eFLAG_OFF,
    eBATTLE_DEAD,
};

