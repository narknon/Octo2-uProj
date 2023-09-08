#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ListItemExWidgetInterface.generated.h"

UINTERFACE(Blueprintable)
class MAJESTY_API UListItemExWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class MAJESTY_API IListItemExWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputRight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitExWidget();
    
};

