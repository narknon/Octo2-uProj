#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BattleVoiceSetList.generated.h"

USTRUCT(BlueprintType)
struct FBattleVoiceSetList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_astrBattleVoiceLabel;
    
    MAJESTY_API FBattleVoiceSetList();
};

