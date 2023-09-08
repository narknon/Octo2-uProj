#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MissionLabelList.generated.h"

USTRUCT(BlueprintType)
struct FMissionLabelList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LabelArray;
    
    MAJESTY_API FMissionLabelList();
};

