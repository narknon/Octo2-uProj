#pragma once
#include "CoreMinimal.h"
#include "ENOTICE_TYPE.h"
#include "NoticeArgs.h"
#include "NoticeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNoticeDelegate, ENOTICE_TYPE, noticeType, const FNoticeArgs&, Args);

