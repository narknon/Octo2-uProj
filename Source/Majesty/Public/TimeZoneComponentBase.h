#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETimeZoneObjectType.h"
#include "TimeZoneComponentBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UTimeZoneComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeZoneObjectType m_eType;
    
    UTimeZoneComponentBase();
};

