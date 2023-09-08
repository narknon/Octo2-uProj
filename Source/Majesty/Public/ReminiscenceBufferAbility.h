#pragma once
#include "CoreMinimal.h"
#include "ReminiscenceBuf_EquipAbility.h"
#include "ReminiscenceBufferBase.h"
#include "ReminiscenceBufferAbility.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceBufferAbility : public FReminiscenceBufferBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReminiscenceBuf_EquipAbility> Org_EquipAbility;
    
public:
    MAJESTY_API FReminiscenceBufferAbility();
};

