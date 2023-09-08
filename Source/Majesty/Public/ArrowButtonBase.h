#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ArrowButtonBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UArrowButtonBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseGameText;
    
    UArrowButtonBase();
    UFUNCTION(BlueprintCallable)
    void SetUseGameText(bool UseGameText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextList(const TArray<FName>& textList);
    
};

