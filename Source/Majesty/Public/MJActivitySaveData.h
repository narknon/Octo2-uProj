#pragma once
#include "CoreMinimal.h"
#include "MJActivitySaveData.generated.h"

USTRUCT(BlueprintType)
struct FMJActivitySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> SubTaskStatus;
    
    MAJESTY_API FMJActivitySaveData();
};

