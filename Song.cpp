/*
 * Song.cpp
 *
 *  Created on: Aug 3, 2023
 *      Author: mike
 */
#include "Song.hpp"
#include "God.hpp"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

Song::Song():
	m_iNumChunks(0),
    m_iCurrBeat(0),
    m_iCurrChunk(0)
{
    memset(&m_iBeatsSung, 0, sizeof(int)*MAX_CHUNKS);
}

void Song::addVerse(Chunk* chunk)
{
    m_Chunks[m_iNumChunks++] = chunk;
}

void Song::beat()
{
    if (m_iCurrChunk < m_iNumChunks)
    {
        char output[80];
        sprintf(output, "BEAT %d", m_iCurrBeat + 1);
        God::modellog(output, true, false);

        if (m_Chunks[m_iCurrChunk]->isChunkLoaded())
        {
            if (m_Chunks[m_iCurrChunk]->rememberSong())
            {
                m_iCurrChunk++;
            }
        }
    }

    m_iCurrBeat = (m_iCurrBeat + 1) % 4;
}
