#pragma once
#include "CoreMinimal.h"
#include "ECHARACTER_GRID_PANEL_WIDGET_STATE.generated.h"

UENUM(BlueprintType)
enum class ECHARACTER_GRID_PANEL_WIDGET_STATE : uint8 {
    eNone,
    eOpening,
    eRunning,
    eClosing,
};

