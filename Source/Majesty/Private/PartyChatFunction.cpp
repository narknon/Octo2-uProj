#include "PartyChatFunction.h"

UPartyChatFunction::UPartyChatFunction() {
}

bool UPartyChatFunction::IsWithinMainStoryProgress(const FPartyChat& PartyChat) {
    return false;
}

bool UPartyChatFunction::IsValidPartyChatData(const FPartyChat& PartyChat) {
    return false;
}

bool UPartyChatFunction::IsTraveledUniqueMapEnoughTimes() {
    return false;
}

bool UPartyChatFunction::IsSameLevel(const FPartyChat& PartyChat) {
    return false;
}

bool UPartyChatFunction::IsPlayingFinalChapterPartyChat() {
    return false;
}

bool UPartyChatFunction::IsChokerDetachPartyChat() {
    return false;
}

bool UPartyChatFunction::IsChokerAttachPartyChat() {
    return false;
}

bool UPartyChatFunction::IsAnyCharacterPlayingMainStory() {
    return false;
}

bool UPartyChatFunction::IsAllRequiredCharactersInParty(const FPartyChat& PartyChat, bool containSubMember) {
    return false;
}


