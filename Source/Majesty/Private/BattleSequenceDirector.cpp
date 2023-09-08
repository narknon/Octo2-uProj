#include "BattleSequenceDirector.h"

ABattleSequenceDirector::ABattleSequenceDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_cBoostSequenceActor = NULL;
    this->m_cAbilityCameraSequenceActor = NULL;
    this->m_cWeatherSequenceActor = NULL;
    this->m_cEncountSequenceActor = NULL;
    this->m_cBreakSequenceActor = NULL;
    this->m_cActionCommandSequenceActor = NULL;
    this->m_cBattleEventSequenceActor = NULL;
    this->m_cBattleDashSequenceActor = NULL;
    this->m_cBattleResultSequenceActor = NULL;
    this->m_cBattlePartyChangeSequenceActor = NULL;
    this->m_cBattleCamera = NULL;
    this->m_cPostProcessVolume = NULL;
    this->m_nBoostLevel = 0;
    this->m_cBattleDustEffectActor = NULL;
    this->m_cBoostEffectLv1Actor = NULL;
    this->m_cBoostEffectLv2Actor = NULL;
    this->m_cBoostEffectLv3Actor = NULL;
    this->m_cPointLightActor = NULL;
    this->m_eAbilityCameraSlideSequence = EBATTLE_CAMERA_SEQUENCE::eCAMERA_SEQUENCE_NONE;
    this->m_eAbilityCameraBackSequence = EBATTLE_CAMERA_SEQUENCE::eCAMERA_SEQUENCE_NONE;
    this->m_cActionCommand = NULL;
    this->SUB_ACTION_COMMAND_MAX = 12;
    this->m_nSubActionCommandCounter = 0;
    this->ABILITY_POINT_LIGHT_MAX = 2;
    this->m_cPartyAreaMounter = NULL;
    this->m_cEnemyAreaMounter = NULL;
    this->m_cEventBalloon = NULL;
}







void ABattleSequenceDirector::UpdateAbilityCameraSlideSegment(ULevelSequencePlayer* cPlayer, float fSlideRate) {
}

void ABattleSequenceDirector::UpdateAbilityCameraBackSegment(ULevelSequencePlayer* cPlayer, float fBackRate) {
}

void ABattleSequenceDirector::UnRegisterSequenceUpdated(ULevelSequencePlayer* cPlayer) {
}

void ABattleSequenceDirector::UnRegisterAbilitySequenceUpdated(ABattleAbilitySequenceActor* cAbilitySequence) {
}

void ABattleSequenceDirector::TickManualSequencerUpdate(float fDeltaSeconds) {
}





void ABattleSequenceDirector::SetWeatherSequencerRestoreFlag(bool bRestoreState) {
}

bool ABattleSequenceDirector::SetSequenceTrackDisable(ALevelSequenceActor* cSequenceActor, FMovieSceneObjectBindingID cTrackID, bool bDisable) {
    return false;
}









void ABattleSequenceDirector::RegisterSequenceUpdated(ULevelSequencePlayer* cPlayer, FCameraInterpolationDelegate cDelegate) {
}

void ABattleSequenceDirector::RegisterAbilitySequenceUpdated(ABattleAbilitySequenceActor* cAbilitySequence) {
}










void ABattleSequenceDirector::NotifyCameraCut(ACineCameraActor* cTargetCamera) {
}





FName ABattleSequenceDirector::GetPlayerLabelByIntID(int32 nPlayerID) {
    return NAME_None;
}


ULevelSequenceDirector* ABattleSequenceDirector::GetLevelSequenceDirector(ULevelSequencePlayer* cPlayer) {
    return NULL;
}







bool ABattleSequenceDirector::GetAbilityCameraSlideSegment(ULevelSequencePlayer* cPlayer, float& fLength) {
    return false;
}


bool ABattleSequenceDirector::GetAbilityCameraBackSegment(ULevelSequencePlayer* cPlayer, float& fLength) {
    return false;
}














bool ABattleSequenceDirector::FindTrackAttachInfoByTag(ALevelSequenceActor* cSequenceActor, FName strTag, EBATTLE_EFFECT_ATTACH_TYPE& eAttachType) {
    return false;
}

bool ABattleSequenceDirector::FindEventActorTrackByTag(ALevelSequenceActor* cSequenceActor, FName strTag) {
    return false;
}

bool ABattleSequenceDirector::FindEmitterTemplateByTag(ALevelSequenceActor* cSequenceActor, FName strTag, TArray<UParticleSystem*>& acEmitterTemplate, TArray<FMovieSceneObjectBindingID>& acBindingID) {
    return false;
}










void ABattleSequenceDirector::ExecForceTickForRigRail(ACameraRig_Rail* cTargetCameraRig) {
}

void ABattleSequenceDirector::ExecForceTickForCineCamera(ACineCameraActor* cTargetCamera) {
}























ULevelSequencePlayer* ABattleSequenceDirector::CreateAbilitySequencePlayer(UObject* WorldContextObject, ULevelSequence* cLevelSequence, FMovieSceneSequencePlaybackSettings cSettings, ABattleAbilitySequenceActor*& OutActor) {
    return NULL;
}




bool ABattleSequenceDirector::CheckTrackHaveSpecifiedTag(ALevelSequenceActor* cSequenceActor, FMovieSceneObjectBindingID cTrackID, FName strCheckTag) {
    return false;
}

bool ABattleSequenceDirector::CheckSequencerHaveSpecifiedTag(ALevelSequenceActor* cSequenceActor, FName strCheckTag) {
    return false;
}




