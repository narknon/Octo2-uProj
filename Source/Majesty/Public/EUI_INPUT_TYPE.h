#pragma once
#include "CoreMinimal.h"
#include "EUI_INPUT_TYPE.generated.h"

UENUM(BlueprintType)
enum class EUI_INPUT_TYPE : uint8 {
    eDECIDE,
    eCANCEL,
    eCURSOR_UP,
    eCURSOR_DOWN,
    eCURSOR_RIGHT,
    eCURSOR_LEFT,
    eBUTTON_X,
    eBUTTON_Y,
    ePLUS_BUTTON,
    eMINUS_BUTTON,
    eLB,
    eRB,
    eL_STICK_BUTTON,
    eR_STICK_BUTTON,
};

