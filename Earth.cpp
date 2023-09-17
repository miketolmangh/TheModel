/*
 * Earth.cpp
 *
 *  Created on: Jun 30, 2023
 *      Author: mike
 */
#include "Earth.hpp"
#include <stdio.h>
#include "GLOBALS.HPP"
#include "Animal.hpp"
#include "Mike.hpp"
#include "Caz.hpp"

 Earth::Earth()
 	 : Planet()
{
    createHumans();
}

void Earth::createHumans()
{
    for (int i = 0; i < I_MAX_HUMANS; i++)
        if (i == 0)
        {
            glblMike =  new Mike;
            m_phumans[i] = glblMike;
        }
        else if (i == 1)
        {
            glblCaz =  new Caz;
            m_phumans[i] = glblCaz;
        }
        else if (i == 2)
        {
            glblCaz =  new Caz;
            m_phumans[i] = glblJohnFoster;
        }
         else
        {
            m_phumans[i] = new Animal;
        }
}
