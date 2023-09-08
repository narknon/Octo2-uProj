#pragma once
#include "CoreMinimal.h"
#include "EActivityTaskStatus.generated.h"

UENUM(BlueprintType)
enum class EActivityTaskStatus : uint8 {
    INIT,
    START,
    COMPLETED,
};

