#pragma once
#include "CoreMinimal.h"
#include "ActivitySubTaskData.generated.h"

USTRUCT(BlueprintType)
struct MAJESTY_API FActivitySubTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubTaskLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainStoryLabel;
    
    FActivitySubTaskData();
};

