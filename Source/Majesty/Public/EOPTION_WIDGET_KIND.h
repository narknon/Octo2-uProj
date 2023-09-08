#pragma once
#include "CoreMinimal.h"
#include "EOPTION_WIDGET_KIND.generated.h"

UENUM(BlueprintType)
enum class EOPTION_WIDGET_KIND : uint8 {
    eToggleButton,
    eSlider,
    eButton,
    eSliderAndThumbnail,
    eItemSelect,
    eItemSelectAndItemName,
    eItemSelectFromResolution,
    eItemSelectFromLangage,
    eConfig,
};

