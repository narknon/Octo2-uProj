#pragma once
#include "CoreMinimal.h"
#include "ELIST_ITEM_STATUS.generated.h"

UENUM(BlueprintType)
enum class ELIST_ITEM_STATUS : uint8 {
    eENABLE,
    eDISABLE,
    eNOT_FOR_SALE,
};

