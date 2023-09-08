#pragma once
#include "CoreMinimal.h"
#include "SubMissionMarkerData.h"
#include "SaveMissionData.generated.h"

USTRUCT(BlueprintType)
struct FSaveMissionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MissionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ClearIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> SubMissionNewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubMissionMarkerData> SubMissionMaker;
    
    MAJESTY_API FSaveMissionData();
};

