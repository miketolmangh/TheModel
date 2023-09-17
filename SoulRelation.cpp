/*
 * SoulRelation.cpp
 *
 *  Created on: Sep 12, 2023
 *      Author: mike
 */
 #include "SoulRelation.hpp"
#include "GLOBALS.HPP"

SoulRelation::SoulRelation()
{
    createRelationship((Soul*) glblMike, (Soul*) glblJohnFoster);
}

SoulRelation::~SoulRelation()
{
}

void SoulRelation::createRelationship(Soul* SoulA, Soul* SoulB)
{
    m_SoulA = SoulA;
    m_SoulB = SoulB;
}
