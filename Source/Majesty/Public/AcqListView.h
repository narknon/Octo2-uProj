#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "Templates/SubclassOf.h"
#include "AcqListView.generated.h"

class UAcqUserWidget;
class UObject;
class UUserWidget;

UCLASS(Abstract, Blueprintable)
class MAJESTY_API UAcqListView : public UListView {
    GENERATED_BODY()
public:
    UAcqListView();
protected:
    UFUNCTION(BlueprintCallable)
    void SetNumDesignerPreviewEntries(int32 Num);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEntryWidgetClass(TSubclassOf<UAcqUserWidget> newEntryWidgetClass);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetSelectItemWidget(UObject* Item);
    
};

