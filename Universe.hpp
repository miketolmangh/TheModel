/*
 * Universe.hpp
 *
 *  Created on: Jun 30, 2023
 *      Author: mike
 */

#ifndef UNIVERSE_HPP_
#define UNIVERSE_HPP_
#include "OldUniverse.hpp"

class Universe
{
private:
    OldUniverse m_OldUniverse;
   
public:
	Universe() {}
	~Universe() {}
    virtual void beatMaybe() {}
    void BigCollapseMaybe(){ m_OldUniverse.BigCollapseMaybe(); }
    OldUniverse* getOldUniverse() { return &m_OldUniverse; }
};

#endif /* UNIVERSE_HPP_ */
