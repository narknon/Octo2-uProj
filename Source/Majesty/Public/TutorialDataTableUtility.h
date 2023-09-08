#pragma once
#include "CoreMinimal.h"
#include "DataTableTutorialList.h"
#include "DataTableTutorialPageData.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "TutorialFlagPart.h"
#include "TutorialDataTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UTutorialDataTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UTutorialDataTableUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 TutorialPageLabelToID(FName TutorialListLable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TutorialPageIDToLabel(int32 TutorialListID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 TutorialListLabelToID(FName TutorialListLable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TutorialListIDToLabel(int32 TutorialListID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialPageRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialPageRowDataByLabel_RC(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FDataTableTutorialPageData& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialPageRowDataByLabel(FDataTableTutorialPageData& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialPageRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FDataTableTutorialPageData& OutData, int32 TargetID, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialListRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialListRowDataByLabel_RC(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FDataTableTutorialList& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialListRowDataByLabel(FDataTableTutorialList& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialListRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FDataTableTutorialList& OutData, int32 TargetID, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialFlagPartRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialFlagPartByID(FTutorialFlagPart& OutData, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialFlagPart(FTutorialFlagPart& OutData, FName Label);
    
    UFUNCTION(BlueprintCallable)
    static void GetOpenedTutorialFlagPart(TArray<FName>& OutNames, bool CheckCharaSort);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_GetShowAllList();
    
};

