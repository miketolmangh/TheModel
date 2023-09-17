/*
 * God.hpp
 *
 *  Created on: Jul 5, 2023
 *      Author: mike
 */

#ifndef GOD_HPP_
#define GOD_HPP_
#include"Universe.hpp"
#include"SoulCollective.hpp"

class God
{
private:
    Universe m_universe;
    SoulCollective m_soulCollective;

public:
	God();
	~God() {}
    void startScheduler() { m_soulCollective.startScheduler(); }
    static void modellog(char*, bool newline = false, bool timestamp = true);
};
#endif /* GOD_HPP_ */
