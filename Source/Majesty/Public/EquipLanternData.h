#pragma once
#include "CoreMinimal.h"
#include "LanternCheckData.h"
#include "EquipLanternData.generated.h"

USTRUCT(BlueprintType)
struct MAJESTY_API FEquipLanternData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLanternCheckData> EquipLanternDayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLanternCheckData> EquipLanternNight;
    
    FEquipLanternData();
};

