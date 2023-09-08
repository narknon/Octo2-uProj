#include "LightStage.h"

ALightStage::ALightStage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pMPC = NULL;
    this->m_bUseFog = true;
    this->m_bUseSkyDome = true;
    this->m_pSkyMaterial = NULL;
    this->m_bUseSkyLight = true;
    this->m_pLightFunctionMaterial = NULL;
    this->m_fShadowDistance = 10000.00f;
    this->m_fShadowBias = 0.20f;
    this->m_bUseSun = true;
    this->m_bUpdate = true;
    this->m_pcCubemap = NULL;
    this->m_bIndoorPreview = false;
    this->m_fIndoorSunBrightness = 0.00f;
    this->m_fIndoorSkyLightIntensity = 0.00f;
    this->m_fIndoorFogDensity = 0.00f;
    this->m_pMainDirectionalLight = NULL;
    this->m_pFog = NULL;
    this->m_pSkyLight = NULL;
    this->m_pSkyMesh = NULL;
}


