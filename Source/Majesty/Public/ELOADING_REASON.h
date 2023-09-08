#pragma once
#include "CoreMinimal.h"
#include "ELOADING_REASON.generated.h"

UENUM(BlueprintType)
enum class ELOADING_REASON : uint8 {
    SINGLE,
    FADE,
};

