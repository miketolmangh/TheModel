/*
 * SoulCollective.cpp
 *
 *  Created on: Jun 30, 2023
 *      Author: mike
 */

#include "SoulCollective.hpp"
#include "CONST.HPP"
#include "GLOBALS.HPP"
#include "MikeSoul.hpp"
#include "CazSoul.hpp"
#include "JohnFosterSoul.hpp"
#include "God.hpp"
#include "World.hpp"
#include <unistd.h>

SoulCollective::SoulCollective()
{
    World* world;
    for (int i = 0; i < I_MAX_HUMANS; i++)
    {
        if (i == 0)
        {
            m_ptrSouls[i] = new MikeSoul();
        }
        else if (i == 1)
        {
            m_ptrSouls[i] = new CazSoul();
        }
        else if (i == 2)
        {
            m_ptrSouls[i] = new JohnFosterSoul();
        }
        else
        {
            m_ptrSouls[i] = new Soul(5);
        }
        m_ptrChairs[i] = new Chair;
        m_ptrChairs[i]->sit(m_ptrSouls[i]);
        world = new World();
 
        m_ptrChairs[i]->newWorld(world);
    }
    m_ptrSouls[0]->attatchAvatar((Human*) &glblMike);
    m_ptrSouls[1]->attatchAvatar((Human*) &glblCaz);
    m_ptrSouls[2]->attatchAvatar((Human*) &glblJohnFoster);

    m_SoulRelation =new SoulRelation();

}

SoulCollective::~SoulCollective()
{
}

void SoulCollective::startScheduler()
{
    while (true)
    {
        for (int i = 0; i < I_MAX_HUMANS; i++)
        {
            m_ptrSouls[i]->beatMaybe();
        }
    }
}

