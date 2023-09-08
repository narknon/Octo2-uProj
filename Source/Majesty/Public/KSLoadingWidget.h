#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "ELOADING_REASON.h"
#include "ERESOLUTION_TYPE.h"
#include "KSLoadingWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UKSLoadingWidget : public UAcqUserWidget {
    GENERATED_BODY()
public:
    UKSLoadingWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StopLoading_Inner();
    
public:
    UFUNCTION(BlueprintCallable)
    bool StopLoading(ELOADING_REASON reason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartLoading_Inner();
    
public:
    UFUNCTION(BlueprintCallable)
    bool StartLoading(ELOADING_REASON reason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERESOLUTION_TYPE GetLoadingResourceResolution();
    
};

