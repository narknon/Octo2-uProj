#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EEndRollFlowState.h"
#include "EEndRollSegmentSet.h"
#include "EEndRollSegmentState.h"
#include "EndRollSegmentData.h"
#include "EndRollFlowManager.generated.h"

class UEndRollSegmentPlayData;

UCLASS(Blueprintable)
class MAJESTY_API AEndRollFlowManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndRollFlowState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StagingTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEndRollSegmentPlayData*> SegmentList;
    
public:
    AEndRollFlowManager(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStagingTime(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSegments();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateManager(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void StopEndRoll();
    
    UFUNCTION(BlueprintCallable)
    void StartEndroll();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SegmentTransitionCallback(UEndRollSegmentPlayData* Segment);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetEndRoll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginPlay();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSegmentsCompleted() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyEndRoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingEndRoll() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayDebugInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEndRollSegmentSet GetNextPlaySegmentID();
    
    UFUNCTION(BlueprintCallable)
    void DebugUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CreateSegmentPlayData();
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(EEndRollFlowState NextState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangeSegmentTransition(EEndRollSegmentState State, UEndRollSegmentPlayData* Segment);
    
    UFUNCTION(BlueprintCallable)
    void AddSegment(UPARAM(Ref) FEndRollSegmentData& segmentData, EEndRollSegmentSet segSetID, bool IsEnable, float startEvImageTime, float startBattleTime, float EndTime, float wipeTime);
    
};

