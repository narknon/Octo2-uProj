#pragma once
#include "CoreMinimal.h"
#include "ESUB_STORY_STATE.generated.h"

UENUM(BlueprintType)
enum class ESUB_STORY_STATE : uint8 {
    NO_PLAY,
    PLAYING,
    COMPLETE,
};

