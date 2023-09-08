#pragma once
#include "CoreMinimal.h"
#include "ESPACT_MER_TRIGGER_TYPE.generated.h"

UENUM(BlueprintType)
enum class ESPACT_MER_TRIGGER_TYPE : uint8 {
    SHOP_BUY,
    SHOP_SELL,
    FC_PURCHASE,
    INN,
    LINER_SHIP,
    BTL_MERCENARY,
    BTL_BRIBE,
    BTL_DRAIN_MONEY,
};

