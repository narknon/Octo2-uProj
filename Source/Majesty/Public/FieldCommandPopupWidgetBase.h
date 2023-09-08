#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "MJFieldCommandType.h"
#include "FieldCommandPopupWidgetBase.generated.h"

class AKSCharacterBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UFieldCommandPopupWidgetBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UFieldCommandPopupWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Open(AKSCharacterBase* TargetCharacter, const TArray<MJFieldCommandType>& Commands);
    
};

