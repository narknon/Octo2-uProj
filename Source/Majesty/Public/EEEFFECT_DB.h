#pragma once
#include "CoreMinimal.h"
#include "EEEFFECT_DB.generated.h"

UENUM(BlueprintType)
enum class EEEFFECT_DB : uint8 {
    SCHOLAR_MAGIC_SARCH,
    MERCHANT_AVOIDANCE,
    MERCHANT_AVOIDANCE_M,
    MERCHANT_AVOIDANCE_L,
    LOCUS_AXE_ENFORCER,
    LOCUS_AXE_REACTION,
    LOCUS_AXE_ACTION,
    LOCUS_BOW_REACTION,
    LOCUS_BOW_ACTION,
    LOCUS_BOW_ENFORCER,
    LOCUS_SPEAR_ENFORCER,
    LOCUS_SPEAR_REACTION,
    LOCUS_SPEAR_ACTION,
    LOCUS_STAFF_ENFORCER,
    LOCUS_STAFF_REACTION,
    LOCUS_STAFF_ACTION,
    LOCUS_DAGGER_ENFORCER,
    LOCUS_DAGGER_REACTION,
    LOCUS_DAGGER_ACTION,
    LOCUS_SWORD_ENFORCER,
    LOCUS_SWORD_REACTION,
    LOCUS_SWORD_ACTION,
    ABILITY_START,
    GUARD_EFFECT,
    REFLEC_EFFECT,
    COUNTER_EFFECT,
    PARAMETERDOWN_ATTACK2,
    HP_RECOVERY,
    MP_RECOVERY,
    STATUS_CONFUSE,
    STATUS_DARKNESS,
    STATUS_FEAR,
    STATUS_POISON,
    STATUS_SLEEP,
    STATUS_BREAK,
    STATUS_SILENCE,
    STATUS_RED,
    STATUS_BLUE,
    STATUS_PURPLE,
    STATUS_BLACK,
    STATUS_POISON2,
    STATUS_MOUJA_BLUE,
    STATUS_MOUJA_GREEN,
    STATUS_MOUJA_RED,
    EMOTION_SURPRISE_LOOP,
    EMOTION_JOY_LOOP = 0x4C,
    EMOTION_SWEAT_LOOP,
    EMOTION_SLEEP_LOOP,
    EMOTION_SILENCE_LOOP,
    EMOTION_CHEER_LOOP,
    EMOTION_FAINT_LOOP,
    EMOTION_SAVE_LOOP,
    EMOTION_MAINMISSION_LOOP,
    EMOTION_SUBMISSION_LOOP_,
    HIT_BREAKDOWN = 0x2D,
    HIT_ENEMY_NORMAL,
    HIT_ENEMY_WEAKNESS,
    HIT_ENEMY_CRITICAL,
    HIT_ENEMY_BREAK,
    HIT_PC_NORMAL,
    HIT_PC_WEAKNESS,
    HIT_PC_CRITICAL,
    SECRET_POINT,
    ENEMY_DEAD_01,
    ENEMY_DEAD_02,
    ENEMY_DEAD_03,
    ENEMY_DEAD_04,
    ENEMY_DEAD_05,
    ENEMY_OVERHEAT,
    ANGEL_EFFECT,
    BOSS_POWERUP,
    BOSS_POWERUP2,
    BOSS_POWERUP3,
    LOCUS_DAGGER_ACTIONFIRE,
    LOCUS_DAGGER_ACTIONICE,
    LOCUS_DAGGER_ACTIONDARK,
    GUR_BOOST_STORM_LV1,
    GUR_BOOST_STORM_LV2,
    GUR_BOOST_STORM_LV3,
    FxPS_Env_CanoeWater_A,
    FxPS_Env_CanoeWater_B,
    FxPS_Env_CanoeWater_C,
    FxPS_Env_ShipWater_A,
    FxPS_Env_ShipWater_B,
    FxPS_Env_ShipWater_C,
};

