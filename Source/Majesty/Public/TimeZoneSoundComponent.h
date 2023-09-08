#pragma once
#include "CoreMinimal.h"
#include "TimeZoneComponentBase.h"
#include "TimeZoneSoundComponent.generated.h"

class ATimeZoneSoundParam;
class UAtomComponent;
class USoundAtomCue;
class UTimeZoneEmitterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UTimeZoneSoundComponent : public UTimeZoneComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCue*> m_apSoundCueList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* m_apAtomSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATimeZoneSoundParam* m_pcParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimeZoneEmitterComponent* m_pcParentEmitterComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* m_pcCurrentSoundAtomCue;
    
    UTimeZoneSoundComponent();
};

