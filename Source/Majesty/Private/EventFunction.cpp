#include "EventFunction.h"

UEventFunction::UEventFunction() {
}

bool UEventFunction::SetTheaterEventData(FRequestDelegate Delegate) {
    return false;
}

void UEventFunction::SetNpcTalkDir(AKSCharacterBase* targetNpc, int32 ParamDir) {
}

bool UEventFunction::SetJsonData(TArray<FString>& outEventData, UJsonFieldData* jsonData, const FString& Command, const FString& eventJsonName) {
    return false;
}

bool UEventFunction::SetEventData(FRequestDelegate Delegate) {
    return false;
}

bool UEventFunction::PlayEventTheater(FName EventName, int32 OverrideTimeZone) {
    return false;
}

void UEventFunction::MakeActiveEventLabelList(TArray<FName>& outEventLabelList, const FPlacementData& placeData) {
}

bool UEventFunction::IsEventSkipEnable() {
    return false;
}

bool UEventFunction::IsEventPlayTheater() {
    return false;
}

bool UEventFunction::IsEventPlaying() {
    return false;
}

bool UEventFunction::IsEventBattleDefeatNextEvent() {
    return false;
}

bool UEventFunction::IsEventActive(int32 StartFlag, int32 EndFlag) {
    return false;
}

bool UEventFunction::IsActiveByEventFlag(int32 StartFlag, int32 EndFlag) {
    return false;
}

int32 UEventFunction::GetThiefChokerFlag() {
    return 0;
}

FName UEventFunction::GetThiefActionLabelPartyChat(int32 PartyChatId, bool bTheater) {
    return NAME_None;
}

FName UEventFunction::GetThiefActionLabelName(bool Flag) {
    return NAME_None;
}

FName UEventFunction::GetThiefActionLabelMainStory(int32 StoryTaskID, bool bTheater) {
    return NAME_None;
}

FString UEventFunction::GetPlayingEventName() {
    return TEXT("");
}

int32 UEventFunction::GetMovieSectionsCount(UMovieScene* Movie) {
    return 0;
}

UMovieSceneEventTriggerSection* UEventFunction::GetMovieSectionData(UMovieScene* Movie, int32 Count) {
    return NULL;
}

UMovieSceneAtomSection* UEventFunction::GetMovieSectionAtomData(UMovieScene* Movie, int32 Count) {
    return NULL;
}

FMovieSceneEvent UEventFunction::GetEventTriggerParam(UMovieSceneEventTriggerSection* Section, int32 Count) {
    return FMovieSceneEvent{};
}

int32 UEventFunction::GetEventTriggerNum(UMovieSceneEventTriggerSection* Section) {
    return 0;
}

AKSCharacterBase* UEventFunction::GetEventTargetCharacter() {
    return NULL;
}

bool UEventFunction::GetEventMemoryObjectFlag(int32 StoryTaskID, int32 FlagID) {
    return false;
}

EKSCharacterDir UEventFunction::GetEventDir(int32 ParamDir) {
    return EKSCharacterDir::FRONT;
}

bool UEventFunction::EventPlay(FName EventName, AKSCharacterBase* TargetCharacter) {
    return false;
}

void UEventFunction::EventFlagRefresh(UObject* WorldContextObject) {
}

bool UEventFunction::CheckCurrentTimeByTimeZoneTriggerType(ETIMEZONE_TRIGGER_TYPE timeZoneTrgType) {
    return false;
}


