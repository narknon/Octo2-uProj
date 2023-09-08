#include "ProceduralLinePlace.h"

AProceduralLinePlace::AProceduralLinePlace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh_Root_St = NULL;
    this->Mesh_Root_Lp = NULL;
    this->Mesh_Root_End = NULL;
    this->Mesh_YZ_Top_St = NULL;
    this->Mesh_YZ_Top_Lp = NULL;
    this->Mesh_YZ_Top_End = NULL;
    this->Mesh_YZ_Mdl_St = NULL;
    this->Mesh_YZ_Mdl_Lp = NULL;
    this->Mesh_YZ_Mdl_End = NULL;
    this->Mesh_XY_Top_St = NULL;
    this->Mesh_XY_Top_Lp = NULL;
    this->Mesh_XY_Top_End = NULL;
    this->Mesh_XY_Mdl_St = NULL;
    this->Mesh_XY_Mdl_Lp = NULL;
    this->Mesh_XY_Mdl_End = NULL;
    this->Mesh_XYZ2_Top_St = NULL;
    this->Mesh_XYZ2_Top_Lp = NULL;
    this->Mesh_XYZ2_Top_End = NULL;
    this->Mesh_XYZ2_Mdl_St = NULL;
    this->Mesh_XYZ2_Mdl_Lp = NULL;
    this->Mesh_XYZ2_Mdl_End = NULL;
    this->Mesh_XYZ3_Top_St = NULL;
    this->Mesh_XYZ3_Top_Lp = NULL;
    this->Mesh_XYZ3_Top_End = NULL;
    this->Mesh_XYZ3_Mdl_St = NULL;
    this->Mesh_XYZ3_Mdl_Lp = NULL;
    this->Mesh_XYZ3_Mdl_End = NULL;
}

void AProceduralLinePlace::ReleaseBase() {
}


