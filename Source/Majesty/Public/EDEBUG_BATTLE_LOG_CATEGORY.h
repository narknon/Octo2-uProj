#pragma once
#include "CoreMinimal.h"
#include "EDEBUG_BATTLE_LOG_CATEGORY.generated.h"

UENUM(BlueprintType)
enum class EDEBUG_BATTLE_LOG_CATEGORY : uint8 {
    eNONE,
    eBATTLE_FLOW,
    eCHARACTER,
    eSEQUENCER,
    eBATTLE_AI,
    eACTION_ORDER,
    eEFFECT,
    eBATTLE_CALC,
    eACTION_COMMAND,
    eCATEGORY_MAX UMETA(Hidden),
};

