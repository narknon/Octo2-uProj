#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ActivityData.generated.h"

USTRUCT(BlueprintType)
struct FActivityData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TitleText;
    
    MAJESTY_API FActivityData();
};

