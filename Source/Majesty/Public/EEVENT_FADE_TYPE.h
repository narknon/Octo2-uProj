#pragma once
#include "CoreMinimal.h"
#include "EEVENT_FADE_TYPE.generated.h"

UENUM(BlueprintType)
enum class EEVENT_FADE_TYPE : uint8 {
    SHORT,
    MIDDLE,
    LONG,
};

