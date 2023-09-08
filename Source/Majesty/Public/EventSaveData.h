#pragma once
#include "CoreMinimal.h"
#include "EventSaveData.generated.h"

USTRUCT(BlueprintType)
struct FEventSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> EventCheckCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> EventFlag;
    
    MAJESTY_API FEventSaveData();
};

