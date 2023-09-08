#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PlayerVoiceList.generated.h"

USTRUCT(BlueprintType)
struct FPlayerVoiceList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> VoiceLabel;
    
    MAJESTY_API FPlayerVoiceList();
};

