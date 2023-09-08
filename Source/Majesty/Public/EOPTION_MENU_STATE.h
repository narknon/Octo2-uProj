#pragma once
#include "CoreMinimal.h"
#include "EOPTION_MENU_STATE.generated.h"

UENUM(BlueprintType)
enum class EOPTION_MENU_STATE : uint8 {
    eNONE,
    eOPEN,
    eCLOSE,
    eSETTING,
    eSAVING,
    eCATEGORY_SELECT,
    eKEY_CONFIG,
    eAPPLY_SKIP_DIALOG,
    eAPPLY_DIALOG,
    eAPPLY_FINISH_DIALOG,
    eWAIT,
};

