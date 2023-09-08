#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FootStepData.generated.h"

USTRUCT(BlueprintType)
struct FFootStepData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WalkSELabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DashSELabel;
    
    MAJESTY_API FFootStepData();
};

