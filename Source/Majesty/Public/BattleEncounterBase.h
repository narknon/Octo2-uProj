#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BattleEncountData.h"
#include "BattleEncounterBase.generated.h"

USTRUCT(BlueprintType)
struct FBattleEncounterBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstEncount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleEncountData> group;
    
    MAJESTY_API FBattleEncounterBase();
};

