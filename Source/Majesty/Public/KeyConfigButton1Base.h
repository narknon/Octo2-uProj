#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "KeyConfigButton1Base.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UKeyConfigButton1Base : public UUserWidget {
    GENERATED_BODY()
public:
    UKeyConfigButton1Base();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDescriptionText(FName Text);
    
};

