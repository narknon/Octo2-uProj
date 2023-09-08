#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGiftType.h"
#include "GiftItemDataSet.h"
#include "GiftData.generated.h"

USTRUCT(BlueprintType)
struct FGiftData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GiftTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGiftType GiftType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReceivedFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGiftItemDataSet> ItemDataSets;
    
    MAJESTY_API FGiftData();
};

