#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "ENOTICE_TYPE.h"
#include "NoticeArgs.h"
#include "FlagRandomControlManager.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API AFlagRandomControlManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
    AFlagRandomControlManager(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable)
    void OnStartTimeZoneChange(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnStartLevelChange(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
};

