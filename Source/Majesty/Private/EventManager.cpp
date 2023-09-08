#include "EventManager.h"
#include "Majesty/Public/EventManager.h"

AEventManager::AEventManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pMPC = NULL;
    this->EventIndex = 0;
    this->EndIndex = 0;
    this->EventListDb = NULL;
    this->PlayerCharacter = NULL;
    this->PlayActionCharacter = NULL;
    this->TargetObject = NULL;
    this->EventTargetCharacter = NULL;
    this->CommandTime = 0.00f;
    this->WaitTime = 0.00f;
    this->TalkIndex = 0;
    this->ActiveTalkIndex = 0;
    this->BattleEndNextEventID = 0;
    this->CameraTarget = NULL;
    this->ActiveCamera = NULL;
    this->CameraTrackEndTime = 0.00f;
    this->CameraTrackTime = 0.00f;
    this->m_bCameraDecelerate = false;
    this->TempPlayEventSkip = 0;
    this->EventBalloon = NULL;
    this->EventFlashback = NULL;
    this->EventBattle = false;
    this->BeforEventBattle = false;
    this->IgnoreFootStepSound = false;
    this->PartyChatWidget = NULL;
    this->IsRichEventLoadResourceData = false;
    this->RandomNumber = 0;
    this->IsCreateRandomNumber = false;
    this->ExecFinishPre = false;
    this->RefreshEventFlag = false;
    this->RefreshEventObject = false;
    this->EditPlayerPosition = false;
    this->EditCameraLock = false;
    this->EditPlayerCharacterEnable = false;
    this->FirstCharacterSpawn = 0;
    this->LastFlagChangeIndex = 0;
    this->LastFadeOutIndex = 0;
    this->RefreshPlayerFlag = false;
    this->ContinueEvent = false;
    this->TempTime = 0.00f;
    this->EventMoveTarget = NULL;
    this->CameraLockFlag = false;
    this->TempEndrollManager = NULL;
    this->EndrollFlow = 0;
    this->TheaterStatus = EEventTheater::NONE;
    this->EventStartLevelID = 0;
    this->PlayerDir = EKSCharacterDir::FRONT;
    this->IsPlayEventForce = false;
    this->IsSequencerSkip = false;
    this->IsTempChangeTimeZone = false;
    this->SepiaLUT = NULL;
    this->m_pcMainSeqActor = NULL;
    this->m_pcEventCommandData = NULL;
    this->m_pcSubEventCommandData = NULL;
    this->m_pcCacheTimeSequencer = NULL;
    this->m_ReplaceTimeSequencer = NULL;
}

bool AEventManager::UpdateWPMEventReflection_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateWPMEventEnd_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateWPMEventCheck_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateWPMEvent_Implementation(float DeltaTime) {
    return false;
}


bool AEventManager::UpdateTalk_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateSubStoryLabelJump_Implementation(float DeltaTime) {
    return false;
}


bool AEventManager::UpdateSubDeliveryDialog_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateSpawnCharacterThief_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateSpawnCharacterPlacement_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateSpawnCharacterPartyPosition_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateSpawnCharacterNPC_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateSpawnCharacter_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateSelectMemberDialog_Implementation(float DeltaTime) {
    return false;
}

void AEventManager::UpdateResetBattleWipeMPC_PlayingEvent(bool bWipe) {
}


bool AEventManager::UpdatePChatMode_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdatePartnerSelectDialog_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateOpenPartySquadWidget_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateOpenPartySplitWidget_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateMove_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateInventorLearnAbility_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateInventorEventDialog_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateGetJobDialog_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateGetItemDialog_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateFinishTheater_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateFieldCommandDialog_Implementation(float DeltaTime) {
    return false;
}


bool AEventManager::UpdateEventFadeOut_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateEventFadeIn_Implementation(float DeltaTime) {
    return false;
}

void AEventManager::UpdateEventEmotion(float DeltaTime) {
}

void AEventManager::UpdateEventEffect(float DeltaTime) {
}

bool AEventManager::UpdateEndrollInit_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateEndroll_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateDialogJumpEpilogue_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateDialogJump_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateCharaMoveStart_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateCharaFadeOut_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateCharaFadeIn_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateCharacterForce_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateCharacterAction_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateChallengeDialog_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateCameraDecelerate_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::UpdateBattleStart_Implementation(float DeltaTime) {
    return false;
}



bool AEventManager::UpdateAddMember_Implementation(float DeltaTime) {
    return false;
}

void AEventManager::Update_StartFadeOut_Implementation(float DetalTime) {
}

void AEventManager::Update_EventSkipFadeOut_Implementation(float DeltaTime) {
}

void AEventManager::Update_EventSkipFadeIn_Implementation(float DeltaTime) {
}

void AEventManager::Update_CameraMove_Implementation(float DeltaTime) {
}

bool AEventManager::TempEventSkip(bool NewEventSkip) {
    return false;
}

bool AEventManager::StopSubSequencer(int32 nIndex) {
    return false;
}

bool AEventManager::StartWPMEventReflection_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartWPMEventEnd_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartWPMEventCheck_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartWPMEvent_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartWeaponMasterFrow_Implementation(const FEventData& refEventData) {
    return false;
}






bool AEventManager::StartUIBar_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartTopCharaTypeLabelJump_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartTempPartySetting_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartTalkPos_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartTalkPChat_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartTalkParty_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartTalkPartner_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartTalkGeneral_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartTalk_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartSuccsessFCTypeLabelJump_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartSubTitleNextBlock_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartSubTitle_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartSubStoryLabelJump_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartSubDelivMessageDialog_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartSubDeliveryDialog_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartStopEmotionIconAll_Implementation() {
    return false;
}

bool AEventManager::StartSpawnEffect_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartShipPutUpSail_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartSetSwoonEventObject_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartSetSwoon_Implementation(const FEventData& refEventData) {
    return false;
}



bool AEventManager::StartSequencerStart(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartSequencerSkip() {
    return false;
}

bool AEventManager::StartSequencerPause() {
    return false;
}

bool AEventManager::StartSequencerLabelJump(const FString& strLabel) {
    return false;
}

bool AEventManager::StartSelectMemberJump_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartSelectMemberDialog_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartResidentSubSequencerStopIndex(int32 nIndex) {
    return false;
}

bool AEventManager::StartResidentSubSequencerStop() {
    return false;
}

bool AEventManager::StartResidentSubSequencerStart(const FEventData& inEventData) {
    return false;
}



bool AEventManager::StartRecoverSwoonEventChara_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartRecoverSwoon_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartRadarMap_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartPreparationBattleStart_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartPostEffectSetting_Implementation(UCameraComponent* TargetCamera, const FEventData& refEventData) {
    return false;
}


bool AEventManager::StartPlayerCharacterEnable(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartPlayEmotionIcon_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartPChatMode_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartPartnerSelectDialog_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartOpenPartySquadWidget_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartOpenPartySplitWidget_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartOpenEndCardUI_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartOpenEndCardEpilogueUI_Implementation(const FEventData& refEventData) {
    return false;
}


bool AEventManager::StartOKDialog_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartObjectSpawn_Implementation(const FEventData& refEventData) {
    return false;
}



bool AEventManager::StartNarration_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartMovePos_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartMove_Implementation(const FEventData& refEventData) {
    return false;
}




bool AEventManager::StartJudgeMoney_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartInventorLearnAbility_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartInventorEventDialog_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartHouseInSettingPlaySeq_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartHouseInSetting_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartGetTameMonster_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartGetJobDialog_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartGetItemDialog_Implementation(const FEventData& refEventData) {
    return false;
}



bool AEventManager::StartFlashbackStart_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartFlashbackEnd(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartFinishTheater_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartFinishTempPartySetting_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartFinalBattleStart_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartFieldCommandDialog(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartEventFadeOut_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartEventFadeIn_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartEndrollInit_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartEndroll_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartEndReminiscene_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartEndPlayReminiscene_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartEnableFieldObject_Implementation(const FEventData& refEventData) {
    return false;
}


bool AEventManager::StartEmotionEnable(const FEventData& refEventData) {
    return false;
}


bool AEventManager::StartCommand(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartCharaMoveStart_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartCharaFadeOut_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartCharaFadeIn_Implementation(const FEventData& refEventData) {
    return false;
}


bool AEventManager::StartChangeTitle_Implementation(const FEventData& refEventData) {
    return false;
}


bool AEventManager::StartChangePartySet_Implementation(const FEventData& refEventData) {
    return false;
}


bool AEventManager::StartChangeMap_Implementation(const FEventData& refEventData) {
    return false;
}




bool AEventManager::StartCancelSwoon_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartCameraTargetEvent_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartCameraTarget_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartCameraSpawn_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartCameraRotation_Implementation(const FEventData& refEventData) {
    return false;
}



bool AEventManager::StartCameraDecelerate_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartBeginReminiscene_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartBeginPlayReminiscene_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::StartBattleStart_Implementation(const FEventData& refEventData) {
    return false;
}





bool AEventManager::SpawnPlayerCharacter_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::SpawnPChatCharacter_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::SpawnEventEffect_Implementation(int32 ID, const FName& Label, float LifeTime, const FVector& Pos, int32 TargetCharacter) {
    return false;
}

bool AEventManager::SpawnEventCharacterList() {
    return false;
}

bool AEventManager::SpawnCharacterThief_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::SpawnCharacterPlacement_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::SpawnCharacterPartyPosition_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::SpawnCharacterNPC_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::SpawnCharacter_Implementation(const FEventData& refEventData) {
    return false;
}

void AEventManager::SkipPositionSequencer(FFrameTime Time) {
}

void AEventManager::SetUpSeamlessMode(bool bSeamless) {
}

void AEventManager::SetUpdateType(EEventUpdateType Type) {
}


void AEventManager::SetSubSequenceDirector(URichEventCommandBase* pEvent) {
}

void AEventManager::SetSkipOpenDoorLabel(FName TargetName, bool bOpen) {
}

void AEventManager::SetRichEventLoadData(bool IsLoad) {
}

void AEventManager::SetResumeGamePlaySystem_Implementation() {
}


bool AEventManager::SetPChatCharacterDir_Implementation(const FEventData& refEventData) {
    return false;
}


bool AEventManager::SetOpenCloseDoorFunction_Implementation(const FEventData& refEventData) {
    return false;
}

void AEventManager::SetMaxSkipInputTime(float MaxTime) {
}



void AEventManager::SetLastSoundBlock(int32 bLock) {
}

void AEventManager::SetFinishBattleWipe(bool Enable) {
}

void AEventManager::SetFinish(bool Finish) {
}

void AEventManager::SetEventSkipInput_Implementation(bool isSkipInput) {
}

void AEventManager::SetEventPlayMode(EKSEVENT_PLAY Mode) {
}


void AEventManager::SetEventDataWithLevelIDForPartyChat(FName EventLabel, AKSCharacterBase* TargetChara, FName MapLabel, bool TheaterMode) {
}

void AEventManager::SetEventDataWithLevelID(FName EventLabel, AKSCharacterBase* TargetChara, FName MapLabel, bool TheaterMode) {
}

void AEventManager::SetEventDataForce(FName Name, AKSCharacterBase* TargetChara, bool TheaterMode) {
}

void AEventManager::SetEventData(FName Name, AKSCharacterBase* TargetChara, bool TheaterMode) {
}


void AEventManager::SetEnvTimeZoneMPC_PlayingEvent(bool bPlayingEvent) {
}

bool AEventManager::SetEndrollManager() {
    return false;
}

void AEventManager::SetDeepThinkParameter(FName TagName, FVector Offset, int32 nIndex) {
}

bool AEventManager::SetDeepThinkMaterialEnable(bool inEnable) {
    return false;
}

bool AEventManager::SetCharacterPosition_Implementation(const FEventData& refEventData) {
    return false;
}

void AEventManager::SetCacheMapData(ULevelSequence* TimeSequencer) {
}

void AEventManager::SetBanEventSkip(bool bBan) {
}

void AEventManager::SetAllCharacterEnable(bool Enable) {
}

void AEventManager::RevertTimeZoneSequencer() {
}

void AEventManager::RevertPlayerCollision() {
}

bool AEventManager::RestoreTheater_Implementation() {
    return false;
}

bool AEventManager::RestoreEventSkip_Implementation() {
    return false;
}

bool AEventManager::ResetPostProcess() {
    return false;
}

void AEventManager::ResetEventSkip() {
}

void AEventManager::RequestRefreshSpawnOnEndEvent() {
}

void AEventManager::RequestPlayEvent() {
}

void AEventManager::RemoveObject(int32 Index) {
}

bool AEventManager::RemoveEventEffectList(int32 ID) {
    return false;
}

void AEventManager::RemoveEventEffectAll_Implementation() {
}

bool AEventManager::RemoveEventEffect_Implementation(int32 ID) {
    return false;
}


bool AEventManager::RemoveCharacterAll() {
    return false;
}

void AEventManager::RemoveCharacter(int32 Index) {
}




bool AEventManager::RandomNumberJump_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::PlayEventTheater_Implementation(const FName& EventName) {
    return false;
}

bool AEventManager::PlayEventForce(const FString& EventName, AKSCharacterBase* TargetCharacter) {
    return false;
}

bool AEventManager::PlayEvent_Implementation(const FString& EventName, AKSCharacterBase* TargetCharacter) {
    return false;
}

void AEventManager::PlayDeepDirection(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args) {
}

bool AEventManager::PartnerCharacterJump_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::MemberCountJump_Implementation(float DeltaTime) {
    return false;
}

FString AEventManager::MakeJsonDataPath(const FName& EventName) {
    return TEXT("");
}

bool AEventManager::MakeEventData(TArray<FEventData>& outEventData, const FString& eventJsonName) {
    return false;
}

bool AEventManager::LoadSubSequencer_Implementation(const FEventData& inEventData) {
    return false;
}

bool AEventManager::IsTheaterMode() const {
    return false;
}

bool AEventManager::IsSeqDebugPlay() {
    return false;
}


bool AEventManager::IsPlaying() const {
    return false;
}

bool AEventManager::IsFinish() const {
    return false;
}

bool AEventManager::IsExecutingFinishPre() const {
    return false;
}

bool AEventManager::IsEventBattleDefeatNextEvent() {
    return false;
}

bool AEventManager::IsCheckEventPlayMode() {
    return false;
}

bool AEventManager::IsBanEventSkip() {
    return false;
}

bool AEventManager::HaveMeatItemJump_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::HaveItemJump_Implementation(float DeltaTime) {
    return false;
}

EEventUpdateType AEventManager::GetUpdateType() const {
    return EEventUpdateType::EVENT;
}

EEventTheater AEventManager::GetTheaterStatus() const {
    return EEventTheater::NONE;
}

FName AEventManager::GetTalkGeneralText() {
    return NAME_None;
}


TArray<ALevelSequenceActor*> AEventManager::GetSubSequenceActor() {
    return TArray<ALevelSequenceActor*>();
}

ALevelSequenceActor* AEventManager::GetSubSequeceActor(int32 nIndex) {
    return NULL;
}

FString AEventManager::GetSubSeqFileName() {
    return TEXT("");
}

FName AEventManager::GetSubOptionValue(int32 nIndex) {
    return NAME_None;
}

void AEventManager::GetSubEventBattleParty(EKSPartySet MainSet, EKSPartySet SubSet, TArray<EPlayableCharacterID>& MainParty, TArray<EPlayableCharacterID>& SubParty) {
}

float AEventManager::GetSkipInputTime() const {
    return 0.0f;
}

bool AEventManager::GetSequencerSkip() const {
    return false;
}

FString AEventManager::GetSeqFileName() {
    return TEXT("");
}

bool AEventManager::GetRichEventLoadData() {
    return false;
}

FName AEventManager::GetResidentTagData(ULevelSequencePlayer* SequencePlayer) {
    return NAME_None;
}

ALevelSequenceActor* AEventManager::GetResidentSequenceActor(int32 nIndex) {
    return NULL;
}

bool AEventManager::GetPlaySequencer() {
    return false;
}

FString AEventManager::GetPlayingEventName() const {
    return TEXT("");
}

FEventListData AEventManager::GetPlayEventData() const {
    return FEventListData{};
}

AKSObjectBase* AEventManager::GetObject(int32 Index) {
    return NULL;
}

FEventData AEventManager::GetNowEventData() const {
    return FEventData{};
}

float AEventManager::GetMaxSkipInputTime() const {
    return 0.0f;
}


ALevelSequenceActor* AEventManager::GetMainSequeceActor() {
    return NULL;
}

AWeaponMasterEventFlow* AEventManager::GetLoadWeaponMasterAssetClass(const FString& strPass) {
    return NULL;
}


bool AEventManager::GetFinishBattleWipe() {
    return false;
}

void AEventManager::GetFinalBattleParty(TArray<EPlayableCharacterID>& MainParty, TArray<EPlayableCharacterID>& SubParty) {
}

bool AEventManager::GetEventSkip() const {
    return false;
}

EKSEVENT_PLAY AEventManager::GetEventPlayMode() const {
    return EKSEVENT_PLAY::NORMAL;
}

FEventPlayData AEventManager::GetEventPlayData() {
    return FEventPlayData{};
}

UUIFlashbackBase* AEventManager::GetEventFlashbackData() {
    return NULL;
}

TMap<int32, FEventEffect> AEventManager::GetEventEffectList() {
    return TMap<int32, FEventEffect>();
}

AKSCharacterBase* AEventManager::GetEventCharacter(int32 Index) const {
    return NULL;
}

bool AEventManager::GetEventBattleFlag() {
    return false;
}

FName AEventManager::GetDeepThinkTagName(ULevelSequencePlayer* SequencePlayer) {
    return NAME_None;
}

FVector AEventManager::GetDeepThinkOffset(ULevelSequencePlayer* SequencePlayer) {
    return FVector{};
}

ALevelSequenceActor* AEventManager::GetDeepThinkActor(int32 nIndex, int32& ArrayNum) {
    return NULL;
}

bool AEventManager::GetDebugPlay() {
    return false;
}

ULevelSequence* AEventManager::GetCacheTimeSequencer() {
    return NULL;
}

int32 AEventManager::GetCacheMapID() {
    return 0;
}

bool AEventManager::FollowCharacterJump_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::FinishTheater_Implementation() {
    return false;
}

bool AEventManager::FinishPre_Implementation() {
    return false;
}

bool AEventManager::FinishEventSkip_Implementation() {
    return false;
}

bool AEventManager::FinishEvent_Implementation() {
    return false;
}

bool AEventManager::FinishDialog() {
    return false;
}



bool AEventManager::EventRemoveCharacterAll() {
    return false;
}

void AEventManager::EventRemoveCharacter(int32 Index) {
}

bool AEventManager::EventLoadLevel_Implementation(FName inLevelID, FName EventSoundLabel, EEventPlayBGM inEventPlayBGM, const FString& PlayBGMLabel) {
    return false;
}

bool AEventManager::End_Implementation(float DeltaTime) {
    return false;
}


void AEventManager::DeletePlaySequencer(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args) {
}

void AEventManager::DeleteDeepDirection(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args) {
}

void AEventManager::DebugAwakeningPartner(int32 Type, int32 Index) {
}

void AEventManager::Debug_DumpEventFlagToFile() {
}

bool AEventManager::CreateRandomNumber_Implementation(const FEventData& refEventData) {
    return false;
}

bool AEventManager::CreateEventCharacter_Implementation(ESPAWN_CHARA_TYPE eType, const FEventData& inEventData) {
    return false;
}



bool AEventManager::CommandInit(int32 Index, const FEventData& inEventData) {
    return false;
}

void AEventManager::ClearReplaceTimeSequencer() {
}

void AEventManager::ClearCacheTimeSequencer() {
}

void AEventManager::CheckOutputAtomSound() {
}

void AEventManager::ChangeTimeZoneSequencer(ULevelSequence* replaceSequencer) {
}

bool AEventManager::BitFlagJump_Implementation(float DeltaTime) {
    return false;
}

bool AEventManager::AttachSequencerSub(ULevelSequence* SubSeq) {
    return false;
}

bool AEventManager::AttachSequencerResidentSub(ULevelSequence* SubSeq) {
    return false;
}

bool AEventManager::AttachSequencerMain(ULevelSequence* MainSeq) {
    return false;
}

bool AEventManager::AttachPlaySequenceSub(ULevelSequence* SubSeq, int32 NumLoop, FName TagName) {
    return false;
}

bool AEventManager::AttachPlaySequencerResidentSub(ULevelSequence* SubSeq, int32 nIndex, FName TagName, FVector vOffset) {
    return false;
}

void AEventManager::AddObject(int32 Index, AKSObjectBase* Object) {
}

bool AEventManager::AddEventEffectList(int32 ID, const FEventEffect& EffectData) {
    return false;
}

void AEventManager::AddEventCharacter(int32 Index, AKSCharacterBase* Character) {
}


