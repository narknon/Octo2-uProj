#pragma once
#include "CoreMinimal.h"
#include "EKSSaveDataFlagType.generated.h"

UENUM(BlueprintType)
enum class EKSSaveDataFlagType : uint8 {
    CREATED_SYS_DATA,
    VOICE_LANGUAGE,
    SAVE_BATTLE_CURSOR,
    VIBRATION,
    CORNER_DARKNESS,
    CLEARED_FINAL_CHAPTER,
    CLEARED_SECRET_BOSS,
    END_TRIAL_PLAY,
    VSYNC,
    MOVE_MOUSE,
    ENCOUNT_CAMERA_PERFFORM,
    BOOST_ATTACK_CAMERA_PERFORM,
    SAVE_FC_CURSOR,
    MAX,
};

