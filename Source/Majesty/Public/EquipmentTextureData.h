#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EquipmentTextureInfo.h"
#include "EquipmentTextureData.generated.h"

USTRUCT(BlueprintType)
struct FEquipmentTextureData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentTextureInfo> WeaponStanceTextures;
    
    MAJESTY_API FEquipmentTextureData();
};

