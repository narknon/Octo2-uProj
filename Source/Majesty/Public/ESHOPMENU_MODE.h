#pragma once
#include "CoreMinimal.h"
#include "ESHOPMENU_MODE.generated.h"

UENUM(BlueprintType)
enum class ESHOPMENU_MODE : uint8 {
    eBUY,
    eSELL,
    eINN,
    eEQUIP,
    eCHANGE_MEMBER,
    eSTORY,
    eRELATIONSHIP,
    eEXIT,
    eEXIT_INN,
    eEXIT_BAR,
    eLINER_SHIP,
    eANIMAL_BUY,
    eRECEIVE_PRE_ORDER_GIFT,
    eRECIEVE_DLC_GIFT,
};

