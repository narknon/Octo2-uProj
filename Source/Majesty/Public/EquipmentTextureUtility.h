#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EWEAPON_STANCE.h"
#include "EquipmentTextureData.h"
#include "EquipmentTextureUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UEquipmentTextureUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEquipmentTextureUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetResourceLabel(const FEquipmentTextureData& EquipmentTextureData, EWEAPON_STANCE stance, bool bGetNPC);
    
};

