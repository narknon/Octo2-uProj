#pragma once
#include "CoreMinimal.h"
#include "CustomMissionFlipbookJobData.generated.h"

USTRUCT(BlueprintType)
struct FCustomMissionFlipbookJobData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LabelList;
    
    MAJESTY_API FCustomMissionFlipbookJobData();
};

