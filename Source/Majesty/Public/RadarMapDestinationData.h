#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DestinationData.h"
#include "LEVEL_AREA_TYPE.h"
#include "RadarMapDestinationData.generated.h"

USTRUCT(BlueprintType)
struct FRadarMapDestinationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainStoryTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName levelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    LEVEL_AREA_TYPE LevelAreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDestinationData> DestinationList;
    
    MAJESTY_API FRadarMapDestinationData();
};

