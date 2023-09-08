#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBATTLE_CAMERA_TYPE.h"
#include "BattlePlacementTypeBase.generated.h"

USTRUCT(BlueprintType)
struct FBattlePlacementTypeBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_CAMERA_TYPE CameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Placement;
    
    MAJESTY_API FBattlePlacementTypeBase();
};

