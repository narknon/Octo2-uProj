#pragma once
#include "CoreMinimal.h"
#include "ESHOP_CATEGORY_TYPE.generated.h"

UENUM(BlueprintType)
enum class ESHOP_CATEGORY_TYPE : uint8 {
    eAll,
    eItem,
    eWeapon,
    eShield,
    eArmor,
    eHelmet,
    eAccessory,
    eMaterial,
    eInfoItem,
    eTreasure,
};

