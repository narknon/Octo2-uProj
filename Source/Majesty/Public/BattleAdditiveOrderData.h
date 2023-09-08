#pragma once
#include "CoreMinimal.h"
#include "EADDITIVE_ORDER_TYPE.h"
#include "EATTRIBUTE_TYPE.h"
#include "BattleAdditiveOrderData.generated.h"

class ABattleCharacterBase;

USTRUCT(BlueprintType)
struct MAJESTY_API FBattleAdditiveOrderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EADDITIVE_ORDER_TYPE m_eOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cOrderEnforcer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strExecAbilityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strExecAilmentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EATTRIBUTE_TYPE m_eAttributeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nAddValue01;
    
    FBattleAdditiveOrderData();
};

