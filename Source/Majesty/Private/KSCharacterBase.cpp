#include "KSCharacterBase.h"
#include "Components/StaticMeshComponent.h"
#include "KSCharacterMovementComponent.h"

AKSCharacterBase::AKSCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UKSCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->CharaState = ECharacterState::Active;
    this->m_IsFadeInWait = false;
    this->Dir = EKSCharacterDir::FRONT;
    this->HouseChangeVisibleFlag = false;
    this->IsAnimEndOnce = false;
    this->ManualLoop = EKSCharacterAnimationLoop::NONE;
    this->FixAnimation = false;
    this->m_bReverseSprite = false;
    this->NowActionID = EKSCharacterAction::MAX_ACTION;
    this->m_CurrentWeaponTexture = NULL;
    this->MoveSpeed.AddDefaulted(8);
    this->CharacterCategory = EKSCharacterCategory::NONE;
    this->CharacterEnable = false;
    this->LoadedCharacterEnableCancel = false;
    this->MoveMode = EKSCharacterMoveMode::WALK;
    this->IsMoveUpdate = false;
    this->Moving = false;
    this->CustomFlipbook = NULL;
    this->Loaded = true;
    this->m_bChangeDirLock = false;
    this->LanternRoot = NULL;
    this->m_pcLanternLight = NULL;
    this->m_bUsingLantern = false;
    this->NpcFadeCollision = NULL;
    this->NpcFadeCollisionRadius = 100.00f;
    this->NpcFadeCollisionLengthRate = 0.55f;
    this->FormCollision = NULL;
    this->MoveStopLen = 10.00f;
    this->LoopEmotionParticle = NULL;
    this->PlayEmotionType = -1;
    this->m_IsNpcTalking = false;
    this->FirstFootStep = false;
    this->FirstCanoeFootStep = false;
    this->FirstStepCanoeDeltaTime = 0.50f;
    this->m_IsOpeningGuildMenu = false;
    this->IsCanoeIdle = false;
    this->CanoeComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CanoeComponent"));
    this->CanoeComponent->SetupAttachment(RootComponent);
    this->CanoeMeshA = NULL;
    this->CanoeMeshB = NULL;
    this->CanoeLanternComponent = NULL;
    this->m_CanoeEffects.AddDefaulted(4);
    this->FootStepDeltaTime = 0.00f;
    this->OldMoveMode = EKSCharacterMoveMode::WALK;
    this->IsPlayFootStep = false;
    this->m_fFootStepCheckStartOffset = 30.00f;
    this->m_fFootStepCheckEndOffset = -200.00f;
    this->IsBreakAnimation = false;
    this->IsLadderIdle = false;
    this->SpritePlayRate = 0.00f;
    this->SoundComponent = NULL;
    this->PCListenerPoint = NULL;
    this->m_bShoudTickEnable = false;
    this->m_bCalcBillboard = false;
    this->m_RadarMapIconType = ERADARMAP_ICON_TYPE::eNO_ICON;
    this->m_PlayerTorchMaterial = NULL;
    this->m_nChangeDirCntDef = 0;
    this->m_nChangeDirCnt = 0;
    this->m_nDebugType = 0;
    this->m_fDebugSize = 5.00f;
    this->AIControllerClass = NULL;
}

void AKSCharacterBase::VisibleEmotion(bool IsVisible) {
}

void AKSCharacterBase::UpdateNpcFadeCollisionSize(float cameraDist) {
}

void AKSCharacterBase::UpdateMove_Implementation(float DeltaTime) {
}

void AKSCharacterBase::UpdateFootStep_Implementation(float DeltaTime) {
}

void AKSCharacterBase::UpdateFirstStepDeltaTime_Implementation(float DeltaTime) {
}

void AKSCharacterBase::UpdateCanoeDir(EKSCharacterDir CurrentDir) {
}

void AKSCharacterBase::UpdateAction() {
}

void AKSCharacterBase::ToggleMoveMode() {
}


void AKSCharacterBase::StopMusicRecorad() {
}

void AKSCharacterBase::StopCharacter_Implementation() {
}

void AKSCharacterBase::StopCanoePitching() {
}

void AKSCharacterBase::StopAllCanoeEffect(ECANOE_MOVE_EFFECT ExclusionType) {
}

bool AKSCharacterBase::SpawnEmotionWithOffset(EEMOTION_TYPE EmotionType, FVector SpawnOffset) {
    return false;
}

bool AKSCharacterBase::SpawnEmotion(EEMOTION_TYPE EmotionType, FVector SpawnOffset) {
    return false;
}


void AKSCharacterBase::SetVisibilityToPartnerFB(bool bVisibility) {
}

void AKSCharacterBase::SetupWeaponTextureInMaterial(UMaterialInstanceDynamic*& targetMaterial) {
}

void AKSCharacterBase::SetUpMoveSpeedData_Implementation(EMovementMode EMovementMode, int32 nMode) {
}

void AKSCharacterBase::SetupFlipbookMaterialInstance() {
}

void AKSCharacterBase::SetUpFadeMaterialData(const UPaperFlipbookComponent* pPaperFlip, const UPlacementFadeComponent* pPlecementComponent, UMaterialInstance* Material) {
}

void AKSCharacterBase::SetupCanoeEffect() {
}



void AKSCharacterBase::SetTempLocation(const FVector& BeforLocation) {
}

void AKSCharacterBase::SetTargetDir(AKSCharacterBase* DirTarget) {
}

void AKSCharacterBase::SetStateGuard_Implementation(bool Guard) {
}

void AKSCharacterBase::SetStateBoost_Implementation(int32 BoostLevel) {
}

void AKSCharacterBase::SetSocketBit(EDEBUFF_ATTACHSOCKET_TYPE eSocket) {
}

void AKSCharacterBase::SetReverseSpriteFlag(bool bReverse) {
}



void AKSCharacterBase::SetPlayFootStep_Implementation(bool bIsPlayFootStep) {
}

void AKSCharacterBase::SetPlayAnimationFrame(int32 nFrame) {
}

void AKSCharacterBase::SetPartyLadderOffset_Implementation(EKSCharacterDir NewDir) {
}

bool AKSCharacterBase::SetMovePoint_Implementation(FVector InLocation) {
    return false;
}

void AKSCharacterBase::SetMoveMode(int32 Mode) {
}


void AKSCharacterBase::SetLoadedCharacterEnableCancel(bool Val) {
}



void AKSCharacterBase::SetLantern(bool bEnable) {
}

void AKSCharacterBase::SetLadderMoveParams(const FVector& upEndPos, const FVector& downEndPos, const FVector& moveLadderPos) {
}

void AKSCharacterBase::SetLadderIdle_Implementation() {
}

void AKSCharacterBase::SetIsOpeningGuild(bool Val) {
}

void AKSCharacterBase::SetIsMoveUpdate(bool bMoveUpdate) {
}

void AKSCharacterBase::SetIsDisableCharacterMovementFlag(bool Val) {
}

void AKSCharacterBase::SetIndoorFocusDistance(float focusDistance) {
}

void AKSCharacterBase::SetIndoorFloor(int32 FloorNum) {
}

void AKSCharacterBase::SetIndoorFlag(bool Indoor) {
}

void AKSCharacterBase::SetHouseChangeVisibleFlag(bool isVisble) {
}

void AKSCharacterBase::SetHideMode_Implementation() {
}

void AKSCharacterBase::SetForcedPlayFootStep_Implementation(FName ForcedPlayFootStepType) {
}

void AKSCharacterBase::SetFollowOffset(int32 Offset) {
}

void AKSCharacterBase::SetFixAnimation(bool Eanble, EKSCharacterAction eAction, EKSCharacterAnimationLoop eLoop) {
}

void AKSCharacterBase::SetFinishMove(bool Force) {
}

void AKSCharacterBase::SetEquipmentLanternData(const FEquipLanternData& lanternData) {
}

void AKSCharacterBase::SetEnablePlayAction_Implementation(bool Enable) {
}

void AKSCharacterBase::SetEmotionVisibility(bool IsVisible) {
}

void AKSCharacterBase::SetDirTargetActor(AKSCharacterBase* TargetCharacter) {
}

void AKSCharacterBase::SetDir_Implementation(EKSCharacterDir eDir, bool SetIdle) {
}

void AKSCharacterBase::SetDebugTouchLockTrigger(const FString& TriggerName) {
}

void AKSCharacterBase::SetDamageAction_Implementation(EBATTLE_DAMAGE_TYPE DamageType) {
}

void AKSCharacterBase::SetCurrentWeaponTexture(UTexture2D* weaponTexture) {
}


void AKSCharacterBase::SetCharacterState(ECharacterState State) {
}

void AKSCharacterBase::SetCharacterLocation_Implementation(const FVector& InLocation, EKSCharacterDir InDir) {
}

void AKSCharacterBase::SetCharacterEnable_Implementation(bool Enable) {
}

void AKSCharacterBase::SetCharacterCollision_Implementation(bool Enable) {
}

void AKSCharacterBase::SetChangeDirLock(bool bChangeDirLock) {
}

void AKSCharacterBase::SetCanoeVisibility(bool bVisible) {
}

void AKSCharacterBase::SetCanoePitchingEnabled(bool bEnable) {
}

void AKSCharacterBase::SetCanoeMeshOffset(const FVector canoeOffset) {
}

void AKSCharacterBase::SetCanoeIdle_Implementation() {
}



void AKSCharacterBase::SetBattleSelectMaterial_Implementation(bool Select, bool Boost) {
}

void AKSCharacterBase::SetBattleAlphaMode_Implementation(bool Enable) {
}


void AKSCharacterBase::ResumeSpritePlayRateByLadder() {
}

bool AKSCharacterBase::RespawnEmotion() {
    return false;
}

bool AKSCharacterBase::ResetSelf_Implementation() {
    return false;
}

void AKSCharacterBase::ResetOnLevelBeginPlay() {
}

void AKSCharacterBase::ResetForceLadder() {
}

void AKSCharacterBase::ResetFootStep_Implementation() {
}



void AKSCharacterBase::RequestRespawnEmotionAfterTalk() {
}

void AKSCharacterBase::RemoveEmotion() {
}




void AKSCharacterBase::RefreshCanoeObject() {
}

void AKSCharacterBase::PlayMusicRecorad() {
}

void AKSCharacterBase::PlayFootStep_Implementation(FName SELabel) {
}

void AKSCharacterBase::PlayerReplace() {
}


void AKSCharacterBase::PlayCharacterAction_Implementation(EKSCharacterAction Label, EKSCharacterDir Direction, bool StackClear) {
}

void AKSCharacterBase::PlayCanoePitching() {
}

bool AKSCharacterBase::PlayCanoeEffectByMoveMode(EKSCharacterMoveMode Mode) {
    return false;
}

bool AKSCharacterBase::PlayCanoeEffect(ECANOE_MOVE_EFFECT effType) {
    return false;
}

void AKSCharacterBase::PlayBreakAnimation_Implementation(bool Break) {
}

void AKSCharacterBase::PlayBattleAction_Implementation(EBATTLE_ACTION_TYPE BattleAction, bool StackClear) {
}

void AKSCharacterBase::PlayAnimationDir(EKSCharacterAction eAction, EKSCharacterDir eDir, int32 nFrame) {
}

void AKSCharacterBase::PlayAnimation(EKSCharacterAction eAction, int32 nFrame) {
}

bool AKSCharacterBase::PlayAction(EKSCharacterAction ActionID, bool Force, int32 nFrame, EKSCharacterAnimationLoop LoopSetting) {
    return false;
}

void AKSCharacterBase::OverwriteTemplateSpriteSockets(EKSCharacterAction eAction, EKSCharacterDir eDir) {
}

void AKSCharacterBase::OverwriteSpriteSockets(TMap<FName, FMJSpriteSocketData> SocketData) {
}



void AKSCharacterBase::OnEndOverlapFromPlayerChara_Implementation() {
}

void AKSCharacterBase::OnBeginOverlapFromPlayerChara_Implementation() {
}

void AKSCharacterBase::OnAnimationFinish_Implementation() {
}


void AKSCharacterBase::MoveBP_Implementation(FVector vMove) {
}

void AKSCharacterBase::LoadedCharacterEnableCancelRequest() {
}

void AKSCharacterBase::LadderOffset_Implementation(int32 PartyIndex, EKSCharacterDir NewDir) {
}

bool AKSCharacterBase::IsSpawnedEmotion() {
    return false;
}

bool AKSCharacterBase::IsRunningFade() {
    return false;
}

bool AKSCharacterBase::IsPlayingCanoePitching() const {
    return false;
}

bool AKSCharacterBase::IsPlayingCanoeEffect(ECANOE_MOVE_EFFECT effType) {
    return false;
}

bool AKSCharacterBase::IsPlayerCharacter_Implementation() {
    return false;
}

bool AKSCharacterBase::IsPlayBattleAction_Implementation() const {
    return false;
}

bool AKSCharacterBase::IsPartyCharacter_Implementation() {
    return false;
}

bool AKSCharacterBase::IsNpcTalking() const {
    return false;
}

bool AKSCharacterBase::IsMoving() {
    return false;
}

bool AKSCharacterBase::IsMoveCanoeMode() {
    return false;
}

bool AKSCharacterBase::IsMove() const {
    return false;
}

bool AKSCharacterBase::IsLadderMoveMode(EKSCharacterMoveMode Mode) const {
    return false;
}

bool AKSCharacterBase::IsLadder() const {
    return false;
}

bool AKSCharacterBase::IsIdle() const {
    return false;
}

bool AKSCharacterBase::IsHunterPartner_Implementation() {
    return false;
}

bool AKSCharacterBase::IsFollowNpcCharacter_Implementation() {
    return false;
}

bool AKSCharacterBase::IsFieldNpcCharacter_Implementation() {
    return false;
}

bool AKSCharacterBase::IsFCAction() const {
    return false;
}

bool AKSCharacterBase::IsFadeInWait() const {
    return false;
}

bool AKSCharacterBase::IsChangeWalkLadderCanoe(EKSCharacterMoveMode nowMode, EKSCharacterMoveMode nextMode) const {
    return false;
}

bool AKSCharacterBase::IsCanoeMoveMode(EKSCharacterMoveMode Mode) const {
    return false;
}

bool AKSCharacterBase::IsCanoe() const {
    return false;
}

bool AKSCharacterBase::IsAfterIdle() const {
    return false;
}

bool AKSCharacterBase::IsActionLooping() const {
    return false;
}

void AKSCharacterBase::InitAction(FName ActionLabelName, bool bBattle) {
}

bool AKSCharacterBase::Idle_Implementation(bool Force) {
    return false;
}


USplineMoveComponent* AKSCharacterBase::GetSplineObject_Implementation() {
    return NULL;
}

bool AKSCharacterBase::GetSocketPos(EDEBUFF_ATTACHSOCKET_TYPE eType, FVector& vOutPos) {
    return false;
}

bool AKSCharacterBase::GetReverseSpriteFlag() const {
    return false;
}


bool AKSCharacterBase::GetRespawnEmotionAfterTalk() const {
    return false;
}

ERADARMAP_ICON_TYPE AKSCharacterBase::GetRadarMapIconType() const {
    return ERADARMAP_ICON_TYPE::ePLAYER;
}

EKSCharacterMoveMode AKSCharacterBase::GetPrevMoveMode() const {
    return EKSCharacterMoveMode::WALK;
}

UPlayerPropertyComponent* AKSCharacterBase::GetPlayerPropertyComponent_Implementation() {
    return NULL;
}


int32 AKSCharacterBase::GetPlayAnimationFrame() {
    return 0;
}

EPlayableCharacterID AKSCharacterBase::GetPlayableCharacterID() {
    return EPlayableCharacterID::eNONE;
}

UPlacementFadeComponent* AKSCharacterBase::GetPlacementFadeComponent_Implementation() {
    return NULL;
}

USceneComponent* AKSCharacterBase::GetPCListenerPoint() {
    return NULL;
}

UPartyCharaPropertyComponent* AKSCharacterBase::GetPartyCharaPropertyComponent_Implementation() {
    return NULL;
}

FVector AKSCharacterBase::GetPartnerOffset() {
    return FVector{};
}

FVector AKSCharacterBase::GetPartnerFieldOffset() {
    return FVector{};
}

UOperationPlayerCameraComponentBase* AKSCharacterBase::GetOperationPlayerCameraComponent_Implementation() {
    return NULL;
}

UNpcPropertyComponent* AKSCharacterBase::GetNpcPropertyComponent_Implementation() {
    return NULL;
}

EKSCharacterAction AKSCharacterBase::GetNowActionID() const {
    return EKSCharacterAction::F_IDLE;
}

float AKSCharacterBase::GetMoveSpeed(EKSCharacterMoveMode NewMoveMode) {
    return 0.0f;
}

EKSCharacterMoveMode AKSCharacterBase::GetMoveMode() const {
    return EKSCharacterMoveMode::WALK;
}

EKSCharacterDir AKSCharacterBase::GetMoveDir(FVector inMoveDir, float AdjustX, float AdjustY) const {
    return EKSCharacterDir::FRONT;
}

EKSCharacterAction AKSCharacterBase::GetMoveAction_Implementation() {
    return EKSCharacterAction::F_IDLE;
}

ECHARACTER_MODE AKSCharacterBase::GetMode_Implementation() {
    return ECHARACTER_MODE::FIELD;
}

void AKSCharacterBase::GetLadderMoveParams(FVector& outUpEndPos, FVector& outDownEndPos, FVector& outMoveLadderPos) {
}

bool AKSCharacterBase::GetIsUsingLantern() {
    return false;
}

bool AKSCharacterBase::GetIsOpeningGuild() {
    return false;
}

bool AKSCharacterBase::GetIsMoveUpdate() const {
    return false;
}

bool AKSCharacterBase::GetIsDisableCharacterMovementFlag() {
    return false;
}

float AKSCharacterBase::GetIndoorFocusDistance() const {
    return 0.0f;
}

int32 AKSCharacterBase::GetIndoorFloor() {
    return 0;
}

bool AKSCharacterBase::GetIndoorFlag() {
    return false;
}

EKSCharacterAction AKSCharacterBase::GetIdleAction_Implementation() const {
    return EKSCharacterAction::F_IDLE;
}

UHunterPartnerFbComponent* AKSCharacterBase::GetHunterPartnerFbComponent_Implementation() {
    return NULL;
}

bool AKSCharacterBase::GetHouseChangeVisibleFlag() {
    return false;
}

int32 AKSCharacterBase::GetFollowOffset() {
    return 0;
}

UMaterialInterface* AKSCharacterBase::GetFlipbookOverrideMaterial() {
    return NULL;
}

UMaterialInstanceDynamic* AKSCharacterBase::GetFlipbookMaterial(FName customFlipbookName, bool bClearParameter) {
    return NULL;
}

FEquipLanternData AKSCharacterBase::GetEquipmentLanternData() const {
    return FEquipLanternData{};
}

bool AKSCharacterBase::GetEmotionVisibility() {
    return false;
}

FVector AKSCharacterBase::GetEmotionLocation(FVector Offset) {
    return FVector{};
}

FString AKSCharacterBase::GetEmotionEffectLabel(EEMOTION_TYPE EmotionType) {
    return TEXT("");
}

FVector AKSCharacterBase::GetDirVector() const {
    return FVector{};
}

EKSCharacterDir AKSCharacterBase::GetDir() const {
    return EKSCharacterDir::FRONT;
}

FVector AKSCharacterBase::GetDefaultFlipbookRelativePos() const {
    return FVector{};
}

UTexture2D* AKSCharacterBase::GetCurrentWeaponTexture() {
    return NULL;
}

ETRANSPORTATION_TYPE AKSCharacterBase::GetCurrentTransportType() {
    return ETRANSPORTATION_TYPE::NORMAL;
}

float AKSCharacterBase::GetCurrentMoveSpeed() {
    return 0.0f;
}

FVector AKSCharacterBase::GetCineCameraWorldLocation_Implementation() {
    return FVector{};
}


ECharacterState AKSCharacterBase::GetCharacterState() {
    return ECharacterState::None;
}

bool AKSCharacterBase::GetCharacterEnable() const {
    return false;
}

UCapsuleComponent* AKSCharacterBase::GetCharacterCollision_Implementation() {
    return NULL;
}

EKSCharacterCategory AKSCharacterBase::GetCharacterCategory() {
    return EKSCharacterCategory::NONE;
}

UPaperFlipbook* AKSCharacterBase::GetCharacterAction(EKSCharacterAction ActionID, EKSCharacterDir InDir) const {
    return NULL;
}

bool AKSCharacterBase::GetChangeDirLock() {
    return false;
}

FVector AKSCharacterBase::GetCameraLockPos_Implementation() {
    return FVector{};
}

FVector AKSCharacterBase::GetCameraInitOffset_Implementation() {
    return FVector{};
}

EKSCharacterAction AKSCharacterBase::GetBattleIdle(EKSCharacterAction eChkIdleAction, EKSCharacterDir eDir) {
    return EKSCharacterAction::F_IDLE;
}

UTexture2D* AKSCharacterBase::GetAnimationTexture(const int32 FrameIndex, FVector2D& vUV) {
    return NULL;
}

FName AKSCharacterBase::GetActionLabel() const {
    return NAME_None;
}

bool AKSCharacterBase::GetActionFlipbookName(EKSCharacterAction eAction, EKSCharacterDir eDir, FName& outFlipbookName, bool& outIsReverse) const {
    return false;
}

void AKSCharacterBase::ForceMovePoint_Implementation(FVector InLocation) {
}

void AKSCharacterBase::FirstMoveStep_Implementation() {
}


void AKSCharacterBase::DetachDebuffEffect(UParticleSystemComponent* pTargetParticle) {
}


void AKSCharacterBase::Debug_ShowSocketInfo(bool bEnable) {
}

void AKSCharacterBase::Debug_SetForceUpdateFootStep(bool Enable) {
}

void AKSCharacterBase::Debug_SetBarItemHandRate(int32 Rate) {
}


bool AKSCharacterBase::Debug_GetForceUpdateFootStep() {
    return false;
}

void AKSCharacterBase::Debug_GetEquipmentLanternData(FString& OutInfo) {
}



int32 AKSCharacterBase::Debug_GetBarItemHandRate() {
    return 0;
}

void AKSCharacterBase::CreateSoundComponent_Implementation() {
}

void AKSCharacterBase::ClearSocketBit(EDEBUFF_ATTACHSOCKET_TYPE eSocket) {
}

void AKSCharacterBase::ClearRespawnEmotionAfterTalk() {
}


bool AKSCharacterBase::CheckFlipbookMaterialKey(FName customFlipbookName) {
    return false;
}


bool AKSCharacterBase::ChangeSwoonState_Implementation(const FVector& SwoonOffsetPos, EKSCharacterAction SwoonAction, ENpcSwoonType SwoonType) {
    return false;
}

void AKSCharacterBase::ChangeFlipbook(FName FlipbookName, UMaterialInstanceDynamic* pMatInst) {
}

void AKSCharacterBase::ChangeCharacterModelOnly(FName ResourceLabel) {
}

void AKSCharacterBase::ChangeCanoeEffectOnStop() {
}


void AKSCharacterBase::CanoeTimelineUpdate(float Offset) {
}

void AKSCharacterBase::CanoeTimelineFinish() {
}


void AKSCharacterBase::CallbackLoaded(TArray<UObject*>& objList) {
}

FVector AKSCharacterBase::CalcLandLocation() {
    return FVector{};
}


bool AKSCharacterBase::AttachDebuffEffect(UParticleSystemComponent* pTargetParticle, EDEBUFF_ATTACHSOCKET_TYPE eType) {
    return false;
}

void AKSCharacterBase::AddRegistMusicRecordDeleagete() {
}

void AKSCharacterBase::AddMoveSpeed(float inAddSpeed) {
}

void AKSCharacterBase::AddFlipbookMaterial(FName customFlipbookName, UMaterialInstanceDynamic* pNewMaterial) {
}



