#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NPCHearInfoDataBase.generated.h"

USTRUCT(BlueprintType)
struct FNPCHearInfoDataBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotificationID;
    
    MAJESTY_API FNPCHearInfoDataBase();
};

