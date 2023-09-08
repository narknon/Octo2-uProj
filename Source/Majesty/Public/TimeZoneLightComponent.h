#pragma once
#include "CoreMinimal.h"
#include "TimeZoneComponentBase.h"
#include "TimeZoneLightComponent.generated.h"

class ATimeZoneLightParam;
class ULightComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UTimeZoneLightComponent : public UTimeZoneComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULightComponent*> m_apLightList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATimeZoneLightParam* m_cParam;
    
    UTimeZoneLightComponent();
};

