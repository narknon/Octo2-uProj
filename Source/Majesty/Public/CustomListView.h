#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "CustomListView.generated.h"

class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class MAJESTY_API UCustomListView : public UListView {
    GENERATED_BODY()
public:
    UCustomListView();
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetSelectItemWidget(UObject* Item);
    
};

