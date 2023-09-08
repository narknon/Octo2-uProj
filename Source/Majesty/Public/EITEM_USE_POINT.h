#pragma once
#include "CoreMinimal.h"
#include "EITEM_USE_POINT.generated.h"

UENUM(BlueprintType)
enum class EITEM_USE_POINT : uint8 {
    NONE,
    eMenuAndBattle,
    eMenu,
    eBattle,
};

