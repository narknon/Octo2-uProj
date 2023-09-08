#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "AcqUserWidget.h"
#include "CloseDelegateDelegate.h"
#include "CloseFinishDelegateBPDelegate.h"
#include "CloseFinishDelegateDelegate.h"
#include "EKSLanguage.h"
#include "EWIDGET_CREATE_PHASE.h"
#include "EWIDGET_TEMPORARY_HIDE_USER.h"
#include "OpenDelegateDelegate.h"
#include "OpenFinishDelegateDelegate.h"
#include "KSUserWidgetBase.generated.h"

class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UKSUserWidgetBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenDelegate OnOpenCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenFinishDelegate OnOpenFinishCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloseDelegate OnCloseCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloseFinishDelegate OnCloseFinishCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloseFinishDelegateBP OnCloseFinishCallbackBP;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TemporaryHideUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OpenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CloseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimationList;
    
public:
    UKSUserWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateOpening();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMain();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateClosing();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UIOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UIClose();
    
    UFUNCTION(BlueprintCallable)
    void TurnOffTemporaryHiddenFlag(EWIDGET_TEMPORARY_HIDE_USER hideUser);
    
    UFUNCTION(BlueprintCallable)
    void TickUpdateState(float fDeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetReference();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetManualAnimationUpdate(bool bManual);
    
    UFUNCTION(BlueprintCallable)
    void ResetInputAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetFromTitle();
    
    UFUNCTION(BlueprintCallable)
    void ResetForceUIClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshLanguage(EKSLanguage NewLanguage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetHiddenFlag();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpenFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCloseFinish();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NoticeCreatedWidget(EWIDGET_CREATE_PHASE CreatePhase);
    
    UFUNCTION(BlueprintCallable)
    void ManualAnimationUpdate(const FGeometry& MyGeometry, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWait() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTemporaryHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceClosing() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsChangeStateOpenFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsChangeStateCloseFinish();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Init();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideTemporaryInternal(bool isHidden, EWIDGET_TEMPORARY_HIDE_USER hideUser);
    
public:
    UFUNCTION(BlueprintCallable)
    void HideTemporary(bool isHidden, EWIDGET_TEMPORARY_HIDE_USER hideUser);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayingAnimation(UWidgetAnimation*& Animation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetManualAnimationUpdate();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeltaTime();
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceUIClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* FindWidget(const FName& WidgetName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString Debug_GetStateInfoAsString();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_DecideUI(int32 Param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInputAllowed();
    
};

