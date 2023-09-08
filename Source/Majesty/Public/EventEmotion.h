#pragma once
#include "CoreMinimal.h"
#include "EventEmotion.generated.h"

class AKSCharacterBase;

USTRUCT(BlueprintType)
struct FEventEmotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TWeakObjectPtr<AKSCharacterBase> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FName TargetTag;
    
    MAJESTY_API FEventEmotion();
};

