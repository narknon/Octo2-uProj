#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETimeZoneObjectType.h"
#include "TimeZoneParamBase.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ATimeZoneParamBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 m_nIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeZoneObjectType m_eType;
    
    ATimeZoneParamBase(const FObjectInitializer& ObjectInitializer);
};

