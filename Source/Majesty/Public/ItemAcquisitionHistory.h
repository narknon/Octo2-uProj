#pragma once
#include "CoreMinimal.h"
#include "ItemAcquisitionHistory.generated.h"

USTRUCT(BlueprintType)
struct FItemAcquisitionHistory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> History;
    
public:
    MAJESTY_API FItemAcquisitionHistory();
};

