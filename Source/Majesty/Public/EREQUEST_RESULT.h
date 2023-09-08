#pragma once
#include "CoreMinimal.h"
#include "EREQUEST_RESULT.generated.h"

UENUM(BlueprintType)
enum class EREQUEST_RESULT : uint8 {
    eFAILED,
    eSUCCESS,
};

