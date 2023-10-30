/*
 * OldUniverse.cpp
 *
 *  Created on: Jun 30, 2023
 *      Author: mike
 */

#include "God.hpp"
#include "OldUniverse.hpp"

OldUniverse::OldUniverse()
{
   m_lastCollapse = clock();
}

void OldUniverse::BigBang()
{
    God::modellog("BigBang", true, true);
}

void OldUniverse::BigCollapse()
{
    God::modellog("BigCollapse", true, true);
}

void OldUniverse::BigCollapseMaybe()
{
    clock_t now;
    time_t now_time_t;

    now = clock();
    int timeElapsed = now - m_lastCollapse;

    if (timeElapsed >= 5500000) 
    {
        m_lastCollapse = now;
        BigCollapse();
        BigBang();
    }
}
