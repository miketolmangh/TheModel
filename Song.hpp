/*
 * Song.hpp
 *
 *  Created on: Aug 3, 2023
 *      Author: mike
 */

#ifndef SONG_HPP_
#define SONG_HPP_
#include "Chunk.hpp"

const int MAX_CHUNKS = 20;

class Song
{
private:
    Chunk* m_Chunks[MAX_CHUNKS];
    int m_iBeatsSung[MAX_CHUNKS];
    int m_iNumChunks;
    int m_iCurrBeat;
    int m_iCurrChunk;

public:
	Song();
	~Song() {}
	void addVerse(Chunk*);
    void beat();
};
#endif /* SONG_HPP_ */
