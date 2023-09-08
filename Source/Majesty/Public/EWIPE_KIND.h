#pragma once
#include "CoreMinimal.h"
#include "EWIPE_KIND.generated.h"

UENUM(BlueprintType)
enum class EWIPE_KIND : uint8 {
    BATTLE_START_WIPE,
    BATTLE_END_WIPE,
    BATTLE_MAX UMETA(Hidden),
};

