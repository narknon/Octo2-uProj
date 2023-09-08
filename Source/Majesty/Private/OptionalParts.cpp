#include "OptionalParts.h"

FOptionalParts::FOptionalParts() {
    this->m_cOptionalParts = NULL;
    this->m_cOptionalPartsLeft = NULL;
    this->m_cOptionalPartsRight = NULL;
    this->m_bIsSnapGrid = false;
    this->m_bIsPatternX = false;
    this->m_bIsPatternY = false;
    this->m_bIsPatternAround = false;
    this->m_bIsPatternBack = false;
    this->m_bIsOverlapPost = false;
}

