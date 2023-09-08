#pragma once
#include "CoreMinimal.h"
#include "EITEM_SPECIAL_EFFECT.generated.h"

UENUM(BlueprintType)
enum class EITEM_SPECIAL_EFFECT : uint8 {
    NONE,
    eUnrecoverable,
    eHpAndMpAll,
    ePoisonSolve,
    eDarknessSolve,
    eSilenceSolve,
    eSleepSolve,
    eConfusionSolve,
    eBerserkerSolve,
    eCurseSolve,
    eStateAbnormalSolve,
    eDanshonEscape,
    eLibrary,
    eReflect,
    eAsupiru,
    eBerserk,
    eReraise,
    eMirrorTreasureKey,
};

