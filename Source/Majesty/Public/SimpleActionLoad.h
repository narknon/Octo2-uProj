#pragma once
#include "CoreMinimal.h"
#include "EKSCharacterAction.h"
#include "SimpleActionLoad.generated.h"

USTRUCT(BlueprintType)
struct MAJESTY_API FSimpleActionLoad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaResLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKSCharacterAction> ActionLabels;
    
    FSimpleActionLoad();
};

