#pragma once
#include "CoreMinimal.h"
#include "AcquisitionAbilityData.generated.h"

USTRUCT(BlueprintType)
struct FAcquisitionAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> AcquisitionFlag;
    
    MAJESTY_API FAcquisitionAbilityData();
};

