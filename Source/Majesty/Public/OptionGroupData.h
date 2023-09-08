#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OptionItemData.h"
#include "OptionGroupData.generated.h"

USTRUCT(BlueprintType)
struct FOptionGroupData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptionItemData> ItemData;
    
    MAJESTY_API FOptionGroupData();
};

