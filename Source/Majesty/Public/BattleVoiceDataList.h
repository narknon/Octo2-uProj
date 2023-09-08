#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BattleVoiceSetData.h"
#include "EBATTLE_VOICE_TYPE.h"
#include "BattleVoiceDataList.generated.h"

USTRUCT(BlueprintType)
struct FBattleVoiceDataList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_VOICE_TYPE m_eBattleVoiceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleVoiceSetData> m_acBattleVoiceData;
    
    MAJESTY_API FBattleVoiceDataList();
};

