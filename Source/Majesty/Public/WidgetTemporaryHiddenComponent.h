#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ENOTICE_TYPE.h"
#include "EWIDGET_TEMPORARY_HIDE_USER.h"
#include "NoticeArgs.h"
#include "WidgetTemporaryHiddenComponent.generated.h"

class AKSUIManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UWidgetTemporaryHiddenComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKSUIManager* m_UiManager;
    
public:
    UWidgetTemporaryHiddenComponent();
    UFUNCTION(BlueprintCallable)
    void TurnOffTemporaryHiddenFlag(EWIDGET_TEMPORARY_HIDE_USER hideUser);
    
    UFUNCTION(BlueprintCallable)
    void Setup(AKSUIManager* uiManager);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllHiddenFlag();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartBattle(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnEndBattle(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
public:
    UFUNCTION(BlueprintCallable)
    void HideWidgetTemporary(bool isHide, EWIDGET_TEMPORARY_HIDE_USER hideUser);
    
};

