#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CloseFinishCallbackDelegate.h"
#include "EJudgeFastTravelAvailableResponse.h"
#include "WorldMapTable.h"
#include "WorldMapFastTraveler.generated.h"

class UWorldMapIconBase;

UCLASS(Blueprintable)
class MAJESTY_API AWorldMapFastTraveler : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldMapTable m_TargetWorldMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloseFinishCallback m_OnCloseConfirmDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloseFinishCallback m_OnCloseFailedDialog;
    
public:
    AWorldMapFastTraveler(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPossibleFastTravel(const FWorldMapTable& WorldMapData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecOnCloseFailedDialogCallback(int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void ExecOnCloseConfirmDialogCallback(int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EJudgeFastTravelAvailableResponse ExecFastTravelIfPossible(const FWorldMapTable& DestinationData, const FCloseFinishCallback& OnCloseConfirmDialog, const FCloseFinishCallback& OnCloseFailedDialog);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DEBUG_GetIsForceFastTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanFastTravelSomeWhere(const TMap<FName, UWorldMapIconBase*>& Icons);
    
};

