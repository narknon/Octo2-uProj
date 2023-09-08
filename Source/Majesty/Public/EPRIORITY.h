#pragma once
#include "CoreMinimal.h"
#include "EPRIORITY.generated.h"

UENUM(BlueprintType)
enum class EPRIORITY : uint8 {
    eNONE,
    eLOW,
    eMIDDLE,
    eHIGH,
};

