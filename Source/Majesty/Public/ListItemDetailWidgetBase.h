#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ListItemDetailWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UListItemDetailWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UListItemDetailWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide();
    
};

