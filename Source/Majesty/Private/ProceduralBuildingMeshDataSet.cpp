#include "ProceduralBuildingMeshDataSet.h"

FProceduralBuildingMeshDataSet::FProceduralBuildingMeshDataSet() {
    this->m_cGroundPost = NULL;
    this->m_cGroundLoopX = NULL;
    this->m_cGroundLoopY = NULL;
    this->m_cWallPost = NULL;
    this->m_cWallLoopX = NULL;
    this->m_cWallLoopY = NULL;
    this->m_cRoofEdgeStart = NULL;
    this->m_cRoofEdgeLoop = NULL;
    this->m_cRoofEdgeLoop2 = NULL;
    this->m_cRoofEdgeEnd = NULL;
    this->m_cRoofCenterStart = NULL;
    this->m_cRoofCenterLoop = NULL;
    this->m_cRoofCenterLoop2 = NULL;
    this->m_cRoofCenterEnd = NULL;
    this->m_cRoofTopEventStart = NULL;
    this->m_cRoofTopEventLoop = NULL;
    this->m_cRoofTopEventLoop2 = NULL;
    this->m_cRoofTopEventEnd = NULL;
    this->m_cRoofTopOddStart = NULL;
    this->m_cRoofTopOddLoop = NULL;
    this->m_cRoofTopOddLoop2 = NULL;
    this->m_cRoofTopOddEnd = NULL;
    this->m_cRoofSideLeft = NULL;
    this->m_cRoofSideLoop = NULL;
    this->m_cRoofSideRight = NULL;
    this->m_cRoofSidePost = NULL;
    this->m_cRoofSideTop = NULL;
    this->m_cRoofSideLoopRight = NULL;
    this->m_cRoofSideLoopLeft = NULL;
}

