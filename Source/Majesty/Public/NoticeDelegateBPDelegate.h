#pragma once
#include "CoreMinimal.h"
#include "ENOTICE_TYPE.h"
#include "NoticeArgs.h"
#include "NoticeDelegateBPDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FNoticeDelegateBP, ENOTICE_TYPE, noticeType, const FNoticeArgs&, Args);

