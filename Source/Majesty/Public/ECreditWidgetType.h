#pragma once
#include "CoreMinimal.h"
#include "ECreditWidgetType.generated.h"

UENUM(BlueprintType)
enum class ECreditWidgetType : uint8 {
    NONE,
    TEXT_SCROLL,
    IMAGE_SCROLL,
    IMAGE_DISOLVE,
    SPACE,
};

