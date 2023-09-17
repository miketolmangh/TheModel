/*
 * World.hpp
 *
 *  Created on: Jul 7, 2023
 *      Author: mike
 */

#ifndef WORLD_HPP_
#define WORLD_HPP_

#include "OldUniverse.hpp"

class World
{
private:
    OldUniverse* m_ptroldUniverse;

public:
	World();
	~World();
};
#endif /* WORLD_HPP_ */
