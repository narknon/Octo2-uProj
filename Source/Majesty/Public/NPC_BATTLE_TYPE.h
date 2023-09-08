#pragma once
#include "CoreMinimal.h"
#include "NPC_BATTLE_TYPE.generated.h"

UENUM(BlueprintType)
enum class NPC_BATTLE_TYPE : uint8 {
    BATTLE,
    MONSTER,
    ASSASSINATE,
    DOSE,
};

