#pragma once
#include "CoreMinimal.h"
#include "EGameModeDebugPage.generated.h"

UENUM(BlueprintType)
enum class EGameModeDebugPage : uint8 {
    GAME,
    EVENT,
    CAMERA,
    INDOOR,
    STORY,
    REMINISCENCE,
    UI,
    GUILD,
    LOCALIZALTION,
    NPC,
    CHARA,
    SOUND,
    SOUND_SUB,
    KEY_CONFIG,
    TARGET_ACTOR,
    MPC,
    TIMEZONE,
    OPTION,
    BATTLE_ACTION_ORDER,
    UIRESOURCE,
    ENCOUNT,
    BATTLE_WIPE,
    BALLOON,
    BATTTLE_MEMORY,
    PLATFORM,
    SYSTEM,
    MAX_NUM,
};

