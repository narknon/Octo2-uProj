#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharResource_BattleReductionTable.generated.h"

USTRUCT(BlueprintType)
struct FCharResource_BattleReductionTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_strBattleTextureNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_strBattleMaterialNameList;
    
    MAJESTY_API FCharResource_BattleReductionTable();
};

