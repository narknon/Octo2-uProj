#pragma once
#include "CoreMinimal.h"
#include "EWorldMapIconType.generated.h"

UENUM(BlueprintType)
enum class EWorldMapIconType : uint8 {
    eNONE,
    eTOWN,
    eTown_GUILD,
    eTOWN_PORT,
    eCITY,
    eCITY_PORT,
    eCITY_GUILD,
    eVILLAGE,
    eVILLAGE_PORT,
    eVILLAGE_GUILD,
    eFIELD = 0x28,
    eFIELD_GUILD,
    eFIELD_PORT,
    eDUNGEON_CAVE = 0x50,
    eDUNGEON_FOREST,
    eDUNGEON_RUIN,
    eDUNGEON_UNDERGROUND,
    eDUNGEON_MANSION,
    eDUNGEON_JOB,
    eDUNGEON_SHIP,
    eDUNGEON_MOUNTAIN,
    eCATHEDRAL = 0x96,
    eSHIP,
};

