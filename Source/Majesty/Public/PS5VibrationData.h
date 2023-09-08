#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PS5VibrationData.generated.h"

class USoundWave;

USTRUCT(BlueprintType)
struct FPS5VibrationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* VibrationAsset;
    
    MAJESTY_API FPS5VibrationData();
};

