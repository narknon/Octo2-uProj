#pragma once
#include "CoreMinimal.h"
#include "EPlayableCharacterID.h"
#include "KSUserWidgetWithState.h"
#include "ListCharacterWidgetBase.generated.h"

class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UListCharacterWidgetBase : public UKSUserWidgetWithState {
    GENERATED_BODY()
public:
    UListCharacterWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupJoinNewMember(bool IsAddFriendMode, EPlayableCharacterID NewCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsRefreshPartyCharacter(bool IsRefreshPartyCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsOpenInBar(bool IsBar);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsIgnoreFadeOnCloseWidget(bool IsIgnoreFade);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UOverlay* GetPartyPanelRool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UOverlay* GetMenuFooterRoot();
    
};

