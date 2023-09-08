#pragma once
#include "CoreMinimal.h"
#include "EDebugCanvasPrimType.generated.h"

UENUM(BlueprintType)
enum class EDebugCanvasPrimType : uint8 {
    Line,
    Triangle,
    Box,
};

