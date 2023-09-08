#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KSUserWidgetBase.h"
#include "HelpWindowBase.generated.h"

class UPanelWidget;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UHelpWindowBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_WidgetRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_CurrentOffset;
    
public:
    UHelpWindowBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPositionByWidget(const UUserWidget* Widget, bool forceFlip);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(const FVector2D& NewPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetOffset(const FVector2D& Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentOffset() const;
    
};

