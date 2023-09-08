#pragma once
#include "CoreMinimal.h"
#include "ETRANSPORT_EFFECT.generated.h"

UENUM(BlueprintType)
enum class ETRANSPORT_EFFECT : uint8 {
    WALK,
    DASH,
    EX_DASH,
    STOP,
};

