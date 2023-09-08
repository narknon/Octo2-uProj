#pragma once
#include "CoreMinimal.h"
#include "GuildTalkData.generated.h"

USTRUCT(BlueprintType)
struct FGuildTalkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkEvent;
    
    MAJESTY_API FGuildTalkData();
};

