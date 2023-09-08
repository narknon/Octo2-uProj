#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "WeaponMasterEventDataBase.h"
#include "WeaponMasterEventDbUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UWeaponMasterEventDbUtil : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UWeaponMasterEventDbUtil();
    UFUNCTION(BlueprintCallable)
    static bool GetWeaponMasterEventLabel(FName& outEventLabel, const FName& RowName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWeaponMasterEventDataByRowName(FWeaponMasterEventDataBase& OutData, const FName& RowName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWeaponMasterDialogTextLabel(FName& outTextLabel, const FName& RowName);
    
};

