#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PlayerVoiceList.h"
#include "PlayerVoiceSet.generated.h"

USTRUCT(BlueprintType)
struct FPlayerVoiceSet : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerVoiceList> VoiceList;
    
    MAJESTY_API FPlayerVoiceSet();
};

