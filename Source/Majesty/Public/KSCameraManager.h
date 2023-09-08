#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AcqManagerBase.h"
#include "EKSCameraType.h"
#include "ENOTICE_TYPE.h"
#include "NoticeArgs.h"
#include "KSCameraManager.generated.h"

class AActor;
class UCameraComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class MAJESTY_API AKSCameraManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EncountCapture;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCameraType ActiveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCameraType OldType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CameraTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCameraComponent*> CameraComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USpringArmComponent*> SpringArmComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> RelativeCameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDefaultFieldFocusDistance;
    
public:
    AKSCameraManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetFieldFoucusDistance(float fFoucusDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetComponent(EKSCameraType eType, AActor* Target, UCameraComponent* Camera, USpringArmComponent* SpringArm);
    
    UFUNCTION(BlueprintCallable)
    bool SetCameraActive(EKSCameraType eType, float fBlend);
    
    UFUNCTION(BlueprintCallable)
    void ResetFieldFoucusDistance();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLevelChangeCompleted(ENOTICE_TYPE noticeType, const FNoticeArgs& Args);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget(EKSCameraType eType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpringArmComponent* GetSpringArm(EKSCameraType eType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRelativeCameraLocation(EKSCameraType eType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSCameraType GetCurrentCameraType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetCameraComponent(EKSCameraType eType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpringArmComponent* GetActiveSpringArm();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActiveCameraTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetActiveCameraComponent();
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdatePlayerCameraManager(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleEndScreenShot();
    
};

