#pragma once
#include "CoreMinimal.h"
#include "EEQUIPMENT_MENU_STATE.generated.h"

UENUM(BlueprintType)
enum class EEQUIPMENT_MENU_STATE : uint8 {
    eNONE,
    eOPEN,
    eCLOSE,
    eSELECT_CHARA_EQUIP_PART,
    eCONFIRM_RECOMMENDED,
    eCONFIRM_RECOMMENDED_ALL,
    eCONFIRM_REMOVE_ALL,
    eSELECT_EQUIP_ITEM,
    eCLOSE_EQUIP_ITEM,
    eWAIT_DIALOG,
};

