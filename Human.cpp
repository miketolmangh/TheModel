/*
 * Human.cpp
 *
 *  Created on: Jul 6, 2023
 *      Author: mike
 */
#include "Human.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

Human::Human() :
    m_ibeat(0)
{
}
