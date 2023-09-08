#include "RadarMapBase.h"

URadarMapBase::URadarMapBase() {
}







void URadarMapBase::RemoveDestinationIconParam(FName DestinationLabel) {
}

void URadarMapBase::RemoveAllDestinationIconParam() {
}





void URadarMapBase::ModifyDestinationIconParam(FName DestinationLabel, const FRadarMapIconParam& iconParam) {
}

FRadarMapIconParam URadarMapBase::GetDestinationIconParam(FName DestinationLabel) {
    return FRadarMapIconParam{};
}

bool URadarMapBase::ExistsDestinationIconParam(FName DestinationLabel) {
    return false;
}

FString URadarMapBase::Debug_GetAllDestinationIconParam() {
    return TEXT("");
}





void URadarMapBase::AddDestinationIconParam(FName DestinationLabel, const FRadarMapIconParam& iconParam) {
}


