#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EDBNoticeType.h"
#include "AchievementDataTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UAchievementDataTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UAchievementDataTableUtility();
    UFUNCTION(BlueprintCallable)
    static void NotifyAchievementDb(FName dbName, EDBNoticeType notice);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAchievementAllLabels();
    
};

