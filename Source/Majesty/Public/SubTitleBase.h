#pragma once
#include "CoreMinimal.h"
#include "ENOTICE_TYPE.h"
#include "KSUserWidgetBase.h"
#include "NoticeArgs.h"
#include "SubTitleDataBase.h"
#include "SubTitleBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API USubTitleBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubTitleDataBase SubTitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubTitleLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EventRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AfterEventLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> m_ChangeEventFlagOnBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> m_ChangeEventFlagOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> m_ChangeEventFlagOnPause;
    
public:
    USubTitleBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Stop(bool& IsNext);
    
    UFUNCTION(BlueprintCallable)
    void SetSubTitleLabel(FName Label);
    
    UFUNCTION(BlueprintCallable)
    void SetEventOpenRequest(bool IsEventRequest);
    
    UFUNCTION(BlueprintCallable)
    void SetAfterEventLabel(FName EventLabel);
    
    UFUNCTION(BlueprintCallable)
    void OnFieldChangeFinishCallback(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetCurrentBlock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAfterEventLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceClose();
    
};

