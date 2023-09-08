#pragma once
#include "CoreMinimal.h"
#include "ESEQ_CAMERA_MODE.generated.h"

UENUM(BlueprintType)
enum class ESEQ_CAMERA_MODE : uint8 {
    eNONE,
    eSEPIA_START,
    eSEPIA_END,
    eMONOCHROME,
    eMONOCHROME_START,
    eMONOCHROME_END,
};

