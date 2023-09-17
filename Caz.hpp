/*
 * Caz.hpp
 *
 *  Created on: Aug 14, 2023
 *      Author: mike
 */

#ifndef CAZ_HPP_
#define CAZ_HPP_

#include "FemaleHuman.hpp"

class Caz : public FemaleHuman
{
public:
    Caz() {}
    ~Caz() {}
    virtual void beat () {}
};

#endif /* CAZ_HPP_ */
