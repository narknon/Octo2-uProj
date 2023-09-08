#pragma once
#include "CoreMinimal.h"
#include "MapData.generated.h"

USTRUCT(BlueprintType)
struct FMapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> TreasureStateArray;
    
    MAJESTY_API FMapData();
};

