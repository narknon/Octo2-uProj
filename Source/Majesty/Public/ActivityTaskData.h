#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ActivitySubTaskData.h"
#include "ActivityTaskData.generated.h"

USTRUCT(BlueprintType)
struct FActivityTaskData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivityLabelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActivitySubTaskData> SubTaskData;
    
    MAJESTY_API FActivityTaskData();
};

