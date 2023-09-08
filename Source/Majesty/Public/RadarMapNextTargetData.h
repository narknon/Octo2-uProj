#pragma once
#include "CoreMinimal.h"
#include "RadarMapNextTargetData.generated.h"

USTRUCT(BlueprintType)
struct FRadarMapNextTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFirstTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NextTriggerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProgressLabel;
    
    MAJESTY_API FRadarMapNextTargetData();
};

