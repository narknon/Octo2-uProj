#pragma once
#include "CoreMinimal.h"
#include "EKSCharacterAction.h"
#include "EKSCharacterAnimationLoop.h"
#include "PlayAction.generated.h"

USTRUCT(BlueprintType)
struct FPlayAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterAction ActionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Force;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterAnimationLoop ManualLoop;
    
    MAJESTY_API FPlayAction();
};

