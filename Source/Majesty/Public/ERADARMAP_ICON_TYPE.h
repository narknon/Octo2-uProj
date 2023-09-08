#pragma once
#include "CoreMinimal.h"
#include "ERADARMAP_ICON_TYPE.generated.h"

UENUM(BlueprintType)
enum class ERADARMAP_ICON_TYPE : uint8 {
    ePLAYER,
    eSAVEPOINT,
    eTREASUREBOX,
    eTHIEF_TREASUREBOX,
    eTREASUREBOX_EMPTY,
    eTHDDEN_POINT,
    eMAIN_SCENARIO,
    eSUB_SCENARIO,
    eITEM_SHOP,
    eWEAPON_SHOP,
    eGENRAL_SHOP,
    eINN,
    eMAIN_BAR,
    eBAR,
    eMAIN_MAPCHANGE,
    eMAPCHANGE,
    eSAVE,
    eADDMAMBER,
    eSUB_STORY_MERCHANT,
    eGUILD,
    eSUB_MAPCHANGE,
    eLINER_SHIP,
    eNO_ICON,
};

