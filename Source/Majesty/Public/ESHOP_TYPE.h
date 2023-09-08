#pragma once
#include "CoreMinimal.h"
#include "ESHOP_TYPE.generated.h"

UENUM(BlueprintType)
enum class ESHOP_TYPE : uint8 {
    WEAPON,
    ITEM,
    GENERAL,
    INN,
    BAR,
    EX_BAR,
    LINER_SHIP,
    ANIMAL_ITEM,
    ANIMAL_INN,
};

