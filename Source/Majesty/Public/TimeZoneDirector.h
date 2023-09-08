#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimeZoneDirector.generated.h"

class ATimeZoneEmitterParam;
class ATimeZoneLightParam;
class ATimeZoneSoundParam;
class UTimeZoneComponentBase;
class UTimeZoneEmitterComponent;
class UTimeZoneLightComponent;
class UTimeZoneSoundComponent;

UCLASS(Blueprintable)
class MAJESTY_API ATimeZoneDirector : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTimeZoneComponentBase*> m_pcTimeZoneComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTimeZoneLightComponent*> m_pcLightList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATimeZoneLightParam*> m_pcLightParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTimeZoneEmitterComponent*> m_pcEmitterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATimeZoneEmitterParam*> m_pcEmitterParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTimeZoneSoundComponent*> m_pcSoundList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATimeZoneSoundParam*> m_pcSoundParamList;
    
    ATimeZoneDirector(const FObjectInitializer& ObjectInitializer);
};

