#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ProcessItemNum.generated.h"

USTRUCT(BlueprintType)
struct FProcessItemNum : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NumTable;
    
    MAJESTY_API FProcessItemNum();
};

