#pragma once
#include "CoreMinimal.h"
#include "EMAINMENU_SEQ_JOB.generated.h"

UENUM(BlueprintType)
enum class EMAINMENU_SEQ_JOB : uint8 {
    eNONE,
    eOPEN,
    eSELECT_CHARACTER,
    eMAIN_JOB,
    eMAIN_JOB_ABILITY,
    eSUB_JOB,
    eSUB_JOB_SELECT_MOVE,
    eSUB_JOB_CHANGE_CONFIRM,
    eSUB_JOB_REMOVE_SELECTED_CHARA,
    eSUB_JOB_ABILITY,
    eSET_SUPPORT_ABILITY,
    eSELECT_SUPPORT_ABILITY,
    eJOB_ABILITY_CONFIRM,
    eJOB_ABILITY_SUPPORT,
    eBACK_TO_JOB_CHANGE_CONFIRM,
    eCLOSE,
    eWAIT,
};

