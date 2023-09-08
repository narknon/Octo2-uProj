#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_ACTION_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_ACTION_TYPE : uint8 {
    IDLE,
    BOOST_IDLE,
    STEP_IN,
    STEP_OUT,
    ATTACK_SWORD,
    ATTACK_LANCE,
    ATTACK_DAGGER,
    ATTACK_AXE,
    ATTACK_BOW,
    ATTACK_ROD,
    USE_ITEM,
    GUARD,
    BOOST_START,
    BOOST_LEVEL_UP,
    BOOST_CANCEL,
    KNOCKBACK,
    BATTLE_START,
    ESCAPE,
    VICTORY,
    LEVELUP,
    PINCH,
    DEAD,
    CHANGE_SWORD,
    CHANGE_LANCE,
    CHANGE_DAGGER,
    CHANGE_AXE,
    CHANGE_BOW,
    CHANGE_ROD,
    DRAG_IN_IDLE,
};

