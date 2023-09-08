#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "EVibrationPower.h"
#include "PlayRequest.h"
#include "VibrationManager.generated.h"

class UAudioComponent;
class USoundSubmixBase;

UCLASS(Blueprintable)
class MAJESTY_API AVibrationManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayRequest LastPlayRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_Ps5VibratonComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmixBase* m_SoundSubmixForPS5Vibration;
    
public:
    AVibrationManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayVibrationByLabel(FName vibLabel, float Power, bool Loop, int32 LoopInterval);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayVibration2ByLabel(FName vibLabel, EVibrationPower Power, bool Loop, int32 LoopInterval);
    
    UFUNCTION(BlueprintCallable)
    bool PlayVibration(FName VibrationLabel, int32 PlayIndex, float Power, bool Loop, int32 LoopInterval);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForcePlayVibrationByLabel(FName vibLabel, float Power, bool Loop, int32 LoopInterval);
    
};

