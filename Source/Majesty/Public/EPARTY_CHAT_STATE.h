#pragma once
#include "CoreMinimal.h"
#include "EPARTY_CHAT_STATE.generated.h"

UENUM(BlueprintType)
enum class EPARTY_CHAT_STATE : uint8 {
    UNRELEASE,
    RELEASED,
    PLAYED,
};

