#pragma once
#include "CoreMinimal.h"
#include "EDBNoticeType.generated.h"

UENUM(BlueprintType)
enum class EDBNoticeType : uint8 {
    LOADED,
    UNLOADED,
};

