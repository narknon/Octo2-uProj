#pragma once
#include "CoreMinimal.h"
#include "EDiseaseListState.generated.h"

UENUM(BlueprintType)
enum class EDiseaseListState : uint8 {
    eNone,
    eInOpening,
    eInDisplaying,
    eInClosing,
};

