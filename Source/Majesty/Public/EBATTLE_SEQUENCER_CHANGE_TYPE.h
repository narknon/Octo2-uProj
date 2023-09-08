#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_SEQUENCER_CHANGE_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_SEQUENCER_CHANGE_TYPE : uint8 {
    START,
    END,
    LOOP,
    SHUTDOWN,
};

