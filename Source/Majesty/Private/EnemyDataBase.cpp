#include "EnemyDataBase.h"

FEnemyDataBase::FEnemyDataBase() {
    this->ID = 0;
    this->DisplayRank = 0;
    this->EnemyLevel = 0;
    this->DamageRatio = 0.00f;
    this->NPCFlag = false;
    this->DeadEffectSlow = false;
    this->MainEnemy = false;
    this->NonPartBattle = false;
    this->UseCatDamageType = false;
    this->DisableDeadKnockBack = false;
    this->DisableBreakSlow = false;
    this->LegendTameMonster = false;
    this->Exp = 0;
    this->JobPoint = 0;
    this->Money = 0;
    this->StealMoneyGuard = false;
    this->StealMoney = 0;
    this->DropProbability = 0;
    this->StealGuard = false;
    this->TameEnable = false;
    this->DefaultTameRate = 0.00f;
    this->FirstBP = 0;
    this->BribeGuard = false;
    this->BribeMoney = 0;
    this->AbilitySEDelay = 0.00f;
    this->RevealShieldPoint = 0;
    this->WaitEnemyActionFrame = 0;
}

