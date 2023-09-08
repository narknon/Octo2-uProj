#pragma once
#include "CoreMinimal.h"
#include "ENOTICE_TYPE.h"
#include "KSUserWidgetBase.h"
#include "NoticeArgs.h"
#include "EventSkipBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UEventSkipBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UEventSkipBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateProgress(float CurrentTime, float MaxTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventSpeedChange(ENOTICE_TYPE noticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_SetForceSkip(bool bforceSkip);
    
};

