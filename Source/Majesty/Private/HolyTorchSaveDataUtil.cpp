#include "HolyTorchSaveDataUtil.h"

UHolyTorchSaveDataUtil::UHolyTorchSaveDataUtil() {
}

void UHolyTorchSaveDataUtil::SetHolyTorchState(EHOLY_TORCH_TYPE torchType, EHOLY_TORCH_STATE torchState) {
}

bool UHolyTorchSaveDataUtil::IsAllHolyTorchReBurn() {
    return false;
}

EHOLY_TORCH_STATE UHolyTorchSaveDataUtil::GetHolyTorchState(EHOLY_TORCH_TYPE torchType) {
    return EHOLY_TORCH_STATE::INITIAL;
}

int32 UHolyTorchSaveDataUtil::GetBurnOutNum() {
    return 0;
}

int32 UHolyTorchSaveDataUtil::GetBurnNum() {
    return 0;
}


