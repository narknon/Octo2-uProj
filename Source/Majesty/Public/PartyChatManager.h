#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "ENOTICE_TYPE.h"
#include "EREQUEST_RESULT.h"
#include "NoticeArgs.h"
#include "PartyChat.h"
#include "PartyChatManager.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API APartyChatManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsInBar;
    
public:
    APartyChatManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static bool Static_PlayPartyChatFromMissionRecord(const FName& PartyChatLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool Static_PlayAvailablePartyChat();
    
    UFUNCTION(BlueprintCallable)
    static bool Static_IsAvailablePartyChat();
    
    UFUNCTION(BlueprintCallable)
    bool PlayPartyChatFromMissionRecord(const FName& PartyChatLabel);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAvailablePartyChat();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateMainStoryTask(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateMainStory(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnStartEvent(EREQUEST_RESULT Result);
    
    UFUNCTION(BlueprintCallable)
    void OnRefreshPartyCharacter(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelChanged(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinPlayerCharacter(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishPartyChat(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterOrExitBar(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteMainStory(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeHolyTorchState();
    
    UFUNCTION(BlueprintCallable)
    void OnCalledEventEndProcess();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailablePartyChat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayingPartyChatData(FPartyChat& OutData) const;
    
    UFUNCTION(BlueprintCallable)
    void Debug_ForcePlayPartyChat(const FName& PartyChatLabel);
    
};

