#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EPlayableCharacterID.h"
#include "PartySplitCharacterPanelBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UPartySplitCharacterPanelBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPartySplitCharacterPanelBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterFlpBook(EPlayableCharacterID CharacterID);
    
};

