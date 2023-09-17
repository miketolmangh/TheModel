/*
 * Earth.hpp
 *
 *  Created on: Jun 30, 2023
 *      Author: mike
 */

#ifndef EARTH_HPP_
#define EARTH_HPP_

#include "Planet.hpp"
#include "CONST.HPP"
#include "Animal.hpp"

class Earth : public Planet
{
private:
    void createHumans();
    Animal* m_phumans[I_MAX_HUMANS];

public:
    Earth();
    ~Earth() {}
};


#endif /* EARTH_HPP_ */
