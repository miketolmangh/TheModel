/*
 * Human.hpp
 *
 *  Created on: Jul 6, 2023
 *      Author: mike
 */

#ifndef HUMAN_HPP_
#define HUMAN_HPP_
#include "Animal.hpp"
#include "Memory.hpp"


class Human : public Animal
{
private:
    int m_ibeat;

public:
    void startSong();
    void stopSong();
    Human();
    ~Human() {}
protected:
    Memory m_mem;
    
};

#endif /* HUMAN_HPP_ */
