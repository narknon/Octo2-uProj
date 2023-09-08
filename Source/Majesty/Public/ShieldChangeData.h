#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ShieldChangeData.generated.h"

USTRUCT(BlueprintType)
struct FShieldChangeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nShieldPointMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strInfomationText;
    
    MAJESTY_API FShieldChangeData();
};

