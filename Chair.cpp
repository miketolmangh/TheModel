/*
 * Chair.cpp
 *
 *  Created on: Jul 7, 2023
 *      Author: mike
 */


#include "Chair.hpp"

Chair::Chair() :
    m_ptrWorld(0)
{
}

void Chair::newWorld(World* world)
{
    if (m_ptrWorld != 0)
    {
        delete m_ptrWorld;
        m_ptrWorld = new World();
    }
}
