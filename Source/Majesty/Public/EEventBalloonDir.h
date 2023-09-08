#pragma once
#include "CoreMinimal.h"
#include "EEventBalloonDir.generated.h"

UENUM(BlueprintType)
enum class EEventBalloonDir : uint8 {
    DEFAULT,
    UP,
    DOWN,
    LEFT,
    RIGHT,
    LEFTUP,
    LEFTDOWN,
    RIGHTUP,
    RIGHTDOWN,
    UP_CENTER,
};

