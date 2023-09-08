#pragma once
#include "CoreMinimal.h"
#include "ECHANGE_TIME_DILATION.generated.h"

UENUM(BlueprintType)
enum class ECHANGE_TIME_DILATION : uint8 {
    eNONE,
    eGAME_DEFAULT_SPEED,
    eEVENT_NORMAL_SPEED,
    eEVENT_HIGH_SPEED,
    eBATTLE_BREAK_CAMERA,
    eBATTLE_FINISH_BLOW,
    eBATTLE_ENEMY_DEAD,
};

