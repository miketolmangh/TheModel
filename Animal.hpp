/*
 * Animal.hpp
 *
 *  Created on: Jul 1, 2023
 *      Author: mike
 */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_
#include "Object.hpp"

class Animal :public Object
{
public:
	Animal() {}
	~Animal() {}
    virtual void beat() {}
};


#endif /* ANIMAL_HPP_ */
