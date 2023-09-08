#pragma once
#include "CoreMinimal.h"
#include "ELevelTriggerID.h"
#include "DestinationData.generated.h"

USTRUCT(BlueprintType)
struct FDestinationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelTriggerID TriggerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> HideIconFlag;
    
    MAJESTY_API FDestinationData();
};

