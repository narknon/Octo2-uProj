#pragma once
#include "CoreMinimal.h"
#include "EWorldMapZoomType.generated.h"

UENUM(BlueprintType)
enum class EWorldMapZoomType : uint8 {
    ZOOM_NEAR,
    ZOOM_MIDDLE,
    ZOOM_FAR,
    ZOOM_PLAYERSELECT,
    ZOOM_MAX UMETA(Hidden),
};

