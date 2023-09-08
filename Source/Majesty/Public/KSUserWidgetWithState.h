#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "KSUserWidgetWithState.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UKSUserWidgetWithState : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UKSUserWidgetWithState();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateState();
    
    UFUNCTION(BlueprintCallable)
    void SetNextState(int32 NextState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateState(int32 CurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndState(int32 CurrentState, int32 NextState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginState(int32 PrevState, int32 CurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsClosingState(int32 State);
    
    UFUNCTION(BlueprintCallable)
    void InitState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrevState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentState() const;
    
};

