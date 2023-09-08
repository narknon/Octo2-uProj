#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ObjectControlInterface.generated.h"

UINTERFACE(Blueprintable)
class MAJESTY_API UObjectControlInterface : public UInterface {
    GENERATED_BODY()
};

class MAJESTY_API IObjectControlInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHidden();
    
};

