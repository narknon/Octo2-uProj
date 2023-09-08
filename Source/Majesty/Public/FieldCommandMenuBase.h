#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "MJFieldCommandType.h"
#include "FieldCommandMenuBase.generated.h"

class AKSCharacterBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UFieldCommandMenuBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UFieldCommandMenuBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Open(AKSCharacterBase* TargetChara, bool DrawLeft, const TArray<MJFieldCommandType>& CommandList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsInputEnableMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Close(bool StateCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckUniqueCommandFlow();
    
};

