#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EINITIAL_OPTION_WIDGET_STATE.h"
#include "InitialLaunchOptionMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UInitialLaunchOptionMenu : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EINITIAL_OPTION_WIDGET_STATE m_WidgetState;
    
public:
    UInitialLaunchOptionMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWidgetState(EINITIAL_OPTION_WIDGET_STATE WidgetState);
    
};

