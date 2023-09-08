#pragma once
#include "CoreMinimal.h"
#include "ESTATUS_MENU_STATE.generated.h"

UENUM(BlueprintType)
enum class ESTATUS_MENU_STATE : uint8 {
    eNONE,
    eOPEN,
    eCLOSE,
    eSELECT_CHARA_STATUS_PART,
};

