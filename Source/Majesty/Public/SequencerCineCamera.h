#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "ESEQ_CAMERA_MODE.h"
#include "SequencerCineCamera.generated.h"

class AActor;
class UCameraComponent;

UCLASS(Blueprintable)
class MAJESTY_API ASequencerCineCamera : public ACineCameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESEQ_CAMERA_MODE m_ESeqMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLimitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNowTime;
    
public:
    ASequencerCineCamera(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSepiaStart(UCameraComponent* TargetCamera, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSepiaEnd(UCameraComponent* TargetCamera, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMonochromeStart(UCameraComponent* TargetCamera, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMonochromeEnd(UCameraComponent* TargetCamera, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetupCamera(AActor* pTarget);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSepiaMode(float ChangeTime, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMonochromeMode(float ChangeTime, bool Enable);
    
};

