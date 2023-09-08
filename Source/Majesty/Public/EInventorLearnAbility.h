#pragma once
#include "CoreMinimal.h"
#include "EInventorLearnAbility.generated.h"

UENUM(BlueprintType)
enum class EInventorLearnAbility : uint8 {
    NONE,
    LEARN_ABILITY,
    LEARN_ABILITY_DIALOG,
    LEARN_SUPPORT_ABILITY,
    LEARN_SUPPORT_ABILITY_DIALOG,
    SUPPORT_ABILITY_TUTORIAL_END,
    MAX,
};

