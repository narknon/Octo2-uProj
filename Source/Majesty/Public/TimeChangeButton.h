#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TimeChangeButton.generated.h"

class UKSTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UTimeChangeButton : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKSTextBlock* m_pMainText;
    
public:
    UTimeChangeButton();
    UFUNCTION(BlueprintCallable)
    void SetText(FName ButtonLabel, FName MainLabel);
    
};

