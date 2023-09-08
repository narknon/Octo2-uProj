#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "ENOTICE_TYPE.h"
#include "NoticeArgs.h"
#include "ObjectVisibilityData.h"
#include "ObjectVisibilityManager.generated.h"

UCLASS(Blueprintable)
class AObjectVisibilityManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FObjectVisibilityData> m_ObjectVisibilityRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FObjectVisibilityData> m_ObjectVisibilityDataCashe;
    
public:
    AObjectVisibilityManager(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void OnLevelChangeStart(ENOTICE_TYPE noticeType, const FNoticeArgs& Args);
    
};

