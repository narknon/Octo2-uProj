#pragma once
#include "CoreMinimal.h"
#include "EFADE_USER.generated.h"

UENUM(BlueprintType)
enum class EFADE_USER : uint8 {
    eOTHER,
    eTITLE_LOG,
    eMAIN_TITLE,
    eEVENT,
    eFIELD_COMMAND,
    ePARTY_CHAT,
    eINN,
    eBAR_STORY,
    eIMPROVE_RELATIONSHIP,
    eCHANGE_PARTY,
    eLEVEL_CHANGE,
    eTITLE_LOGO,
};

