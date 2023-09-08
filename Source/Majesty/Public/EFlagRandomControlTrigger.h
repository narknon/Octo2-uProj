#pragma once
#include "CoreMinimal.h"
#include "EFlagRandomControlTrigger.generated.h"

UENUM(BlueprintType)
enum class EFlagRandomControlTrigger : uint8 {
    eLevelChange,
    eTimeZoneChange,
};

