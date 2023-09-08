#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemIconText.generated.h"

USTRUCT(BlueprintType)
struct FItemIconText : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText IconText;
    
    MAJESTY_API FItemIconText();
};

