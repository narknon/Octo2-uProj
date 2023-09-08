#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BattleEncountData.generated.h"

USTRUCT(BlueprintType)
struct FBattleEncountData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Appearance;
    
    MAJESTY_API FBattleEncountData();
};

