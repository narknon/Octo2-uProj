#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ENOTICE_TYPE.h"
#include "NoticeArgs.h"
#include "MapDoorObjectBase.generated.h"

class ALevelTriggerActor;

UCLASS(Blueprintable)
class MAJESTY_API AMapDoorObjectBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ALevelTriggerActor> m_TargetLevelTrigger;
    
public:
    AMapDoorObjectBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDoor();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseMainMenu(ENOTICE_TYPE noticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDoor();
    
};

