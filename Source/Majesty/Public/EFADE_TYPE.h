#pragma once
#include "CoreMinimal.h"
#include "EFADE_TYPE.generated.h"

UENUM(BlueprintType)
enum class EFADE_TYPE : uint8 {
    NONE,
    FADE_IN,
    FADE_OUT,
};

