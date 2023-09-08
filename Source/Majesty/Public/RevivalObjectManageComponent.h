#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ENOTICE_TYPE.h"
#include "NoticeArgs.h"
#include "RevivalObjectManageComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API URevivalObjectManageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URevivalObjectManageComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnStartLevelChange(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
};

