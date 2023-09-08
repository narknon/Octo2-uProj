#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EREMINISCENCE_MERGE_TYPE.h"
#include "ReminiscenceMergeSetting.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceMergeSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EREMINISCENCE_MERGE_TYPE> MergeType;
    
    MAJESTY_API FReminiscenceMergeSetting();
};

