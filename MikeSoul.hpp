/*
 * MikeSoul.hpp
 *
 *  Created on: Aug 20, 2023
 *      Author: mike
 */

#ifndef MIKESOUL_HPP_
#define MIKESOUL_HPP_
#include "Soul.hpp"
#include "Song.hpp"
#include "Chunk.hpp"

class MikeSoul : public Soul
{
private:
    Song m_Song;
    Chunk* m_pverse1;
    Chunk* m_pverse2;
    Chunk* m_pverse3;
    Chunk* m_pverse4;
    Chunk* m_pverse5;
    clock_t m_lastTick;
    time_t m_SongStart;
    time_t m_SongEnd;
    double m_SongLength;

public:
    MikeSoul();
    ~MikeSoul() {}
    virtual void beatMaybe();
};

#endif /* MIKESOUL_HPP_ */
