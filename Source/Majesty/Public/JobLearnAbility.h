#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "JobLearnAbility.generated.h"

USTRUCT(BlueprintType)
struct FJobLearnAbility : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GetParam;
    
    MAJESTY_API FJobLearnAbility();
};

