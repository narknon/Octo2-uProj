#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "PartyChatNotificationBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UPartyChatNotificationBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsOpening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsTemporaryHidden;
    
public:
    UPartyChatNotificationBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsOpening(bool IsOpening);
    
};

