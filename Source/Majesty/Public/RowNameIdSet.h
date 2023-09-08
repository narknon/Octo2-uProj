#pragma once
#include "CoreMinimal.h"
#include "RowNameIdSet.generated.h"

USTRUCT(BlueprintType)
struct MAJESTY_API FRowNameIdSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FName> IdToRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> RowNameToId;
    
    FRowNameIdSet();
};

