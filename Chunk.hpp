/*
 * Chunk.hpp
 *
 *  Created on: Aug 2, 2023
 *      Author: mike
 */

#ifndef CHUNK_HPP_
#define CHUNK_HPP_
#include <fstream>
#include <stdio.h>

const int KEY_LEN = 200;
const int MAX_LINES = 200;
const int MAX_SYLLABES= 200;

struct syllablePos{
  int pos;
  int beat;
  int line;
};

class Chunk
{
private:
    void beatLinePos(bool, int&, int&);
    void printChars(int, int, int, int, bool newlineStart = false, bool newlineEnd = false);
	int m_iNumLines;
    std::ifstream* m_fp;
    std::string m_Lines[MAX_LINES];
    char m_cChunkKey[KEY_LEN];
    syllablePos m_Syllables[MAX_SYLLABES];
    int m_iCurrSyllable;
    int m_iCurrBeat;
    int m_iNumSyllables;
    bool m_bStartedPrinting;
    bool m_bChunkLoaded;

public:
    bool isChunkLoaded() { return m_bChunkLoaded; }
    void getLine();
	Chunk(std::ifstream*, const char*);
    void addSyllable(int, int, int);
    void ChunkLoaded(bool bChunkLoaded) { m_bChunkLoaded = bChunkLoaded; }
	~Chunk() {}
    bool rememberSong();
};
#endif /* CHUNK_HPP_ */
