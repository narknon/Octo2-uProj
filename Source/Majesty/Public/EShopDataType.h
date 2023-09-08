#pragma once
#include "CoreMinimal.h"
#include "EShopDataType.generated.h"

UENUM(BlueprintType)
enum class EShopDataType : uint8 {
    eSD_SHOP_LIST,
    eSD_SHOP_INFO,
    eSD_PURCHASE_ITEM,
    eSD_MAX UMETA(Hidden),
};

