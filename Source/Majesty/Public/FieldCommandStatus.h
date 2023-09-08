#pragma once
#include "CoreMinimal.h"
#include "FieldCommandStatus.generated.h"

UENUM(BlueprintType)
enum class FieldCommandStatus : uint8 {
    eNone,
    eSuccess,
    eCancel,
    eFailed,
    eSuccess_Release,
    eAlreadyCompleted,
};

