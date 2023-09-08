#pragma once
#include "CoreMinimal.h"
#include "ReminiscenceBufferBase.h"
#include "SaveEquipmentDataID.h"
#include "ReminiscenceBufferEquipment.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceBufferEquipment : public FReminiscenceBufferBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveEquipmentDataID> Org_Equipment;
    
public:
    MAJESTY_API FReminiscenceBufferEquipment();
};

