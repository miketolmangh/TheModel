/*
 * SoulColective.hpp
 *
 *  Created on: Jul 5, 2023
 *      Author: mike
 */

#ifndef SOULCOLLECTIVE_HPP_
#define SOULCOLLECTIVE_HPP_
#include "CONST.HPP"
#include "Soul.hpp"
#include "Chair.hpp"
#include "SoulRelation.hpp"

class SoulCollective
{
private:
	SoulRelation* m_SoulRelation;

private:
	Chair* m_ptrChairs[I_MAX_HUMANS];
	Soul* m_ptrSouls[I_MAX_HUMANS];

public:
	SoulCollective();
	~SoulCollective();
    void startScheduler();
};

#endif /* SOULCOLLECTIVE_HPP_ */
