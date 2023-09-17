/*
 * Soul.cpp
 *
 *  Created on: Jul 5, 2023
 *      Author: mike
 */
#include "Soul.hpp"
#include "GLOBALS.HPP"
#include <stdio.h>

void Soul::attatchAvatar(Human* pHuman)
{
    m_pAvatar = pHuman;
}
