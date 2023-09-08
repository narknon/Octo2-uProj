#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EquippedItemData.generated.h"

USTRUCT(BlueprintType)
struct FEquippedItemData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EquippedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EquipCHaracterIdMask;
    
    MAJESTY_API FEquippedItemData();
};

