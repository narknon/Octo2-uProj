#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponMasterEventDataBase.generated.h"

USTRUCT(BlueprintType)
struct FWeaponMasterEventDataBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DialogText;
    
    MAJESTY_API FWeaponMasterEventDataBase();
};

