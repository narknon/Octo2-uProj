#pragma once
#include "CoreMinimal.h"
#include "AddBalloonParam.h"
#include "EBalloonEventType.h"
#include "EKSLanguage.h"
#include "ENOTICE_TYPE.h"
#include "KSUserWidgetBase.h"
#include "NoticeArgs.h"
#include "BalloonBundleWidgetBase.generated.h"

class UBalloonBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UBalloonBundleWidgetBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBalloonBase*> RefBalloons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBalloonBase*> RefAutoBalloons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBalloonBase*> UnUseBalloons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBalloonBase*> UnUseAutoBalloons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBalloonBase*> UseBalloons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBalloonBase*> UseAutoTalkBalloons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBalloonBase* RefDeepThink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBalloonBase* RefDeepThinkFixedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBalloonBase* m_cBalloonActive;
    
public:
    UBalloonBundleWidgetBase();
    UFUNCTION(BlueprintCallable)
    bool UnPausedAutoTalkBalloonAll();
    
    UFUNCTION(BlueprintCallable)
    void SetAutoTimer(float fTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RestoreEventSkip(bool Skip);
    
    UFUNCTION(BlueprintCallable)
    bool PauseAutoTalkBalloonAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventSpeedChange(ENOTICE_TYPE noticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleSpeedChange(ENOTICE_TYPE noticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void Next(bool AutoNext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetTextWaitTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAutoTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetAutoTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetAutoEventMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBalloonBase* GetActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool DeleteBalloonAll();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteBalloon(UBalloonBase* pcDelete);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteAutoBalloonAll();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteAutoBalloon(UBalloonBase* pcDelete);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_SetMessageFullSkip(bool bSkip);
    
    UFUNCTION(BlueprintCallable)
    bool CloseAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeTextSpeed(EKSLanguage Language);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CallBalloonEvent(EBalloonEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    UBalloonBase* AddBalloon(const FAddBalloonParam& InAddParam);
    
    UFUNCTION(BlueprintCallable)
    UBalloonBase* AddAutoTalkBalloon(const FAddBalloonParam& InAddParam, float fDispTime);
    
};

