/*
 * Chunk.cpp
 *
 *  Created on: Aug 2, 2023
 *      Author: mike
 */
#include "Chunk.hpp"
#include "God.hpp"
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>

Chunk::Chunk(std::ifstream* fp, const char * chunkKey) :
    m_iNumLines(0),
    m_fp(fp),
	m_iCurrSyllable(0),
    m_iCurrBeat(0),
    m_iNumSyllables(0),
	m_bStartedPrinting(false),
    m_bChunkLoaded(false)
{
    strcpy(m_cChunkKey, chunkKey);
}

void Chunk::getLine()
{
    std::string linein;

    std::getline(*m_fp, linein);
    if (linein.size() >0)
    {
        m_Lines[m_iNumLines++] = linein;
    }
}

bool Chunk::rememberSong()
{
    if (m_iCurrBeat >= m_Syllables[m_iCurrSyllable].beat)
    {
        if (!m_bStartedPrinting)
        {
            // Print all characters before the beat if not printe
            int iLine, iColumn;
            beatLinePos(false, iLine, iColumn);
            printChars(0, 0, iLine, iColumn - 1);
            m_bStartedPrinting = true;
        }
        // Print all characters after the beat 
        God::modellog(" * ", false, false);

        int iThisColumnPos;
        int iThisLine;
        int iNextColumnPos;
        int iNextLine;

        beatLinePos(true, iNextLine, iNextColumnPos);
        beatLinePos(false, iThisLine, iThisColumnPos);
        printChars(iThisLine, iThisColumnPos, iNextLine, iNextColumnPos - 1);
        m_iCurrSyllable++;
    }

    m_iCurrBeat++;
    if (m_iCurrSyllable >= m_iNumSyllables)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Chunk::addSyllable(int line, int pos, int beat)
{
    m_Syllables[m_iNumSyllables].pos = pos;
    m_Syllables[m_iNumSyllables].line = line;
    m_Syllables[m_iNumSyllables].beat = beat;
    m_iNumSyllables++;
}

void Chunk::printChars(int iLineStart, int iColumnStart, int iLineEnd, int iColumnEnd, bool newlineStart, bool newlineEnd)
{
    char Character[2];

    Character[1] = 0;
    for (int Line = iLineStart; Line <= iLineEnd; Line++)
    {
        int Column=0;
        bool bIgnore = false;
        bool bFinishedLine = false;
        bool bFirstCharaterWritten = false;

        while (!bFinishedLine)
        {
            if (!bFirstCharaterWritten)
            {
                if (Line == iLineStart)
                    Column = iColumnStart;
                else
                    Column = 0;
                bFirstCharaterWritten = true;
            }

            if ((Line == iLineStart) && (Column < iColumnStart))
                bIgnore = true;
            if ((Line == iLineEnd) && (Column > iColumnEnd))
            bIgnore = true;

            if (!bIgnore)
            {
                Character[0] = m_Lines[Line].c_str()[Column];
                God::modellog(Character, false, false);
            }

            Column++;

            if (Column > m_Lines[Line].size() ||
                (Line == iLineEnd && Column > iColumnEnd))
                bFinishedLine = true;
        }

        // newline
        God::modellog("", true, false);
    }
}

void Chunk::beatLinePos(bool next, int &Line, int &Column)
{
    if (next)
    {
        if (m_iCurrSyllable + 1 >= m_iNumSyllables)
        {
            Line = m_Syllables[m_iCurrSyllable].line;
            Column = m_Lines[Line].size();
        }
        else
        {
            Line = m_Syllables[m_iCurrSyllable + 1].line;
            Column = m_Syllables[m_iCurrSyllable + 1].pos;
        }
    }
    else
    {
        Column = m_Syllables[m_iCurrSyllable].pos;
        Line = m_Syllables[m_iCurrSyllable].line;
    }

}
