/*
 * OldUniverse.hpp
 *
 *  Created on: Jun 30, 2023
 *      Author: mike
 */

#ifndef OLDUNIVERSE_HPP_
#define OLDUNIVERSE_HPP_
#include <time.h>
#include "MilkyWay.hpp"
#include "Object.hpp"

class OldUniverse
{
private:
	MilkyWay m_milkyWay;
    void BigBang();
    void BigCollapse();
    clock_t m_lastCollapse;

public:
	OldUniverse();
	~OldUniverse() {}
    void BigCollapseMaybe();
};

#endif /* OLDUNIVERSE_HPP_ */
