#include "MJRawInputSettings.h"

UMJRawInputSettings::UMJRawInputSettings() {
    this->DeviceConfigurations.AddDefaulted(1);
    this->bRegisterDefaultDevice = true;
}


