#pragma once
#include "CoreMinimal.h"
#include "EMUSIC_PLAYER_WIDGET_STATE.generated.h"

UENUM(BlueprintType)
enum class EMUSIC_PLAYER_WIDGET_STATE : uint8 {
    eNone,
    eOpening,
    eOpend,
    ePlaying,
    eStopped,
    eClosing,
    eClosed,
};

