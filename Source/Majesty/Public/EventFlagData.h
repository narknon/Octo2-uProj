#pragma once
#include "CoreMinimal.h"
#include "EventFlagData.generated.h"

USTRUCT(BlueprintType)
struct FEventFlagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagStatus;
    
    MAJESTY_API FEventFlagData();
};

