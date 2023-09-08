#pragma once
#include "CoreMinimal.h"
#include "ECreditFadeState.generated.h"

UENUM(BlueprintType)
enum class ECreditFadeState : uint8 {
    NONE,
    HIDDEN,
    WIPE_IN,
    SHOW,
    WIPE_OUT,
};

