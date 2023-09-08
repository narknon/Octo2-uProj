#pragma once
#include "CoreMinimal.h"
#include "ELEVEL_TYPE.h"
#include "ELevelTransitionNotice.h"
#include "LevelTransitionNoticeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLevelTransitionNoticeDelegate, FName, levelId, ELEVEL_TYPE, levelType, ELevelTransitionNotice, notice);

