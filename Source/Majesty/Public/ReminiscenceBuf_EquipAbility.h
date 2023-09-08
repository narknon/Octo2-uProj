#pragma once
#include "CoreMinimal.h"
#include "AcquisitionAbilityData.h"
#include "ReminiscenceBuf_EquipAbility.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceBuf_EquipAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Support;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAcquisitionAbilityData> AbilityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcquisitionAbilityData AdvancedAbility;
    
    MAJESTY_API FReminiscenceBuf_EquipAbility();
};

