#pragma once
#include "CoreMinimal.h"
#include "EGAMEOVER_TYPE.h"
#include "FinishEventDelegate.h"
#include "KSUserWidgetWithState.h"
#include "OpenFinishDelegate.h"
#include "GameoverWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UGameoverWidgetBase : public UKSUserWidgetWithState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishEvent FinishEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenFinish OpenFinish;
    
    UGameoverWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGameOverType(EGAMEOVER_TYPE Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 IsCursorSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorUpEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorDownEvent();
    
};

