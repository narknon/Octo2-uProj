#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "SelectForgetAbilityEventDelegate.h"
#include "AbilityForgetWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UAbilityForgetWidgetBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelectForgetAbilityEvent onSelectForgetAbility;
    
    UAbilityForgetWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetAbilityList(const TArray<int32>& AbilityList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenConfirmList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseList();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallOnSelectForgetAbility(int32 SelectCursorPosition, bool IsDecide);
    
};

