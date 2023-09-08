#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EBalloonType.h"
#include "EEMOTION_TYPE.h"
#include "EEVENT_FADE_TYPE.h"
#include "EEventBalloonDir.h"
#include "EKSCameraType.h"
#include "EKSCharacterAction.h"
#include "EKSCharacterAnimationLoop.h"
#include "EKSCharacterDir.h"
#include "ERICHEVENT_CMD.h"
#include "EventEmotion.h"
#include "RichEventCommandObject.generated.h"

class AActor;
class AKSCharacterBase;
class ULevelSequencePlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API URichEventCommandObject : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* m_pTargetMainSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsStopMainSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPlaybackSubSeqPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFadeTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEventEmotion> EventEmotionList;
    
public:
    URichEventCommandObject();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TitlePauseFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SubSequencePlayIndexFunction(int32 nNumLoops, float fSubSeqPlayPosition, int32 nIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SubSequencePlayFunction(int32 nNumLoops, float fSubSeqPlayPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopSubSequenceIndexFunction(int32 nIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopSubSequenceFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopSubSequenceAction(ULevelSequencePlayer* Sequence);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopRichEventBgmFunction(float fFadeOutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopEmotionFunction(FName TagName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartPlayEmotionFunction(FName TagName, EEMOTION_TYPE EmotionType, float LifeTime, FVector Offset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartCameraSpawnFunction(EKSCameraType CameraType, float fBlend);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartBattleFunction(const FString& EnemyGroup, const FString& FinishEvent, bool EventBattle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnCharaFunction(AKSCharacterBase* EventChara, FName CharaLabelName, EKSCharacterDir SetDir, FName AddTagName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowDebugInfoTextFunction(const FString& Text, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSubSequenceOptionFunction(int32 Index, FName OptionName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerPositionFunction(FVector Position);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHouseModeFunction(bool In, FName TargetBP, bool DoorOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RestartSubSequenceFunction(int32 nIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayRichEventSeFunction(FName strSeLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayRichEventBgmMapFunction(float fFadeOutTime, float fFadeInTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayRichEventBgmFunction(FName strBgmLabel, float fFadeOutTime, float fFadeInTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayRichEventBgmBlockFunction(int32 nBlockId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NarrationPlayFunction(FName strNarrationLabel, bool StopMainSequence, float fPlaybackSubSeqPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName MoveSpotLightTargetFunction(AActor* Actor, FVector AddOffset);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitSeqData();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeOutTypeSelectFunction(EEVENT_FADE_TYPE FadeType, const FLinearColor Color);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeOutFunction(float EndTime, const FLinearColor Color);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeInTypeSelectFunction(EEVENT_FADE_TYPE FadeType, const FLinearColor Color);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeInFunction(float EndTime, const FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void End();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetachCharacterFunction(AKSCharacterBase* EventChara);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeVolumeEnvFunction(float fVolume, float fFadeTime);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeUpdateCommand(ERICHEVENT_CMD eType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeCameraFunction(EKSCameraType CameraType, float fBlend);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeActionFunction(AKSCharacterBase* EventChara, EKSCharacterAction ActionLabelName, int32 frame, EKSCharacterAnimationLoop LoopSetting, EKSCharacterDir SetDir);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BalloonOpenLabelPlayerFunction(EBalloonType BalloonType, EEventBalloonDir BalloonDir, FName TalkTargetName, FName TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BalloonOpenLabelFunction(FName TalkTargetTag, EBalloonType BalloonType, EEventBalloonDir BalloonDir, FName TalkTargetName, FName TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BalloonOpenFunction(FName TalkTargetTag, EBalloonType BalloonType, EEventBalloonDir BalloonDir, FName TalkTargetName, const FString& TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AttachPlayerFunction(AKSCharacterBase* EventChara, EKSCharacterDir SetDir);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AttachCharacterChangeCollisionFunction(AKSCharacterBase* EventChara, bool Enable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AttachCharacterActionFunction(AKSCharacterBase* EventChara, EKSCharacterAction ActionLabelName, int32 frame, EKSCharacterAnimationLoop LoopSetting, EKSCharacterDir SetDir);
    
};

