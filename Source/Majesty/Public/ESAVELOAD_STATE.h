#pragma once
#include "CoreMinimal.h"
#include "ESAVELOAD_STATE.generated.h"

UENUM(BlueprintType)
enum class ESAVELOAD_STATE : uint8 {
    eNONE,
    eOPEN,
    eCLOSE,
    eSELECT_SLOT,
    eCONFIRM,
    eInSaveSystemData,
    eInSaveGame,
    eInLoadGame,
    eWAITING,
    eWAITING2,
    eEMPTY_UPDATE,
    eCOMPLETE,
};

