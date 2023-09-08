#pragma once
#include "CoreMinimal.h"
#include "EWEAPON_UNLOAD_GC_TYPE.h"
#include "WeaponTexutreUnloadManage.generated.h"

USTRUCT(BlueprintType)
struct FWeaponTexutreUnloadManage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_strLoadWeaponLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_strUnLoadWaitWeaponLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWEAPON_UNLOAD_GC_TYPE m_eUnlaodGCType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uUnloadWeaponCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uUnloadWeaponCntMax;
    
    MAJESTY_API FWeaponTexutreUnloadManage();
};

