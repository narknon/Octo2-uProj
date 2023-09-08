#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_REPLAY_CHARA_STATUS.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_REPLAY_CHARA_STATUS : uint8 {
    eREPLAY_ALIVE,
    eREPLAY_PINCH,
    eREPLAY_DECONDITION,
    eREPLAY_DEAD,
    eREPLAY_STONE,
    eREPLAY_STONE_DEAD,
    eREPLAY_EXCEPT_FIELD,
    eREPLAY_GUARD,
    eREPLAY_MAX UMETA(Hidden),
};

