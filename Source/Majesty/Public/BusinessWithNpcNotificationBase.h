#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "SpActMerchantResult.h"
#include "BusinessWithNpcNotificationBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UBusinessWithNpcNotificationBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsOpening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpActMerchantResult m_SpActMerchantResult;
    
public:
    UBusinessWithNpcNotificationBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenNotificationAnimal(const FSpActMerchantResult& SpActMerchantResult, bool bIsFast);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenNotification(const FSpActMerchantResult& SpActMerchantResult, bool bIsFast);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseNotification(bool bIsFast);
    
};

