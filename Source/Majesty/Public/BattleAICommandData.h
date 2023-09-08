#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BattleAICommandData.generated.h"

USTRUCT(BlueprintType)
struct FBattleAICommandData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strCommandname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nRate;
    
    MAJESTY_API FBattleAICommandData();
};

