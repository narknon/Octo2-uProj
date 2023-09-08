#pragma once
#include "CoreMinimal.h"
#include "EPARTY_SPLIT_CLOSE_REASON.h"
#include "KSUserWidgetWithState.h"
#include "OnClosedKSPartySplitWithResultDelegate.h"
#include "KSPartySplitWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UKSPartySplitWidgetBase : public UKSUserWidgetWithState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClosedKSPartySplitWithResult OnClosedKSPartySplitWithResult;
    
    UKSPartySplitWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsDisplayWarning(bool isDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    EPARTY_SPLIT_CLOSE_REASON GetCloseReason() const;
    
};

