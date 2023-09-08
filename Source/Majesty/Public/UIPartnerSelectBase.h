#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "UIPartnerSelectBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UUIPartnerSelectBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PartnerID;
    
public:
    UUIPartnerSelectBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartnerID();
    
};

