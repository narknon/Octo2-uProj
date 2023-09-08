#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CommonControllerConfigData.generated.h"

USTRUCT(BlueprintType)
struct FCommonControllerConfigData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> KeyList;
    
    MAJESTY_API FCommonControllerConfigData();
};

