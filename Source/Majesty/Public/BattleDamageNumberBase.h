#pragma once
#include "CoreMinimal.h"
#include "ENOTICE_TYPE.h"
#include "KSUserWidgetBase.h"
#include "NoticeArgs.h"
#include "BattleDamageNumberBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UBattleDamageNumberBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UBattleDamageNumberBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePosition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleSpeedChange(ENOTICE_TYPE noticeType, const FNoticeArgs& NoticeArgs);
    
};

