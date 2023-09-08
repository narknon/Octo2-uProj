#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMAINSEQ_TYPE.h"
#include "EPRIORITY.h"
#include "EREQUEST_TYPE.h"
#include "MainSequenceStateParam.h"
#include "StateDataBase.generated.h"

UCLASS(Abstract, Blueprintable)
class MAJESTY_API UStateDataBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMAINSEQ_TYPE m_SeqType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMAINSEQ_TYPE m_BeforeSeqType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMAINSEQ_TYPE m_NextSeqType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EREQUEST_TYPE m_ExecRequestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EREQUEST_TYPE> m_RequestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainSequenceStateParam m_Param;
    
    UStateDataBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateState();
    
    UFUNCTION(BlueprintCallable)
    void SetStateParam(FMainSequenceStateParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EPRIORITY GetPriority();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ChangeState(EMAINSEQ_TYPE Type);
    
};

