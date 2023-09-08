#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OptionItemLabelSet.generated.h"

USTRUCT(BlueprintType)
struct FOptionItemLabelSet : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemText1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemText2;
    
    MAJESTY_API FOptionItemLabelSet();
};

