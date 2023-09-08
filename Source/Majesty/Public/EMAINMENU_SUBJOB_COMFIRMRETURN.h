#pragma once
#include "CoreMinimal.h"
#include "EMAINMENU_SUBJOB_COMFIRMRETURN.generated.h"

UENUM(BlueprintType)
enum class EMAINMENU_SUBJOB_COMFIRMRETURN : uint8 {
    eCURSOR_LEFT,
    eCANCEL_EVENT,
    eSHOULDER_R,
    eSHOULDER_L,
    eMENU_CLOSE,
};

