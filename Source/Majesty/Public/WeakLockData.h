#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeakLockData.generated.h"

USTRUCT(BlueprintType)
struct FWeakLockData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_eWeakLockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strInfomationText;
    
    MAJESTY_API FWeakLockData();
};

