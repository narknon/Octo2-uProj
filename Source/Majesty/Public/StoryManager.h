#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "ENOTICE_TYPE.h"
#include "NoticeArgs.h"
#include "StoryManager.generated.h"

UCLASS(Blueprintable)
class AStoryManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_StartSubStoryLabel;
    
public:
    AStoryManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool StartMainStory(FName MainStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSubStoryStartUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSubStoryResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishSubStoryStartEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishSubStoryCompleteEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishMainStoryEvent(ENOTICE_TYPE noticeType, const FNoticeArgs& Args);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_StartAutoPlay(const FString& scenarioFileName);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_ShowDebugInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void Debug_PlayMainStoryTaskEvent(int32 mainStoryTaskId, bool bFromStartingTask);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CompleteFakeSubStory(FName subStoryLabel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallbackOnDialogCloseFinish(int32 SelectIndex);
    
    UFUNCTION(BlueprintCallable)
    void CallbackEventEnd(ENOTICE_TYPE noticeType, const FNoticeArgs& Args);
    
};

