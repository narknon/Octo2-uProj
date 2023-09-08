#pragma once
#include "CoreMinimal.h"
#include "ETUTORIAL_TYPE.h"
#include "TutorialFinishEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialFinishEvent, ETUTORIAL_TYPE, TutorialType);

