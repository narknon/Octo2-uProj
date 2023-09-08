#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetWithState.h"
#include "SingleMenuWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API USingleMenuWidgetBase : public UKSUserWidgetWithState {
    GENERATED_BODY()
public:
    USingleMenuWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StorySelectOpen(FName WorldMapLabel);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseWhileRunning(bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPauseWhileRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EventFieldCommandBattleOpen(FName NPCLabel);
    
};

