#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LabelListData.generated.h"

USTRUCT(BlueprintType)
struct FLabelListData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LabelList;
    
    MAJESTY_API FLabelListData();
};

