#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AchievementTypeData.generated.h"

USTRUCT(BlueprintType)
struct FAchievementTypeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExcludeEnemyGroups;
    
    MAJESTY_API FAchievementTypeData();
};

