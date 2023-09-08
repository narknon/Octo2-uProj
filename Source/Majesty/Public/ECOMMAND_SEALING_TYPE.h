#pragma once
#include "CoreMinimal.h"
#include "ECOMMAND_SEALING_TYPE.generated.h"

UENUM(BlueprintType)
enum class ECOMMAND_SEALING_TYPE : uint8 {
    eMYTH_BATTLE_EX_ONLY,
    eTAME_MONSTER_ONLY,
    eLEGEND_AKUTA_ONLY,
    ePOTENTIALITY_ACTION_ONLY,
    eDAMAGE_ACTION_SEAL,
    eRECOVERY_ACTION_SEAL,
    eNORMAL_ATTACK_SEAL,
    eBASE_JOB_SEAL,
    eBACKPACK_SEAL,
    eREVIVE_ACTION_SEAL,
    eMAGIC_GAG_SEAL,
    eMAGIC_SILENCE_SEAL,
    ePHYSICS_ATTACK_SEAL,
    eMAGIC_ATTACK_SEAL,
    eMONSTER_MENU_DISABLE,
    eSEALING_TYPE_MAX UMETA(Hidden),
};

