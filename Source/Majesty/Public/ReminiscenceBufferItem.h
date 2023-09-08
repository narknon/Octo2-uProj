#pragma once
#include "CoreMinimal.h"
#include "ReminiscenceBufferBase.h"
#include "ReminiscenceBufferItem.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceBufferItem : public FReminiscenceBufferBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Org_ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Org_ItemNum;
    
public:
    MAJESTY_API FReminiscenceBufferItem();
};

