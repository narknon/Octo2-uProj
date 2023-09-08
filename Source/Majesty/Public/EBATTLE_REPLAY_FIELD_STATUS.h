#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_REPLAY_FIELD_STATUS.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_REPLAY_FIELD_STATUS : uint8 {
    eREPLAY_FIELD_NONE,
    eREPLAY_FATAL_POISON,
    eREPLAY_HPMAX_POISON,
    eREPLAY_DISABLE_MAGIC_MENU,
    eREPLAY_EVASION_UP,
    eREPLAY_MAGIC_UP,
    eREPLAY_MAX UMETA(Hidden),
};

