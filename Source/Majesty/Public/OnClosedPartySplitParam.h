#pragma once
#include "CoreMinimal.h"
#include "EPARTY_SPLIT_CLOSE_REASON.h"
#include "EPARTY_SPLIT_PLACEMENT_POSITION.h"
#include "EPlayableCharacterID.h"
#include "OnClosedPartySplitParam.generated.h"

USTRUCT(BlueprintType)
struct FOnClosedPartySplitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayableCharacterID, EPARTY_SPLIT_PLACEMENT_POSITION> PlacementResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPARTY_SPLIT_CLOSE_REASON CloseReason;
    
    MAJESTY_API FOnClosedPartySplitParam();
};

