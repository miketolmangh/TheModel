/*
 * World.cpp
 *
 *  Created on: Jul 7, 2023
 *      Author: mike
 */
 #include "World.hpp"
 #include <unistd.h>

World::World()
{
    m_ptroldUniverse = new OldUniverse();
}

World::~World()
{
    delete m_ptroldUniverse;
}
