/*
 * MikeSoul.cpp
 *
 *  Created on: Aug 20, 2023
 *      Author: mike
 */
#include "MikeSoul.hpp"
#include "God.hpp"
#include <time.h>

MikeSoul::MikeSoul()
	: Soul(7),
    m_SongLength(560)
{
    time(&m_SongStart);
    m_lastTick = clock();
    m_SongEnd = m_SongStart + m_SongLength;
	std::ifstream lyrics;

    lyrics.open("lyrics.txt");

    m_pverse1 = new Chunk(&lyrics, "The Dark Knight turned left and then right.  He stopped short but was glad he was sad.");
	m_pverse2 = new Chunk(&lyrics, "The ghost of Albert Einstein saw a beautiful sunset wearing his ruby ring but he didn't trust the Trojan horse.");
	m_pverse3 = new Chunk(&lyrics, "Albert Einstein took his tiger for a walk and was saved by mysterious stnger who was a hero from the Sahara/ This happened on Christmaw morning.");
	m_pverse4 = new Chunk(&lyrics, "In a world free from slavery it's true that the place souns sound but, of course it will");
	m_pverse5 = new Chunk(&lyrics, "'I'll have half a pint.' 'Why?' you ask. 'Because I want some with my roll'.  I'll try not to get any on my tie. Then I'll have some spirits and catch up with the twinkle in Jeff Golblum's eye");
	
    m_pverse1->getLine();
    m_pverse1->getLine();
    m_pverse1->getLine();
    m_pverse1->getLine();
    m_pverse1->getLine();
    m_pverse1->getLine();
    m_pverse1->getLine();
    m_pverse1->getLine();
    m_pverse1->getLine();
    m_pverse1->getLine();
    m_pverse1->getLine();
    m_pverse1->getLine();
    m_pverse1->getLine();
    m_pverse1->addSyllable(0, 8, 0);
    m_pverse1->addSyllable(1, 8, 8);
    m_pverse1->addSyllable(2, 8, 16);
    m_pverse1->addSyllable(3, 8, 24);
    m_pverse1->addSyllable(4, 8, 32);
    m_pverse1->addSyllable(5, 8, 40);
    m_pverse1->addSyllable(6, 8, 48);
    m_pverse1->addSyllable(7, 8, 56);
    m_pverse1->addSyllable(8, 4, 60);
    m_pverse1->addSyllable(9, 0, 64);
    m_pverse1->addSyllable(9, 18, 68);
    m_pverse1->addSyllable(10, 0, 72);
    m_pverse1->addSyllable(10, 18, 76);
    m_pverse1->addSyllable(11, 0, 80);
    m_pverse1->addSyllable(11, 18, 84);
    m_pverse1->addSyllable(12, 0, 88);
    m_pverse1->addSyllable(12, 18, 92);
    m_pverse1->ChunkLoaded(true);
	m_Song.addVerse(m_pverse1);

    m_pverse2->getLine();
    m_pverse2->getLine();
    m_pverse2->getLine();
    m_pverse2->getLine();
    m_pverse2->getLine();
    m_pverse2->getLine();
    m_pverse2->getLine();
    m_pverse2->getLine();
    m_pverse2->getLine();
    m_pverse2->getLine();
    m_pverse2->getLine();
    m_pverse2->getLine();
    m_pverse2->getLine();
    m_pverse2->getLine();
    m_pverse2->addSyllable(0, 8, 3);
    m_pverse2->addSyllable(1, 8, 11);
    m_pverse2->addSyllable(2, 8, 19);
    m_pverse2->addSyllable(3, 8, 27);
    m_pverse2->addSyllable(4, 8, 35);
    m_pverse2->addSyllable(5, 8, 43);
    m_pverse2->addSyllable(6, 8, 51);
    m_pverse2->addSyllable(7, 8, 59);
    m_pverse2->addSyllable(8, 4, 63);
    m_pverse2->addSyllable(9, 0, 67);
    m_pverse2->addSyllable(9, 18, 71);
    m_pverse2->addSyllable(10, 0, 75);
    m_pverse2->addSyllable(10, 18, 79);
    m_pverse2->addSyllable(11, 0, 83);
    m_pverse2->addSyllable(11, 18, 87);
    m_pverse2->addSyllable(12, 0, 91);
    m_pverse2->addSyllable(12, 18, 95);
    m_pverse2->ChunkLoaded(true);
	m_Song.addVerse(m_pverse2);

    m_pverse3->getLine();
    m_pverse3->getLine();
    m_pverse3->getLine();
    m_pverse3->getLine();
    m_pverse3->getLine();
    m_pverse3->getLine();
    m_pverse3->getLine();
    m_pverse3->getLine();
    m_pverse3->getLine();
    m_pverse3->getLine();
    m_pverse3->getLine();
    m_pverse3->getLine();
    m_pverse3->getLine();
    m_pverse3->getLine();
    m_pverse3->addSyllable(0, 8, 3);
    m_pverse3->addSyllable(1, 8, 11);
    m_pverse3->addSyllable(2, 8, 19);
    m_pverse3->addSyllable(3, 8, 27);
    m_pverse3->addSyllable(4, 8, 32);
    m_pverse3->addSyllable(5, 8, 40);
    m_pverse3->addSyllable(6, 8, 48);
    m_pverse3->addSyllable(7, 8, 56);
    m_pverse3->addSyllable(8, 4, 63);
    m_pverse3->addSyllable(9, 0, 67);
    m_pverse3->addSyllable(9, 18, 71);
    m_pverse3->addSyllable(10, 0, 75);
    m_pverse3->addSyllable(10, 18, 79);
    m_pverse3->addSyllable(11, 0, 83);
    m_pverse3->addSyllable(11, 18, 87);
    m_pverse3->addSyllable(12, 0, 91);
    m_pverse3->addSyllable(12, 18, 95);
    m_pverse3->ChunkLoaded(true);
	m_Song.addVerse(m_pverse3);

    m_pverse4->getLine();
    m_pverse4->getLine();
    m_pverse4->getLine();
    m_pverse4->getLine();
    m_pverse4->getLine();
    m_pverse4->getLine();
    m_pverse4->getLine();
    m_pverse4->getLine();
    m_pverse4->getLine();
    m_pverse4->getLine();
    m_pverse4->getLine();
    m_pverse4->getLine();
    m_pverse4->getLine();
    m_pverse4->getLine();
    m_pverse4->addSyllable(0, 8, 3);
    m_pverse4->addSyllable(1, 8, 11);
    m_pverse4->addSyllable(2, 8, 19);
    m_pverse4->addSyllable(3, 8, 27);
    m_pverse4->addSyllable(4, 8, 35);
    m_pverse4->addSyllable(5, 8, 43);
    m_pverse4->addSyllable(6, 8, 51);
    m_pverse4->addSyllable(7, 8, 59);
    m_pverse4->addSyllable(8, 10, 67);
    m_pverse4->addSyllable(9, 0, 71);
    m_pverse4->addSyllable(9, 18, 75);
    m_pverse4->addSyllable(10, 0, 79);
    m_pverse4->addSyllable(10, 18, 83);
    m_pverse4->addSyllable(11, 0, 87);
    m_pverse4->addSyllable(11, 18, 91);
    m_pverse4->addSyllable(12, 0, 95);
    m_pverse4->addSyllable(12, 18, 99);
    m_pverse4->ChunkLoaded(true);
	m_Song.addVerse(m_pverse4);

    m_pverse5->getLine();
    m_pverse5->getLine();
    m_pverse5->getLine();
    m_pverse5->getLine();
    m_pverse5->getLine();
    m_pverse5->getLine();
    m_pverse5->getLine();
    m_pverse5->getLine();
    m_pverse5->getLine();
    m_pverse5->getLine();
    m_pverse5->getLine();
    m_pverse5->addSyllable(0, 8, 3);
    m_pverse5->addSyllable(1, 8, 11);
    m_pverse5->addSyllable(2, 8, 19);
    m_pverse5->addSyllable(3, 8, 27);
    m_pverse5->addSyllable(4, 8, 35);
    m_pverse5->addSyllable(5, 8, 43);
    m_pverse5->addSyllable(6, 8, 51);
    m_pverse5->addSyllable(7, 4, 59);
    m_pverse5->addSyllable(8, 6,  69);
    m_pverse5->ChunkLoaded(true);
	m_Song.addVerse(m_pverse5);
}

void MikeSoul::beatMaybe()
{
    clock_t now;
    time_t now_time_t;
    bool bSinging = false;

    now = clock();
    time(&now_time_t);
    int timeElapsed = now - m_lastTick;

    if (now_time_t >= m_SongStart && now_time_t <= m_SongEnd)
    {
        bSinging=true;
    }
    //if (timeElapsed >= 550000 && bSinging) 
    if (timeElapsed >= 0 && bSinging) 
    {
        m_lastTick = now;
        m_Song.beat();
    }
}
