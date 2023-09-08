#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameTextInfoData.generated.h"

USTRUCT(BlueprintType)
struct FGameTextInfoData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    MAJESTY_API FGameTextInfoData();
};

