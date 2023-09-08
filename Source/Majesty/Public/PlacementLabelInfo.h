#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PlacementLabelInfo.generated.h"

USTRUCT(BlueprintType)
struct FPlacementLabelInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PlaceLabelArray;
    
    MAJESTY_API FPlacementLabelInfo();
};

