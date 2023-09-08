#pragma once
#include "CoreMinimal.h"
#include "EUITitleFlow.h"
#include "KSUserWidgetBase.h"
#include "MainTitleBase.generated.h"

class UTitleBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UMainTitleBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UMainTitleBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupNewGameForAutoPlay(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleScene(UTitleBase* Scene, EUITitleFlow Flow);
    
};

