#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPATH_TYPE.h"
#include "FieldPathInfoData.h"
#include "SplineMoveComponent.generated.h"

class UPathSplineComponent;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API USplineMoveComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNearPlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPathZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBaseCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOverCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nChangeDirCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nChangeDirCntDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_fArrivalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPathDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPathSplineComponent* m_pPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMoveDiffCheck;
    
public:
    USplineMoveComponent();
protected:
    UFUNCTION(BlueprintCallable)
    bool SetUpSplineData(UPathSplineComponent* uGetSpline, EPATH_TYPE eType);
    
    UFUNCTION(BlueprintCallable)
    void SetUpFieldPathData(FFieldPathInfoData InfoData);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetSplineMovePointSetting(const USplineComponent* uSpline);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMoveStopEvent(bool Enable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetFirstPosition(const USplineComponent* uSpline);
    
    UFUNCTION(BlueprintCallable)
    bool NPCCharacterMoving(const USplineComponent* uSpline, float fDeltaTime, float fWaitTime, float fSearchRange);
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsEndPointArrived(const USplineComponent* uSpline);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetNowMoveSpeed(const USplineComponent* uSpline);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugSplineMoveParam();
    
private:
    UFUNCTION(BlueprintCallable)
    float GetCurrentSplinePosition(const USplineComponent* uSpline);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckTalkEffectVisible();
    
    UFUNCTION(BlueprintCallable)
    void CheckNearPlayer(float fWaitTime, float fSearchRange);
    
    UFUNCTION(BlueprintCallable)
    bool CheckContactPlayerInterval(float fDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool CalcStartCheck(float fDelatTime);
    
};

