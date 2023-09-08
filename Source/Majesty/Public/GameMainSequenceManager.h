#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "EMAINSEQ_TYPE.h"
#include "EREQUEST_TYPE.h"
#include "MainSequneceRequestParam.h"
#include "TransitionData.h"
#include "GameMainSequenceManager.generated.h"

class UStateDataBase;

UCLASS(Blueprintable)
class MAJESTY_API AGameMainSequenceManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStateDataBase*> m_SequenceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMAINSEQ_TYPE m_CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMAINSEQ_TYPE m_BeforeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_RequestFlowIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EREQUEST_TYPE, FMainSequneceRequestParam> m_RequestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMainSequneceRequestParam> m_HoldingRequestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EREQUEST_TYPE, FTransitionData> m_TrandisitonSeqType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStateDataBase*> m_BackGroundData;
    
public:
    AGameMainSequenceManager(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    bool RequestCheck(EMAINSEQ_TYPE& Type, EREQUEST_TYPE& PassingRequest);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsBattleMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMainSequneceRequestParam> GetHoldingRequestList();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_ShowMainSequenceInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_ChangeState(EMAINSEQ_TYPE Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckNextFlow(EMAINSEQ_TYPE& Type);
    
    UFUNCTION(BlueprintCallable)
    void CheckHoldingRequest();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCurrentState(EMAINSEQ_TYPE CheckType);
    
    UFUNCTION(BlueprintCallable)
    void AddRequest(EREQUEST_TYPE Type, FMainSequneceRequestParam Param);
    
};

