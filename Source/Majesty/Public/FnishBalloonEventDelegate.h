#pragma once
#include "CoreMinimal.h"
#include "EBalloonEventType.h"
#include "EBalloonType.h"
#include "FnishBalloonEventDelegate.generated.h"

class AKSCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFnishBalloonEvent, EBalloonEventType, EventName, EBalloonType, BalloonType, AKSCharacterBase*, TargetCharacter);

