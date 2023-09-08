#pragma once
#include "CoreMinimal.h"
#include "AcqListViewEntryItemBase.h"
#include "PartyChat.h"
#include "StoryRecordPartyChatListEntry.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UStoryRecordPartyChatListEntry : public UAcqListViewEntryItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyChat PartyChatData;
    
    UStoryRecordPartyChatListEntry();
};

