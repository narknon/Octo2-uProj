#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TalkVoice.generated.h"

USTRUCT(BlueprintType)
struct FTalkVoice : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Voice;
    
    MAJESTY_API FTalkVoice();
};

