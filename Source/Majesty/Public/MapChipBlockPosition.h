#pragma once
#include "CoreMinimal.h"
#include "MapChipBlockPosition.generated.h"

USTRUCT(BlueprintType)
struct FMapChipBlockPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nPosX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nPosY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nPosZ;
    
    MAJESTY_API FMapChipBlockPosition();
};

