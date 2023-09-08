#pragma once
#include "CoreMinimal.h"
#include "EncountFlagData.generated.h"

USTRUCT(BlueprintType)
struct FEncountFlagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EncountTriggerLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventFlag;
    
    MAJESTY_API FEncountFlagData();
};

