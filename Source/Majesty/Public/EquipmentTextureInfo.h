#pragma once
#include "CoreMinimal.h"
#include "EquipmentTextureInfo.generated.h"

USTRUCT(BlueprintType)
struct FEquipmentTextureInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PCResourceLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NPCResourceLabel;
    
    MAJESTY_API FEquipmentTextureInfo();
};

