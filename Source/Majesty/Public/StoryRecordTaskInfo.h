#pragma once
#include "CoreMinimal.h"
#include "MAINMENU_MISSION_RECORD_DATA.h"
#include "StoryRecordTaskInfo.generated.h"

USTRUCT(BlueprintType)
struct FStoryRecordTaskInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMAINMENU_MISSION_RECORD_DATA> StoryRecordList;
    
    MAJESTY_API FStoryRecordTaskInfo();
};

