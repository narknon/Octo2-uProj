#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "FieldCommandWidgetBase.generated.h"

class UBackgroundBlur;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UFieldCommandWidgetBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBackgroundBlur* Blur;
    
public:
    UFieldCommandWidgetBase();
};

