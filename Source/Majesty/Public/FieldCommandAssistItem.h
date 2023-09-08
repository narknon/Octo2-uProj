#pragma once
#include "CoreMinimal.h"
#include "FieldCommandAssistItem.generated.h"

USTRUCT(BlueprintType)
struct FFieldCommandAssistItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BenefitValue;
    
    MAJESTY_API FFieldCommandAssistItem();
};

