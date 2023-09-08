#include "KSCharacterFunction.h"

UKSCharacterFunction::UKSCharacterFunction() {
}

void UKSCharacterFunction::SubPlayerCharacterFirstEquipment(EPlayableCharacterID CharacterID) {
}

LEVEL_AREA_TYPE UKSCharacterFunction::Static_GetPlayerCurrentArea() {
    return LEVEL_AREA_TYPE::NONE;
}

bool UKSCharacterFunction::StartPlayerLadderUp(AActor* ladderActor, UBoxComponent* ladderUpTrigger, const FVector& StartPosition) {
    return false;
}

bool UKSCharacterFunction::StartPlayerLadderDown(AActor* ladderActor, UBoxComponent* ladderUpTrigger, const FVector& StartPosition) {
    return false;
}

void UKSCharacterFunction::StartEpilogueParty() {
}

AKSCharacterBase* UKSCharacterFunction::SpawnPlayerCharacter(EPlayableCharacterID PlayerID, const FVector& Location, EKSCharacterDir Dir) {
    return NULL;
}

AKSCharacterBase* UKSCharacterFunction::SpawnNPCCharacter(const FName& ActionLabel, const FVector& Location, EKSCharacterDir Dir) {
    return NULL;
}

AKSCharacterBase* UKSCharacterFunction::SpawnEventCharacter(const FName& ActionLabel, const FVector& Location, EKSCharacterDir Dir) {
    return NULL;
}

AKSCharacterBase* UKSCharacterFunction::SpawnBarCharacter(const FName& ActionLabel, const FVector& Location, EKSCharacterDir Dir, int32 charIndex) {
    return NULL;
}

void UKSCharacterFunction::SortCharacterIDFromJobDisplay(TArray<int32> CharaID, TArray<int32>& outCharaID) {
}

bool UKSCharacterFunction::SetUpLadderUpStart(AActor* ladderActor, UBoxComponent* upCollision, FVector vPosition, EKSCharacterMoveMode eCheckMode, EKSCharacterMoveMode eSetMode, bool bEnable) {
    return false;
}

bool UKSCharacterFunction::SetUpLadderDownStart(AActor* ladderActor, UBoxComponent* downCollision, FVector vPosition, EKSCharacterMoveMode eCheckMode, EKSCharacterMoveMode eSetMode, bool bEnable) {
    return false;
}

void UKSCharacterFunction::SetupFirstLearnAbility() {
}

void UKSCharacterFunction::SetPlayerCharacterInput(UObject* WorldContextObject, bool Enable) {
}

void UKSCharacterFunction::SetPartyHouseIn(float Scale, float OffsetHeight, bool HouseOut, bool bNotPartyRefresh) {
}

void UKSCharacterFunction::SetMyShipSail(bool bOpen) {
}

void UKSCharacterFunction::SetLadderMoveParamsToPlayer(const FVector& upEndPos, const FVector& downEndPos) {
}

void UKSCharacterFunction::SetLadderCharacterPosition(FVector vPosition, EKSCharacterMoveMode eMoveMode) {
}

void UKSCharacterFunction::SetKSInputMode(UObject* WorldContextObject, EKSInputMode Mode) {
}

void UKSCharacterFunction::SetCharacterEnable(bool Enable) {
}

void UKSCharacterFunction::ResetPartyCharacterForOutGame() {
}

void UKSCharacterFunction::ResetLadderMode() {
}

void UKSCharacterFunction::RemoveCharacter(AKSCharacterBase* Character) {
}

void UKSCharacterFunction::RegisterCharacterToManageList(AKSCharacterBase* Character) {
}

void UKSCharacterFunction::RefreshPartyCharacterFormation() {
}

void UKSCharacterFunction::RefreshPartyAfterChangeMember(UObject* WorldContextObject) {
}

void UKSCharacterFunction::RefreshCharacterVoice(UObject* WorldContextObject, TArray<int32>& CharacterIDs) {
}

void UKSCharacterFunction::RefreshCharacterResource(bool containNPC) {
}

void UKSCharacterFunction::RefreshCharacterLantern() {
}

void UKSCharacterFunction::NotifyCharaFormDB(FName dbName, EDBNoticeType notice) {
}

bool UKSCharacterFunction::IsRegisteredInManageList(AKSCharacterBase* Character) {
    return false;
}

bool UKSCharacterFunction::IsPlayerCharacterInput(UObject* WorldContextObject) {
    return false;
}

bool UKSCharacterFunction::IsPlayerCharacter(AActor* charaActor) {
    return false;
}

bool UKSCharacterFunction::IsPlacateFollowNPC() {
    return false;
}

bool UKSCharacterFunction::IsMainPlayerCharacter(EPlayableCharacterID PlayerID) {
    return false;
}

bool UKSCharacterFunction::IsLureFollowNPC() {
    return false;
}

bool UKSCharacterFunction::IsLoaded() {
    return false;
}

bool UKSCharacterFunction::IsLearnedAbility() {
    return false;
}

bool UKSCharacterFunction::IsLeadFollowNPC() {
    return false;
}

bool UKSCharacterFunction::IsHireFollowNPC() {
    return false;
}

bool UKSCharacterFunction::IsGuestPlayerCharacterFromID(int32 CharaID) {
    return false;
}

bool UKSCharacterFunction::IsGuestPlayerCharacter(EPlayableCharacterID PlayerID) {
    return false;
}

bool UKSCharacterFunction::IsFieldCommandActionEnd(AKSCharacterBase* Character) {
    return false;
}

bool UKSCharacterFunction::IsEquipedSupportAbility(int32 CharacterID, ESUPPORT_AILMENT_TYPE SupportAilment, FSupportAbilityDataBase& outEquipedSupportAbility) {
    return false;
}

bool UKSCharacterFunction::IsEightParty() {
    return false;
}

void UKSCharacterFunction::InitPlayerAfterSetSaveData(UObject* WorldContextObject) {
}

FVector UKSCharacterFunction::GetTargetRearLocation(AKSCharacterBase* TargetCharacter, float Scale) {
    return FVector{};
}

EKSCharacterDir UKSCharacterFunction::GetReverseDirByPosition(AKSCharacterBase* CharaA, AKSCharacterBase* CharB) {
    return EKSCharacterDir::FRONT;
}

EKSCharacterDir UKSCharacterFunction::GetReverseDir(const EKSCharacterDir& Dir) {
    return EKSCharacterDir::FRONT;
}

UPlayerPropertyComponent* UKSCharacterFunction::GetPlayerProperty() {
    return NULL;
}

AKSCharacterBase* UKSCharacterFunction::GetPlayerObject() {
    return NULL;
}

bool UKSCharacterFunction::GetPlayerDataByIntID(int32 CharacterID, FPlayableCharacterData& CharacterData) {
    return false;
}

bool UKSCharacterFunction::GetPlayerDataByID(EPlayableCharacterID PlayerID, FPlayableCharacterData& CharacterData) {
    return false;
}

FName UKSCharacterFunction::GetPlayerCharacterLabelWithForm(UObject* WorldContextObject, EPlayableCharacterID PlayerID, uint8 CharaForm) {
    return NAME_None;
}

uint8 UKSCharacterFunction::GetPlayerCharacterForm(UObject* WorldContextObject, EPlayableCharacterID PlayerID) {
    return 0;
}

void UKSCharacterFunction::GetNPCResourceLabelFromLevelName_NoReaction(TArray<FSimpleActionLoad>& OutData, FName levelName) {
}

void UKSCharacterFunction::GetNPCResourceLabelFromLevelName_ExceptNoReaction(TArray<FName>& OutData, FName levelName) {
}

void UKSCharacterFunction::GetNPCResourceLabelFromLevelName(TArray<FName>& OutData, FName levelName) {
}

bool UKSCharacterFunction::GetMyShipSail() {
    return false;
}

EKSCharacterMoveMode UKSCharacterFunction::GetMoveModeForAction(EKSCharacterAction Action) {
    return EKSCharacterMoveMode::WALK;
}

bool UKSCharacterFunction::GetLandLocation(UObject* WorldContextObject, FVector& OutNewLocation, const FVector& Location, float Length, const FVector AddOffset) {
    return false;
}

AKSPlayerController* UKSCharacterFunction::GetKSPlayerController(UObject* WorldContextObject) {
    return NULL;
}

EKSInputMode UKSCharacterFunction::GetKSInputMode(UObject* WorldContextObject) {
    return EKSInputMode::MODE_CHARA;
}

FVector UKSCharacterFunction::GetDirVector(EKSCharacterDir Dir) {
    return FVector{};
}

void UKSCharacterFunction::GetCurrentPartyResourceLabel(TArray<FName>& OutData, UObject* WorldContextObject) {
}

TArray<ESpecialActionType> UKSCharacterFunction::GetCharacterSpecialActionTypeList(int32 CharacterID) {
    return TArray<ESpecialActionType>();
}

ESpecialActionType UKSCharacterFunction::GetCharacterSpecialActionType(int32 CharacterID, int32 Index) {
    return ESpecialActionType::eNONE;
}

TArray<FName> UKSCharacterFunction::GetCharacterSpecialActionTextLabelsForMenuName(int32 CharacterID) {
    return TArray<FName>();
}

TArray<FName> UKSCharacterFunction::GetCharacterSpecialActionTextLabelsForMenuDetail(int32 CharacterID) {
    return TArray<FName>();
}

TArray<FName> UKSCharacterFunction::GetCharacterSpecialActionTextLabelsForBattleCommandName(int32 CharacterID) {
    return TArray<FName>();
}

TArray<FName> UKSCharacterFunction::GetCharacterSpecialActionTextLabelsForBattleCommandDetail(int32 CharacterID) {
    return TArray<FName>();
}

TArray<FName> UKSCharacterFunction::GetCharacterSpecialActionTextLabelsForAbilityLabel(int32 CharacterID) {
    return TArray<FName>();
}

FName UKSCharacterFunction::GetCharacterSpecialActionTextLabelForPlayerSelectDetail(int32 CharacterID) {
    return NAME_None;
}

FName UKSCharacterFunction::GetCharacterSpecialActionTextLabelForMenuName(int32 CharacterID, int32 Index) {
    return NAME_None;
}

FName UKSCharacterFunction::GetCharacterSpecialActionTextLabelForMenuDetail(int32 CharacterID, int32 Index) {
    return NAME_None;
}

FName UKSCharacterFunction::GetCharacterSpecialActionTextLabelForBattleCommandName(int32 CharacterID, int32 Index) {
    return NAME_None;
}

FName UKSCharacterFunction::GetCharacterSpecialActionTextLabelForBattleCommandDetail(int32 CharacterID, int32 Index) {
    return NAME_None;
}

TArray<FName> UKSCharacterFunction::GetCharacterSpecialActionTextLabelForAbilityLabel(int32 CharacterID, int32 Index) {
    return TArray<FName>();
}

FName UKSCharacterFunction::GetCharacterLabelNameForSaveLoad(UObject* WorldContextObject, EPlayableCharacterID PlayerID, EJOB_TYPE JobID, int32 CharaForm) {
    return NAME_None;
}

FName UKSCharacterFunction::GetCharacterLabelNameForJob(UObject* WorldContextObject, EPlayableCharacterID PlayerID, EJOB_TYPE JobID) {
    return NAME_None;
}

FName UKSCharacterFunction::GetCharacterLabelNameForEventFlag(UObject* WorldContextObject, EPlayableCharacterID PlayerID) {
    return NAME_None;
}

FName UKSCharacterFunction::GetCharacterLabelNameForBaseJob(UObject* WorldContextObject, EPlayableCharacterID PlayerID) {
    return NAME_None;
}

FName UKSCharacterFunction::GetCharacterLabelName(UObject* WorldContextObject, EPlayableCharacterID PlayerID, EJOB_TYPE JobID, bool IsEventFlagCheck) {
    return NAME_None;
}

EPlayableCharacterID UKSCharacterFunction::GetCharacterID(AKSCharacterBase* Target, bool& IsPlayableCharacter) {
    return EPlayableCharacterID::eNONE;
}

bool UKSCharacterFunction::GetCharacterFormData(FCharacterFormData& OutData, FName Label, EKSCharacterAction Action, EKSCharacterDir Dir) {
    return false;
}

TArray<MJFieldCommandType> UKSCharacterFunction::GetCharacterFieldCommandType(EPlayableCharacterID PlayerID) {
    return TArray<MJFieldCommandType>();
}

void UKSCharacterFunction::GetAllPlayerCharacterIdList(TArray<int32>& outCharaIdList) {
}

void UKSCharacterFunction::GetAllPlayerCharacterEnumList(TArray<EPlayableCharacterID>& outCharaEnumList) {
}

FName UKSCharacterFunction::GetActionLabelNameByResourceLabel(FName ResourceLabel) {
    return NAME_None;
}

void UKSCharacterFunction::FullRecoveryAllPartyMember() {
}

bool UKSCharacterFunction::FinishLadderModeWithoutPosition(EKSCharacterMoveMode eCheckMode, EKSCharacterMoveMode eSetMode, bool bEnable) {
    return false;
}

bool UKSCharacterFunction::FinishLadderMode(FVector vPosition, EKSCharacterMoveMode eCheckMode, EKSCharacterMoveMode eSetMode, bool bEnable) {
    return false;
}

bool UKSCharacterFunction::EndPlayerLadderUp(const FVector& EndPosition) {
    return false;
}

bool UKSCharacterFunction::EndPlayerLadderDown(const FVector& EndPosition) {
    return false;
}

void UKSCharacterFunction::EndEpilogueParty() {
}

bool UKSCharacterFunction::EnablePartyCharaRemove() {
    return false;
}

TArray<FString> UKSCharacterFunction::Debug_GetPlayableCharacterIdNameList() {
    return TArray<FString>();
}

FString UKSCharacterFunction::Debug_GetPlayableCharacterIdName(EPlayableCharacterID CharaID) {
    return TEXT("");
}

void UKSCharacterFunction::ClearActionReferenceObject() {
}

bool UKSCharacterFunction::CheckStopAction(FName ActionLabel, EKSCharacterAction Action) {
    return false;
}

bool UKSCharacterFunction::CheckLadderState(EKSCharacterMoveMode eMoveMode, bool bEnable) {
    return false;
}

bool UKSCharacterFunction::CheckHaveLantern() {
    return false;
}

bool UKSCharacterFunction::CheckCharacterHaveSpecialAction(int32 CharacterID, ESpecialActionType Type, int32& OutputIndex) {
    return false;
}

void UKSCharacterFunction::AddPlayerCharacterFirstEquipment(EPlayableCharacterID CharacterID) {
}


