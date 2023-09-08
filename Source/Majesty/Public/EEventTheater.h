#pragma once
#include "CoreMinimal.h"
#include "EEventTheater.generated.h"

UENUM(BlueprintType)
enum class EEventTheater : uint8 {
    NONE,
    UPDATE,
    RESTORE,
    FINISH_PRE,
    FINISH,
};

