#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BattleResultItemDropData.generated.h"

USTRUCT(BlueprintType)
struct FBattleResultItemDropData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    MAJESTY_API FBattleResultItemDropData();
};

