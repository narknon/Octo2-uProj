#pragma once
#include "CoreMinimal.h"
#include "EWIDGET_CREATE_PHASE.generated.h"

UENUM(BlueprintType)
enum class EWIDGET_CREATE_PHASE : uint8 {
    NONE,
    FIRST,
    IN_GAME,
    TEMPORARY,
    DEPRECATED,
};

