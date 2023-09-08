#pragma once
#include "CoreMinimal.h"
#include "EEncountTableType.generated.h"

UENUM(BlueprintType)
enum class EEncountTableType : uint8 {
    eET_VOLUME,
    eET_TRIGGER,
    eET_MAX UMETA(Hidden),
};

