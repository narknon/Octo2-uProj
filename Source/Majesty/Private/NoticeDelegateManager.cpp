#include "NoticeDelegateManager.h"

ANoticeDelegateManager::ANoticeDelegateManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ANoticeDelegateManager::Static_BroadcastNotice(ENOTICE_TYPE noticeType, const FNoticeArgs& NoticeArgs) {
    return false;
}

void ANoticeDelegateManager::RemoveOneShotNoticeDelegate(ENOTICE_TYPE noticeType, FNoticeDelegateBP noticeDelegate) {
}

void ANoticeDelegateManager::RegisterOneShotNoticeDelegate(ENOTICE_TYPE noticeType, FNoticeDelegateBP noticeDelegate) {
}

void ANoticeDelegateManager::RegisterNoticeDelegate(ENOTICE_TYPE noticeType, FNoticeDelegateBP noticeDelegate) {
}

void ANoticeDelegateManager::BroadcastNotice(ENOTICE_TYPE noticeType, const FNoticeArgs& NoticeArgs) {
}


