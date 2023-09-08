#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InventorItemData.generated.h"

USTRUCT(BlueprintType)
struct FInventorItemData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInventorItemReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExecCreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nInventorTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nInventorTurnMax;
    
    MAJESTY_API FInventorItemData();
};

