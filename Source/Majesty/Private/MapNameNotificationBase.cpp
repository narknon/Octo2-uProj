#include "MapNameNotificationBase.h"

UMapNameNotificationBase::UMapNameNotificationBase() {
    this->m_OpenOwner = EMAP_NAME_NOTIFICATION_OPEN_OWNER::eDEFAULT;
}

void UMapNameNotificationBase::SetOpenOwner(EMAP_NAME_NOTIFICATION_OPEN_OWNER Owner) {
}



bool UMapNameNotificationBase::OpenEventAreaUI_Implementation(FName RegionName, FName MapName, UTexture* EmblemTexture) {
    return false;
}

bool UMapNameNotificationBase::OpenAreaUI_Implementation(FName RegionName, FName MapName, int32 EncounterLevel, int32 DangerLevel, bool IsOpenKeep, UTexture* EmblemTexture, FName NotificationFormat) {
    return false;
}




