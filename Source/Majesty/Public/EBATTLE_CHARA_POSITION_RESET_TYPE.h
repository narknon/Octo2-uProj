#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_CHARA_POSITION_RESET_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_CHARA_POSITION_RESET_TYPE : uint8 {
    eRESET_NONE,
    eRESET_BASE,
    eRESET_CURRENT,
    eRESET_ORIGIN,
    eRESET_MAX UMETA(Hidden),
};

