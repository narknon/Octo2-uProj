#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EDBNoticeType.h"
#include "AchievementTypeDataTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UAchievementTypeDataTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UAchievementTypeDataTableUtility();
    UFUNCTION(BlueprintCallable)
    static void NotifyAchievementTypeDb(FName dbName, EDBNoticeType notice);
    
};

