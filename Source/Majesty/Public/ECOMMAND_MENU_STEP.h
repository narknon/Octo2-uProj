#pragma once
#include "CoreMinimal.h"
#include "ECOMMAND_MENU_STEP.generated.h"

UENUM(BlueprintType)
enum class ECOMMAND_MENU_STEP : uint8 {
    eMAIN_MENU,
    eSUB_MENU,
    eTHIRD_MENU,
    eTARGET_SELECT,
    eTAME_MONSTER_CONFIRM,
};

