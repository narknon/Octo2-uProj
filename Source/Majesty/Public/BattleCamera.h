#pragma once
#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "CineCameraComponent.h"
#include "CineCameraComponent.h"
#include "CineCameraActor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Scene.h"
#include "BattleCameraInitData.h"
#include "EBATTLE_CAMERA_TYPE.h"
#include "EBATTLE_RESULT_TYPE.h"
#include "EBATTLE_TARGET_TYPE.h"
#include "EBREAK_CAMERA_TYPE.h"
#include "BattleCamera.generated.h"

class AActionCommandBase;
class ABattleCharacterBase;
class UCurveFloat;

UCLASS(Blueprintable)
class MAJESTY_API ABattleCamera : public ACineCameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleCameraInitData m_cCameraInitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_CAMERA_TYPE m_eCameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform m_cResumeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform m_cStartTransformForTargetFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform m_cGoalTransformForTargetFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform m_sBaseTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CameraTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCameraWaitMove;
    
    ABattleCamera(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartResulttCamera(EBATTLE_RESULT_TYPE eResultType, bool bIsFront);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartEnemyDeadCamera(EBREAK_CAMERA_TYPE eBreakType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartEncountCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartBreakCamera(EBREAK_CAMERA_TYPE eBreakType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAbilityCamera(int32 nBoostLevel, EBATTLE_TARGET_TYPE eTargetType, int32 nSlideFrame, AActionCommandBase* cActionCommand, bool bEnemySide, bool bIsFront, FName strAbilityName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupBaseTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTargetFocusCamera(EBATTLE_TARGET_TYPE eTargetType, ABattleCharacterBase* cTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInterpolationCurveForAbilityCamera(UCurveFloat* cInterpolationCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCameraWaitMove(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCameraTransform(FTransform cTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResumeWaitMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetTargetFocusCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetCameraTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostCameraTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterpolationResultCamera(float fRatio, ACineCameraActor* cTargetCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterpolationBattleCamera(UCurveFloat* cInterpolationCurve, float fRatio, ACineCameraActor* cTargetCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterpolationAbilityCamera(float fRatio, ACineCameraActor* cTargetCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetLastLookatTrackingRotation(ACineCameraActor* cTargetCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastLookatTrackingPosition(ACineCameraActor* cTargetCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCameraInitParameterForAbilityCamera(FPostProcessSettings& outPostSetting, FCameraFocusSettings& outFocusSetting, FCameraFilmbackSettings& outFilmbackSetting, FCameraLensSettings& outLensSetting, float& outCurrentAperture, float& outFOV);
    
    UFUNCTION(BlueprintCallable)
    void GetAudioListenerPosition(FVector& OutLocation, FVector& outFrontDir, FVector& outRightDir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FixBattleCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishResultCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishEncountCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishBreakCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishAbilityCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckZeroRotator(FRotator cRotator);
    
};

