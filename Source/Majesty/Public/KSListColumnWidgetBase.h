#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "KSListColumnWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UKSListColumnWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UKSListColumnWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetText_Column3(FName col1, FName col2, FName col3);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetText_Column2(FName col1, FName col2);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetText_Column1(FName col1);
    
};

