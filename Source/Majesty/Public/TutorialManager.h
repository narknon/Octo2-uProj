#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "DataTableTutorialList.h"
#include "DataTableTutorialPageData.h"
#include "ETUTORIAL_TYPE.h"
#include "TutorialFinishEventDelegate.h"
#include "TutorialFlagPart.h"
#include "TutorialManager.generated.h"

class UUITutorialBase;

UCLASS(Blueprintable)
class MAJESTY_API ATutorialManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialFinishEvent TutorialFinishEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETUTORIAL_TYPE TutorialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RequestCharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETUTORIAL_TYPE> RequestTutorialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableTutorialList TutorialListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialFlagPart TutorialFlagPartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUITutorialBase* UITutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEpilouge;
    
public:
    ATutorialManager(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMain();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFinish();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTutorialData(ETUTORIAL_TYPE Type, bool& FindData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenTutorialListData(FDataTableTutorialList ListData, bool AutoPushPop, bool ForcedDisplay, bool& IsOpen, UUITutorialBase*& Tutorial);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenTutorialFromLabel(FName Label, bool ForcedDisplay, bool& IsOpen, int32 CharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenTutorial(ETUTORIAL_TYPE Type, bool ForcedDisplay, bool& IsOpen, int32 CharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenEndCardEpilogue(ETUTORIAL_TYPE Type, bool ForcedDisplay, bool& IsOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenEndCard(ETUTORIAL_TYPE Type, bool ForcedDisplay, bool& IsOpen, int32 CharaID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTutorialFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnStateFinish();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsRunningTutorial();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExsistRequest();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetTutorialPageDataFromFlagPartLabels(TArray<FName> FlagPartLabels, TArray<FDataTableTutorialPageData>& PageData);
    
    UFUNCTION(BlueprintCallable)
    void GetTutorialPageData(TArray<FDataTableTutorialPageData>& PageData, bool CheckNextPage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequestCharaID();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetPageLabelIndex(int32 CharacterID, int32& PageLabelIndex);
    
    UFUNCTION(BlueprintCallable)
    void ForceTutorialClose(bool RequestClear);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteTutorialFinishEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CheckOpendTutorialList(TArray<FName>& OpenedFlagPartLabels);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateMain();
    
};

