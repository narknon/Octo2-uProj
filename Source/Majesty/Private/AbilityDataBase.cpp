#include "AbilityDataBase.h"

FAbilityDataBase::FAbilityDataBase() {
    this->ID = 0;
    this->AbilityID = 0;
    this->AbilityType = EABILITY_TYPE::ePHYSICS;
    this->AbilityUseType = EABILITY_USE_TYPE::eALWAYS;
    this->AlwaysDisable = false;
    this->Attribute = EATTRIBUTE_TYPE::eNONE;
    this->DependWeapon = false;
    this->RestrictWeapon = EWEAPON_CATEGORY::eSWORD;
    this->TargetType = EBATTLE_TARGET_TYPE::eSELF;
    this->ExceptEnforcer = false;
    this->CostType = EABILITY_COST_TYPE::eNONE;
    this->CostValue = 0;
    this->HitRatio = 0;
    this->CriticalRatio = 0;
    this->CriticalPower = 0;
    this->AbilityRatio = 0;
    this->BaseCount = 0;
    this->MinimumCount = 0;
    this->RandomCountMin = 0;
    this->RandomCountMax = 0;
    this->EstimateOrderType = EBATTLE_ACTION_ORDER_ESTIMATE_TYPE::eNONE;
    this->EstimateOrderCount = 0;
    this->KeepBoostEffect = false;
    this->EnableItemAll = false;
    this->EnableSkillAll = false;
    this->EnableConvergence = false;
    this->EnableDiffusion = false;
    this->EnableReflection = false;
    this->EnableCounter = false;
    this->EnableHideOut = false;
    this->EnableRepeat = false;
    this->EnableCover = false;
    this->EnableProvoke = false;
    this->EnableDisableMagic = false;
    this->EnableEnchant = false;
    this->EnableChaseAttack = false;
    this->EnableWeakCheckAll = false;
    this->EnableNormalAttackAll = false;
    this->EnableSession = false;
    this->EnableBusinessSupport = false;
    this->EnableForceWeakness = false;
    this->EnableNoUseMaterial = false;
    this->EnableSwitchWeapon = false;
    this->EnableCompensationMagic = false;
    this->EnableExcitement = false;
    this->SongAbilityFlag = false;
    this->DanceAbilityFlag = false;
    this->EnableAutoTameMonster = false;
    this->UseAbilityCamera = false;
    this->SlideFrame = 0;
}

