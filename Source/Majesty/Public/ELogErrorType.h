#pragma once
#include "CoreMinimal.h"
#include "ELogErrorType.generated.h"

UENUM(BlueprintType)
enum class ELogErrorType : uint8 {
    Display,
    Warning,
    Error,
};

