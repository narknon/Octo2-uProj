#pragma once
#include "CoreMinimal.h"
#include "ELEVEL_TYPE.h"
#include "ELevelLoaderNotice.h"
#include "LevelLoaderNoticeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLevelLoaderNoticeDelegate, FName, levelName, ELEVEL_TYPE, levelType, ELevelLoaderNotice, notice);

