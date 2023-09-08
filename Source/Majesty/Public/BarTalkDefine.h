#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BarTalkDefine.generated.h"

USTRUCT(BlueprintType)
struct FBarTalkDefine : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NormalEventList;
    
    MAJESTY_API FBarTalkDefine();
};

