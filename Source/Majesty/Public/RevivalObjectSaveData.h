#pragma once
#include "CoreMinimal.h"
#include "RevivalObjectSaveData.generated.h"

USTRUCT(BlueprintType)
struct FRevivalObjectSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLevelChangeCount;
    
    MAJESTY_API FRevivalObjectSaveData();
};

