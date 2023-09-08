#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeakChangeData.generated.h"

USTRUCT(BlueprintType)
struct FWeakChangeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_eWeakAttributeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strInfomationText;
    
    MAJESTY_API FWeakChangeData();
};

