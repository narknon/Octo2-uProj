#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "KSAutoSavingWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UKSAutoSavingWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UKSAutoSavingWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetText(bool ForOptionMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseUI();
    
};

