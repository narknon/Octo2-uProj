#pragma once
#include "CoreMinimal.h"
#include "EBuildingPartsGroup.generated.h"

UENUM(BlueprintType)
enum class EBuildingPartsGroup : uint8 {
    BPG_Wall_Btm_North,
    BPG_Wall_Btm_South,
    BPG_Wall_Btm_West,
    BPG_Wall_Btm_East,
    BPG_Post_Btm_NW,
    BPG_Post_Btm_NE,
    BPG_Post_Btm_SW,
    BPG_Post_Btm_SE,
    BPG_Wall_Mdl_North,
    BPG_Wall_Mdl_South,
    BPG_Wall_Mdl_West,
    BPG_Wall_Mdl_East,
    BPG_Wall_Top_North,
    BPG_Wall_Top_South,
    BPG_Post_Mdl_NW,
    BPG_Post_Mdl_NE,
    BPG_Post_Mdl_SW,
    BPG_Post_Mdl_SE,
    BPG_Roof_Btm_West,
    BPG_Roof_Btm_East,
    BPG_Roof_Mdl_West,
    BPG_Roof_Mdl_East,
    BPG_Roof_Top,
    BPG_Roof_North,
    BPG_Roof_South,
    BPG_Roof_TopAll,
    BPG_MAX UMETA(Hidden),
};

