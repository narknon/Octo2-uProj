#pragma once
#include "CoreMinimal.h"
#include "ETUTORIAL_TYPE.h"
#include "SaveDataUtilBase.h"
#include "TutorialSaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UTutorialSaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    UTutorialSaveDataUtil();
    UFUNCTION(BlueprintCallable)
    static void SetTutorialListFlagFromLabel(FName FlagPartLabel, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetTutorialListFlag(ETUTORIAL_TYPE Type, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetOpenedTutorialFromLabel(FName FlagPartLabel, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetOpenedTutorial(ETUTORIAL_TYPE Type, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanDisplayBranchMainStory(int32 CharacterID, bool bDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsViewTutorialListFromLabel(FName FlagPartLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsViewTutorialList(ETUTORIAL_TYPE Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenedTutorial(ETUTORIAL_TYPE Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanDisplayBranchMainStory(int32 CharacterID);
    
};

