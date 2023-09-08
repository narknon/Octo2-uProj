#pragma once
#include "CoreMinimal.h"
#include "EUIResCategory.generated.h"

UENUM(BlueprintType)
enum class EUIResCategory : uint8 {
    COMMON,
    IN_GAME,
    MAINMENU,
    EVENT,
    BATTLE,
    TUTORIAL,
    STAFF_ROLL,
    TEMPORARY,
    FIRST,
};

