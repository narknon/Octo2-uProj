#include "PartyChat.h"

FPartyChat::FPartyChat() {
    this->ID = 0;
    this->PartyChatType = EPARTY_CHAT_TYPE::MAIN_STORY;
    this->IgnoreRequiredCharacter = false;
    this->NeedLevelChangeCount = 0;
    this->BurnTorchCountLimit = 0;
    this->IsIgnoreFixedPartyMode = false;
}

