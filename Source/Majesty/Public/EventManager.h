#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AcqManagerBase.h"
#include "EAWAKENING_MONSTER_PARAM.h"
#include "EEventPlayBGM.h"
#include "EEventTheater.h"
#include "EEventUpdateType.h"
#include "EKSCharacterDir.h"
#include "EKSEVENT_PLAY.h"
#include "EKSPartySet.h"
#include "ENOTICE_TYPE.h"
#include "EPlayableCharacterID.h"
#include "ESPAWN_CHARA_TYPE.h"
#include "EventAtomSoundData.h"
#include "MajEventData.h"
#include "EventEffect.h"
#include "EventEmotion.h"
#include "EventFinishDelegate.h"
#include "EventListData.h"
#include "EventPlayData.h"
#include "NoticeArgs.h"
#include "SubSeqData.h"
#include "EventManager.generated.h"

class AEndRollFlowManager;
class AEventTargetBase;
class AKSCharacterBase;
class AKSObjectBase;
class ALevelSequenceActor;
class AWeaponMasterEventFlow;
class UBalloonBase;
class UCameraComponent;
class UDataTable;
class ULevelSequence;
class ULevelSequencePlayer;
class UMaterial;
class UMaterialInstanceDynamic;
class UMaterialParameterCollection;
class UPartyChatBase;
class URichEventCommandBase;
class UTexture;
class UTexture2D;
class UUIFlashbackBase;

UCLASS(Blueprintable)
class MAJESTY_API AEventManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TArray<FEventAtomSoundData> AtomCueArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    UMaterialParameterCollection* m_pMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FString JsonFilename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TArray<FEventData> EventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    int32 EventIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    int32 EndIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    UDataTable* EventListDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    AKSCharacterBase* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    AKSCharacterBase* PlayActionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    AKSObjectBase* TargetObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    AKSCharacterBase* EventTargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TArray<FString> EventArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    float CommandTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    int32 TalkIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    int32 ActiveTalkIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FString PlayEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FString NextEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TArray<FName> DialogEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    int32 BattleEndNextEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FString BattleEndNextEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FString BattleEndDefeatNextEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    AEventTargetBase* CameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true), Category="Octo2")
    UCameraComponent* ActiveCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FVector CameraTrackStartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FVector CameraTrackEndPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FVector CameraTrackPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    float CameraTrackEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    float CameraTrackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool m_bCameraDecelerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TArray<AKSObjectBase*> ObjectArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FEventListData PlayEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    int32 TempPlayEventSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true), Category="Octo2")
    UBalloonBase* EventBalloon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true), Category="Octo2")
    UUIFlashbackBase* EventFlashback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TArray<UMaterial*> PostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TArray<UMaterialInstanceDynamic*> PostProcessMaterialDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TMap<int32, FEventEffect> EventEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TMap<int32, FEventEmotion> EventEmotionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool EventBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool BeforEventBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool IgnoreFootStepSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true), Category="Octo2")
    UPartyChatBase* PartyChatWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool IsRichEventLoadResourceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    int32 RandomNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool IsCreateRandomNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool ExecFinishPre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool RefreshEventFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool RefreshEventObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool EditPlayerPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool EditCameraLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool EditPlayerCharacterEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    int32 FirstCharacterSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    int32 LastFlagChangeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    int32 LastFadeOutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool RefreshPlayerFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool ContinueEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    float TempTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FVector TempVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    AKSCharacterBase* EventMoveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TArray<TSoftObjectPtr<UTexture2D>> FlashBackTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FVector CameraLockPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool CameraLockFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    AEndRollFlowManager* TempEndrollManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    int32 EndrollFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    EEventTheater TheaterStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    int32 EventStartLevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FVector PlayerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    EKSCharacterDir PlayerDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FName RestoreHouseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FName RestoreBGMLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool IsPlayEventForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool IsSequencerSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool IsTempChangeTimeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    UTexture* SepiaLUT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FVector GRAY_SCALE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FVector GRAY_ALPHA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FVector SEPIA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    ALevelSequenceActor* m_pcMainSeqActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TArray<ALevelSequenceActor*> m_apcSubSeqActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TArray<ALevelSequenceActor*> m_apSeqList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    URichEventCommandBase* m_pcEventCommandData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    URichEventCommandBase* m_pcSubEventCommandData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TArray<TSoftObjectPtr<ULevelSequence>> m_acResList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    ULevelSequence* m_pcCacheTimeSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    ULevelSequence* m_ReplaceTimeSequencer;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FEventFinish EventFinish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TMap<int32, AKSCharacterBase*> m_EventCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TMap<int32, AKSObjectBase*> m_EventObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TMap<int32, AKSCharacterBase*> m_MoveList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TArray<FSubSeqData> m_DeepThinkParams;
    
    AEventManager(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateWPMEventReflection(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateWPMEventEnd(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateWPMEventCheck(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateWPMEvent(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool UpdateUIStorySelect(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateTalk(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateSubStoryLabelJump(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool UpdateSubDelivMessageDialog(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateSubDeliveryDialog(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateSpawnCharacterThief(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateSpawnCharacterPlacement(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateSpawnCharacterPartyPosition(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateSpawnCharacterNPC(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateSpawnCharacter(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateSelectMemberDialog(float DeltaTime);
    
private:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void UpdateResetBattleWipeMPC_PlayingEvent(bool bWipe);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool UpdateReminiscenceDialog(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdatePChatMode(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdatePartnerSelectDialog(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateOpenPartySquadWidget(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateOpenPartySplitWidget(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateMove(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateInventorLearnAbility(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateInventorEventDialog(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateGetJobDialog(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateGetItemDialog(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateFinishTheater(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateFieldCommandDialog(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool UpdateExPartyChange(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateEventFadeOut(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateEventFadeIn(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void UpdateEventEmotion(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void UpdateEventEffect(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateEndrollInit(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateEndroll(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateDialogJumpEpilogue(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateDialogJump(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateCharaMoveStart(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateCharaFadeOut(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateCharaFadeIn(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateCharacterForce(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateCharacterAction(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateChallengeDialog(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateCameraDecelerate(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateBattleStart(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool UpdateAddMemberEnd(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool UpdateAddMemberDialog(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool UpdateAddMember(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    void Update_StartFadeOut(float DetalTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    void Update_EventSkipFadeOut(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    void Update_EventSkipFadeIn(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    void Update_CameraMove(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool TempEventSkip(bool NewEventSkip);
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool StopSubSequencer(int32 nIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartWPMEventReflection(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartWPMEventEnd(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartWPMEventCheck(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartWPMEvent(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartWeaponMasterFrow(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartUnlockFasttravel(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartUIStorySelect(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartUIShop(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartUIPartyEdit(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartUINote(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartUIBar(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartTopCharaTypeLabelJump(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartTempPartySetting(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartTalkPos(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartTalkPChat(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartTalkParty(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartTalkPartner(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartTalkGeneral(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartTalk(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartSuccsessFCTypeLabelJump(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartSubTitleNextBlock(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartSubTitle(const FEventData& refEventData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartSubStoryLabelJump(const FEventData& refEventData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartSubDelivMessageDialog(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartSubDeliveryDialog(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartStopEmotionIconAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartSpawnEffect(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartShipPutUpSail(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartSetSwoonEventObject(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartSetSwoon(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartSetNextLevelTriggerID(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartSetFastTravel(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool StartSequencerStart(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool StartSequencerSkip();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool StartSequencerPause();
    
public:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool StartSequencerLabelJump(const FString& strLabel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartSelectMemberJump(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartSelectMemberDialog(const FEventData& refEventData);
    
public:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool StartResidentSubSequencerStopIndex(int32 nIndex);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool StartResidentSubSequencerStop();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool StartResidentSubSequencerStart(const FEventData& inEventData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartReminisceneDialog(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartRefreshEventObject();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartRecoverSwoonEventChara(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartRecoverSwoon(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartRadarMap(const FEventData& refEventData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartPreparationBattleStart(const FEventData& refEventData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartPostEffectSetting(UCameraComponent* TargetCamera, const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartPlaySE(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool StartPlayerCharacterEnable(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartPlayEmotionIcon(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartPChatMode(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartPartnerSelectDialog(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartOpenPartySquadWidget(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartOpenPartySplitWidget(const FEventData& refEventData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartOpenEndCardUI(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartOpenEndCardEpilogueUI(const FEventData& refEventData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartOpenDoor(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartOKDialog(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartObjectSpawn(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartNotificationMessage(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartNotificationCountShow(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartNarration(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartMovePos(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartMove(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartModifyMP(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartModifyHP(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartLeaveMember(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartJudgeMoney(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartInventorLearnAbility(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartInventorEventDialog(const FEventData& refEventData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartHouseInSettingPlaySeq(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartHouseInSetting(const FEventData& refEventData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartGetTameMonster(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartGetJobDialog(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartGetItemDialog(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartFullRecoveryAndPotentiality(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartFullRecovery(const FEventData& refEventData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartFlashbackStart(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool StartFlashbackEnd(const FEventData& refEventData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartFinishTheater(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartFinishTempPartySetting(const FEventData& refEventData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartFinalBattleStart(const FEventData& refEventData);
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool StartFieldCommandDialog(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartEventFadeOut(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartEventFadeIn(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartEndrollInit(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartEndroll(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartEndReminiscene(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartEndPlayReminiscene(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartEnableFieldObject(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartEnableEventObject(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool StartEmotionEnable(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartDelFollow(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool StartCommand(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartCharaMoveStart(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartCharaFadeOut(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartCharaFadeIn(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartCharacterPhysics(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartChangeTitle(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartChangePlayerResource(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartChangePartySet(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartChangeMoeny(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartChangeMap(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartChangeItem(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartChangeArea(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartChallengeDialog(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartCancelSwoon(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartCameraTargetEvent(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartCameraTarget(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartCameraSpawn(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartCameraRotation(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartCameraPos(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartCameraLock(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartCameraDecelerate(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartBeginReminiscene(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartBeginPlayReminiscene(const FEventData& refEventData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool StartBattleStart(const FEventData& refEventData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartAutoSave(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartAddMemberEnd(const FEventData& refEventData, bool& AddMember);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartAddMemberDialog(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool StartAddMember(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool SpawnPlayerCharacter(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool SpawnPChatCharacter(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool SpawnEventEffect(int32 ID, const FName& Label, float LifeTime, const FVector& Pos, int32 TargetCharacter);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool SpawnEventCharacterList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool SpawnCharacterThief(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool SpawnCharacterPlacement(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool SpawnCharacterPartyPosition(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool SpawnCharacterNPC(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool SpawnCharacter(const FEventData& refEventData);
    
public:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SkipPositionSequencer(FFrameTime Time);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetUpSeamlessMode(bool bSeamless);
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetUpdateType(EEventUpdateType Type);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    void SetTimeZoneTheater(FName EventName, int32 OverrideTimeZone);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetSubSequenceDirector(URichEventCommandBase* pEvent);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetSkipOpenDoorLabel(FName TargetName, bool bOpen);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetRichEventLoadData(bool IsLoad);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    void SetResumeGamePlaySystem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool SetPostProcessDeepThink(bool Enable, AKSCharacterBase* refTarget, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool SetPChatCharacterDir(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool SetPartnerNumber(const FEventData& refEventData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool SetOpenCloseDoorFunction(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetMaxSkipInputTime(float MaxTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    void SetMaterialEnvParams();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool SetLegendMonsterAwakening(EAWAKENING_MONSTER_PARAM eAwake);
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetLastSoundBlock(int32 bLock);
    
public:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetFinishBattleWipe(bool Enable);
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetFinish(bool Finish);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    void SetEventSkipInput(bool isSkipInput);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetEventPlayMode(EKSEVENT_PLAY Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    void SetEventObjectEnableTheater(FName EventName);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetEventDataWithLevelIDForPartyChat(FName EventLabel, AKSCharacterBase* TargetChara, FName MapLabel, bool TheaterMode);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetEventDataWithLevelID(FName EventLabel, AKSCharacterBase* TargetChara, FName MapLabel, bool TheaterMode);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetEventDataForce(FName Name, AKSCharacterBase* TargetChara, bool TheaterMode);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetEventData(FName Name, AKSCharacterBase* TargetChara, bool TheaterMode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool SetEventCheckFlag(const FEventData& refEventData);
    
private:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetEnvTimeZoneMPC_PlayingEvent(bool bPlayingEvent);
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool SetEndrollManager();
    
public:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetDeepThinkParameter(FName TagName, FVector Offset, int32 nIndex);
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool SetDeepThinkMaterialEnable(bool inEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool SetCharacterPosition(const FEventData& refEventData);
    
public:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetCacheMapData(ULevelSequence* TimeSequencer);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetBanEventSkip(bool bBan);
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void SetAllCharacterEnable(bool Enable);
    
public:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void RevertTimeZoneSequencer();
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void RevertPlayerCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool RestoreTheater();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool RestoreEventSkip();
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool ResetPostProcess();
    
public:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void ResetEventSkip();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void RequestRefreshSpawnOnEndEvent();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void RequestPlayEvent();
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void RemoveObject(int32 Index);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool RemoveEventEffectList(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    void RemoveEventEffectAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool RemoveEventEffect(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    void RemoveEmotionIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool RemoveCharacterAll();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void RemoveCharacter(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    void ReferenceSequencerStartDeepDirecting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    void ReferenceSequencerEndDeepDirecting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    void ReferenceSequencerDeepDirectingAttachPlayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool RandomNumberJump(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool PlayEventTheater(const FName& EventName);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool PlayEventForce(const FString& EventName, AKSCharacterBase* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool PlayEvent(const FString& EventName, AKSCharacterBase* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void PlayDeepDirection(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool PartnerCharacterJump(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool MemberCountJump(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    static FString MakeJsonDataPath(const FName& EventName);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool MakeEventData(UPARAM(Ref) TArray<FEventData>& outEventData, const FString& eventJsonName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool LoadSubSequencer(const FEventData& inEventData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool IsTheaterMode() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool IsSeqDebugPlay();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool IsPlayReferenceSequencerDeepDirecting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool IsFinish() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool IsExecutingFinishPre() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool IsEventBattleDefeatNextEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool IsCheckEventPlayMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool IsBanEventSkip();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool HaveMeatItemJump(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool HaveItemJump(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    EEventUpdateType GetUpdateType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    EEventTheater GetTheaterStatus() const;
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    FName GetTalkGeneralText();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    int32 GetSwitchIndoorTriggerIndex(const FString& TriggerName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    TArray<ALevelSequenceActor*> GetSubSequenceActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    ALevelSequenceActor* GetSubSequeceActor(int32 nIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    FString GetSubSeqFileName();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    FName GetSubOptionValue(int32 nIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    void GetSubEventBattleParty(EKSPartySet MainSet, EKSPartySet SubSet, TArray<EPlayableCharacterID>& MainParty, TArray<EPlayableCharacterID>& SubParty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    float GetSkipInputTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool GetSequencerSkip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    FString GetSeqFileName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool GetRichEventLoadData();
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    FName GetResidentTagData(ULevelSequencePlayer* SequencePlayer);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    ALevelSequenceActor* GetResidentSequenceActor(int32 nIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool GetPlaySequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    FString GetPlayingEventName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    FEventListData GetPlayEventData() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    AKSObjectBase* GetObject(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    FEventData GetNowEventData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    float GetMaxSkipInputTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    void GetMaterialEnvParams();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    ALevelSequenceActor* GetMainSequeceActor();
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    AWeaponMasterEventFlow* GetLoadWeaponMasterAssetClass(const FString& strPass);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure, Category="Octo2")
    bool GetFinishEncountWipe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool GetFinishBattleWipe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    void GetFinalBattleParty(TArray<EPlayableCharacterID>& MainParty, TArray<EPlayableCharacterID>& SubParty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool GetEventSkip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    EKSEVENT_PLAY GetEventPlayMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    FEventPlayData GetEventPlayData();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    UUIFlashbackBase* GetEventFlashbackData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    TMap<int32, FEventEffect> GetEventEffectList();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    AKSCharacterBase* GetEventCharacter(int32 Index) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool GetEventBattleFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    FName GetDeepThinkTagName(ULevelSequencePlayer* SequencePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    FVector GetDeepThinkOffset(ULevelSequencePlayer* SequencePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    ALevelSequenceActor* GetDeepThinkActor(int32 nIndex, int32& ArrayNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool GetDebugPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    ULevelSequence* GetCacheTimeSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    int32 GetCacheMapID();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool FollowCharacterJump(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool FinishTheater();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool FinishPre();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool FinishEventSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool FinishEvent();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool FinishDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    void ExecCameraMoving();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    void EventSkipUIReset();
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool EventRemoveCharacterAll();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void EventRemoveCharacter(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool EventLoadLevel(FName inLevelID, FName EventSoundLabel, EEventPlayBGM inEventPlayBGM, const FString& PlayBGMLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool End(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool DialogFinish(FString& outNextEventName);
    
public:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void DeletePlaySequencer(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void DeleteDeepDirection(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args);
    
protected:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    static void DebugAwakeningPartner(int32 Type, int32 Index);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    static void Debug_DumpEventFlagToFile();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool CreateRandomNumber(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool CreateEventCharacter(ESPAWN_CHARA_TYPE eType, const FEventData& inEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool CreateDialogEpilogue(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Octo2")
    bool CreateDialog(const FEventData& refEventData);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool CommandInit(int32 Index, const FEventData& inEventData);
    
public:
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void ClearReplaceTimeSequencer();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void ClearCacheTimeSequencer();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void CheckOutputAtomSound();
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void ChangeTimeZoneSequencer(ULevelSequence* replaceSequencer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool BitFlagJump(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool AttachSequencerSub(ULevelSequence* SubSeq);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool AttachSequencerResidentSub(ULevelSequence* SubSeq);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool AttachSequencerMain(ULevelSequence* MainSeq);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool AttachPlaySequenceSub(ULevelSequence* SubSeq, int32 NumLoop, FName TagName);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool AttachPlaySequencerResidentSub(ULevelSequence* SubSeq, int32 nIndex, FName TagName, FVector vOffset);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void AddObject(int32 Index, AKSObjectBase* Object);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    bool AddEventEffectList(int32 ID, const FEventEffect& EffectData);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void AddEventCharacter(int32 Index, AKSCharacterBase* Character);
    
};

