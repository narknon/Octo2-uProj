#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_RESULT.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_RESULT : uint8 {
    NONE,
    VICTORY,
    DEFEAT,
    ESCAPE,
};

