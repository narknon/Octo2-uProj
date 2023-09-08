#pragma once
#include "CoreMinimal.h"
#include "ELevelTransitionType.generated.h"

UENUM(BlueprintType)
enum class ELevelTransitionType : uint8 {
    WAIT,
    CHANGE_FIELD,
    SAME_FIELD,
    FIELD_TO_BATTLE,
    BATTLE_TO_FIELD,
};

