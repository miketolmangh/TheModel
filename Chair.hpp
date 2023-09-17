/*
 * Chair.hpp
 *
 *  Created on: Jul 7, 2023
 *      Author: mike
 */

#ifndef CHAIR_HPP_
#define CHAIR_HPP_
#include "Soul.hpp"
#include "World.hpp"
#include "Object.hpp"

class Chair : public Object
{
private:
    Soul* m_ptrSoul;
    World* m_ptrWorld;

public:
    Chair();
    ~Chair() {}
    void newWorld(World* world);
    void sit(Soul* soul) { m_ptrSoul = soul; }
    virtual void beat() { m_ptrSoul->beat(); }

    void command(int commandID) {}
};

#endif /* CHAIR_HPP_ */
