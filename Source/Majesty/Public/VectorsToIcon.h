#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VectorsToIcon.generated.h"

USTRUCT(BlueprintType)
struct FVectorsToIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BetweenIconAndCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BetweenIconAndAreaLabel;
    
    MAJESTY_API FVectorsToIcon();
};

