#pragma once
#include "CoreMinimal.h"
#include "EOPTION_ITEM_KIND.generated.h"

UENUM(BlueprintType)
enum class EOPTION_ITEM_KIND : uint8 {
    eLANGUAGE,
    eVOICE_LANGUAGE,
    eVOLUME_MASTER,
    eVOLUME_VOICE,
    eVOLUME_BGM,
    eVOLUME_SE,
    eSAVE_CURSOR_IN_BATTLE,
    eSAVE_CURSOR_IN_FC,
    eVIBRATION,
    eRESET_TO_DEFAULT,
    eVOLUME_SE_ENV,
    eTEXT_SPEED,
    eBALLOON_WAIT_TIME,
    eDARKNESS_CORNER,
    eBRIGHTNESS_SCREEN,
    eFRAME_RATE,
    eVSYNC,
    eWINDOW_RESOLUTION,
    eDISPLAY_MODE,
    eRENDER_PROFILE,
    eUI_TEXTURE_RESOLUTION,
    eANTI_ALIASING_QUALITY,
    ePOST_PROCESS_QUALITY,
    eSHADOW_QUALITY,
    eTEXTURE_QUALITY,
    eEFFECT_QUALITY,
    eRENDER_QUALITY_AUTO,
    eENCOUNT_CAMERA_PERFORM,
    eBOOST_ATTACK_PERFORM,
    eCONTROLLER_CINFIG_00,
    eCONTROLLER_CINFIG_01,
    eCONTROLLER_CINFIG_02,
    eCONTROLLER_CINFIG_03,
    eCONTROLLER_CINFIG_04,
    eCONTROLLER_CINFIG_05,
    eCONTROLLER_CINFIG_06,
    eCONTROLLER_CINFIG_07,
    eCONTROLLER_CINFIG_08,
    eCONTROLLER_CINFIG_09,
    eCONTROLLER_CINFIG_10,
    eCONTROLLER_CONFIG_11,
    eKEYBOARD_CONFIG_00,
    eKEYBOARD_CONFIG_01,
    eKEYBOARD_CONFIG_02,
    eKEYBOARD_CONFIG_03,
    eKEYBOARD_CONFIG_04,
    eKEYBOARD_CONFIG_05,
    eKEYBOARD_CONFIG_06,
    eKEYBOARD_CONFIG_07,
    eKEYBOARD_CONFIG_08,
    eKEYBOARD_CONFIG_09,
    eKEYBOARD_CONFIG_10,
    eKEYBOARD_CONFIG_11,
    eKEYBOARD_CONFIG_12,
    eKEYBOARD_CONFIG_13,
    eKEYBOARD_CONFIG_14,
    eKEYBOARD_CONFIG_15,
    eKEYBOARD_CONFIG_16,
    eKEYBOARD_CONFIG_17,
    eKEYBOARD_CONFIG_18,
    eKEYBOARD_CONFIG_19,
    eKEYBOARD_CONFIG_20,
    eMOUSE_MOVE_ENABLE,
    eMOUSE_CONFIG_00,
    eMOUSE_CONFIG_01,
    eMOUSE_CONFIG_02,
    eMOUSE_CONFIG_03,
    eMOUSE_CONFIG_04,
    eMOUSE_CONFIG_05,
    eRESET_TO_DEFAULT_CONTROLLER_CONFIG,
    eRESET_TO_DEFAULT_KEYBOARD_CONFIG,
    eRESET_TO_DEFAULT_MOUSE_CONFIG,
    eRESET_TO_DEFAULT_AUDIO_CONFIG,
    eRESET_TO_DEFAULT_GRAPHIC_CONFIG,
};

