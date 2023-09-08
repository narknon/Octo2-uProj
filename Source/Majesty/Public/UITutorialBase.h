#pragma once
#include "CoreMinimal.h"
#include "DataTableTutorialPageData.h"
#include "ETUTORIAL_TYPE.h"
#include "KSUserWidgetBase.h"
#include "UITutorialBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UUITutorialBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UUITutorialBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenTutorial(const TArray<FDataTableTutorialPageData>& TopPageData, ETUTORIAL_TYPE TutorialType, bool IsEndCard, bool IsEpilouge);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ForceTutorialClose();
    
};

