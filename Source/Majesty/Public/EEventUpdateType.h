#pragma once
#include "CoreMinimal.h"
#include "EEventUpdateType.generated.h"

UENUM(BlueprintType)
enum class EEventUpdateType : uint8 {
    EVENT,
    SKIP_FADEOUT,
    SKIP,
    SKIP_FADEIN,
    START_FADEOUT,
};

