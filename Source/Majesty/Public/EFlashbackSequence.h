#pragma once
#include "CoreMinimal.h"
#include "EFlashbackSequence.generated.h"

UENUM(BlueprintType)
enum class EFlashbackSequence : uint8 {
    INIT,
    START,
    FINISH,
};

