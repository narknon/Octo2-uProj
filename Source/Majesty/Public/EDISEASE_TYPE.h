#pragma once
#include "CoreMinimal.h"
#include "EDISEASE_TYPE.generated.h"

UENUM(BlueprintType)
enum class EDISEASE_TYPE : uint8 {
    ePOISON,
    eSILENCE,
    eBLIND,
    eCONFUSION,
    eSLEEP,
    eFEAR,
    eSTUN,
    eINSTANT_DEATH,
    ePROVOKE,
    eMAGIC_REFLECTION,
    eCOUNTER,
    eHIDE_OUT,
    eINVISIBLE,
    eSHUTDOWN,
    eBREAKDOWN,
    eBE_THE_FIRST,
    eANALYZE,
    eGUARD,
    eCOVER,
    eENCHANT_ATTRIBUTE,
    eATK_UP,
    eATK_DOWN,
    eMATK_UP,
    eMATK_DOWN,
    eDEF_UP,
    eDEF_DOWN,
    eMDEF_UP,
    eMDEF_DOWN,
    eACC_UP,
    eACC_DOWN,
    eEVA_UP,
    eEVA_DOWN,
    eCON_UP,
    eCON_DOWN,
    eAGI_UP,
    eAGI_DOWN,
    eHP_REGENERATION,
    eMP_REGENERATION,
    eBP_REGENERATION,
    eRERAISE,
    eITEM_ALL,
    eSKILL_ALL,
    eCONVERGENCE,
    eDIFFUSION,
    eHP_LIMIT_OVER,
    eMP_LIMIT_OVER,
    eACTION_COPY,
    eMAGIC_REPEAT,
    eDEBUFF_GUARD,
    eDECONDITION_GUARD,
    ePERMANENT_CRITICAL,
    eBLOW_AWAY,
    eMAGIC_CRITICAL,
    eSTONE,
    eDOOM,
    eSEAL_NORMAL_ATTACK,
    eSEAL_PHYSICS_ABILITY,
    eSEAL_MAGIC_ABILITY,
    ePROBABILITY_INVISIBLE,
    eDISABLE_BUFF,
    eDRAG_IN,
    eSLOW,
    eSPAWN_EFFECT_SIGN_OF_BOOST,
    eESCAPE_FAILED,
    eEX_DISABLE_MAGIC_ABILITY,
    eCURSE_OF_DEAD,
    eEX_ROTTEN,
    eORDER_COUNT_UP,
    eORDER_COUNT_DOWN,
    eAUTO_GUARD,
    eNORMAL_ATTACK_ALL,
    eATTACK_HIT_FAILED,
    eMASQUERADE,
    eWEAKNESS_POISON,
    eSUPER_MAGIC,
    eHYPER_MAGIC,
    eHOLD_OUT,
    eDAMAGE_CUT,
    eGROGGY,
    eSEAL_ACTION,
    eREBOUND_SEAL_ACTION,
    eSP_GUARD,
    eCHARGE_ACTION,
    eSTEALTH,
    eDARK_FLAME,
    eFROZEN,
    eDRAG_IN_DRAIN,
    eROTTEN_SHIELD,
    eREFLECTION_SHIELD,
    eDISEASE_GUARD_SHIELD,
    eFEAR_WHIP,
    eDEADLY_SENSE,
    eBE_THE_FIRST_FOR_BATTLE_START,
    eSLOW_IN_GROUP,
    eFORCE_CRITICAL,
    eLAST_ACT,
    eSEAL_ATTACK_ABILITY,
    eSEAL_RECOVERY_ABILITY,
    ePOINTING_WEAPON,
    eRANDOM_POINTING_WEAPON,
    eCHARM,
    eSLEEP_DOOM,
    eDEBUFF_GUARD_COUNT,
    eSPAWN_EFFECT,
    ePOSSESSION,
    eFULL_BOOST_MODE,
    eCRISIS_PERCEPTION,
    eRESISTANT_COUNTER,
    eINVISIBLE_FOR_DAMAGE,
    eCOUNTER_OF_FENCER,
};
