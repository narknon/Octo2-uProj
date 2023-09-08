#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "ENOTICE_TYPE.h"
#include "NoticeArgs.h"
#include "NoticeDelegateBPDelegate.h"
#include "NoticeDelegateManager.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ANoticeDelegateManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
    ANoticeDelegateManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static bool Static_BroadcastNotice(ENOTICE_TYPE noticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOneShotNoticeDelegate(ENOTICE_TYPE noticeType, FNoticeDelegateBP noticeDelegate);
    
    UFUNCTION(BlueprintCallable)
    void RegisterOneShotNoticeDelegate(ENOTICE_TYPE noticeType, FNoticeDelegateBP noticeDelegate);
    
    UFUNCTION(BlueprintCallable)
    void RegisterNoticeDelegate(ENOTICE_TYPE noticeType, FNoticeDelegateBP noticeDelegate);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastNotice(ENOTICE_TYPE noticeType, const FNoticeArgs& NoticeArgs);
    
};

