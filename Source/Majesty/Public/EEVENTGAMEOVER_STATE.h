#pragma once
#include "CoreMinimal.h"
#include "EEVENTGAMEOVER_STATE.generated.h"

UENUM(BlueprintType)
enum class EEVENTGAMEOVER_STATE : uint8 {
    eINIT,
    eSTART_FADE,
    eWAIT,
    eFINISH_FADE,
};

