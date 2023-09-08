#pragma once
#include "CoreMinimal.h"
#include "AdvancedAbility.generated.h"

USTRUCT(BlueprintType)
struct MAJESTY_API FAdvancedAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HiddenText;
    
    FAdvancedAbility();
};

