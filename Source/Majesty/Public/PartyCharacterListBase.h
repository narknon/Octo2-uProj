#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PartyCharacterListBase.generated.h"

class UPartyCharacterPanelBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UPartyCharacterListBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPartyCharacterListBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetPartyPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init(bool EnableStatusSpacer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UPartyCharacterPanelBase* GetMainMemberPanel(int32 MainMemberIndex);
    
};

