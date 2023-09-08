#pragma once
#include "CoreMinimal.h"
#include "EMUSIC_PLAYER_WIDGET_STATE.h"
#include "KSUserWidgetBase.h"
#include "MusicPlayerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UMusicPlayerWidget : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMUSIC_PLAYER_WIDGET_STATE m_WidgetState;
    
public:
    UMusicPlayerWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWidgetState(EMUSIC_PLAYER_WIDGET_STATE WidgetState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndState(EMUSIC_PLAYER_WIDGET_STATE CurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginState(EMUSIC_PLAYER_WIDGET_STATE CurrentState);
    
};

