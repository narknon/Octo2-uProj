#pragma once
#include "CoreMinimal.h"
#include "NPC_ITEM_OBTAIN_TYPE.generated.h"

UENUM(BlueprintType)
enum class NPC_ITEM_OBTAIN_TYPE : uint8 {
    PURCHASE,
    STEAL,
    BEG,
    ROB,
};

