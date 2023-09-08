#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELevelTriggerID.h"
#include "ESUB_STORY_RADAR_ICON_TYPE.h"
#include "RadarMapSubStoryData.generated.h"

USTRUCT(BlueprintType)
struct FRadarMapSubStoryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartEventFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndEventFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetLevelLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESUB_STORY_RADAR_ICON_TYPE RadarMapIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELevelTriggerID> TriggerID;
    
    MAJESTY_API FRadarMapSubStoryData();
};

