#pragma once
#include "CoreMinimal.h"
#include "EEventPlayBGM.generated.h"

UENUM(BlueprintType)
enum class EEventPlayBGM : uint8 {
    PLAY_MAP,
    NOT_PLAY,
    STOP,
    PLAY_BGM,
};

