#pragma once
#include "CoreMinimal.h"
#include "LanternCheckData.generated.h"

USTRUCT(BlueprintType)
struct MAJESTY_API FLanternCheckData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Equip;
    
    FLanternCheckData();
};

