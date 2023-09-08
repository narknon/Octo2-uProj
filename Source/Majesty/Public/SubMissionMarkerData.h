#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SubMissionMarkerData.generated.h"

USTRUCT(BlueprintType)
struct FSubMissionMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MarkerPos;
    
    MAJESTY_API FSubMissionMarkerData();
};

