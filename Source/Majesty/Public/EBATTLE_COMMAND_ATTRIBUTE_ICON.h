#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_COMMAND_ATTRIBUTE_ICON.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_COMMAND_ATTRIBUTE_ICON : uint8 {
    eSWORD,
    eLANCE,
    eDAGGER,
    eAXE,
    eBOW,
    eROD,
    eNONE,
    eFIRE,
    eICE,
    eTHUNDER,
    eWIND,
    eLIGHT,
    eDARK,
    ePOISON,
    eMATERIAL_ATTACK,
    eMATERIAL_HEAL,
    eCOMMAND_SEALING,
};

