#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "EUITitleFlow.h"
#include "TitleBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UTitleBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
    UTitleBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetNextScene(EUITitleFlow Scene);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentScene(EUITitleFlow Scene);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUITitleFlow GetNextScene();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUITitleFlow GetCurrentScene();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void End();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool AllowPushToUIManager();
    
};

