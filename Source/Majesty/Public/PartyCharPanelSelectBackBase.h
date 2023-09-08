#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "PartyCharPanelSelectBackBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UPartyCharPanelSelectBackBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
    UPartyCharPanelSelectBackBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StayAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OutFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Focus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FastOutFocus();
    
};

