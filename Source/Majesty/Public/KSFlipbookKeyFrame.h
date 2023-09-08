#pragma once
#include "CoreMinimal.h"
#include "KSFlipbookKeyFrame.generated.h"

USTRUCT(BlueprintType)
struct FKSFlipbookKeyFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpriteName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameRun;
    
    MAJESTY_API FKSFlipbookKeyFrame();
};

