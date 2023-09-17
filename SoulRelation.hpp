/*
 * SoulRelationRelation.hpp
 *
 *  Created on: Sep 12, 2023
 *      Author: mike
 */

#ifndef SOULRELATION_HPP_
#define SOULRELATION_HPP_
#include "Soul.hpp"

class SoulRelation
{
    void createRelationship(Soul*, Soul*);
    Soul* m_SoulA;
    Soul* m_SoulB;

public:
	SoulRelation();
	~SoulRelation();
};
#endif /* SOULRELATION_HPP_ */
