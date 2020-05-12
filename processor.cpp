#include "processor.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

Processor::Processor(char* fName) : Micro(fName)
{
    m_pszScrBuf = 0;
    srand(time(0));
}
Processor::~Processor()
{
    if (m_pszScrBuf != 0)
    {
        delete[] m_pszScrBuf;
    }
}
bool Processor::On()
{
    m_pszMicroName = new char[30];
    cin >> m_pszMicroName;
    m_bIsOned = true;
    cout << "Microcircuit is ready for work." << endl;
    return true;
}
bool Processor::Off()
{
    m_bIsOned = false;
    cout << "Microcircuit finished the work." << endl;
    return true;
}
bool Processor::Execute(char* cmd, void* prm)
{
    if (strcmp(cmd, "Scan") == 0)
    {
        m_pszScrBuf = new char[128];
        for (int i = 0; i < 127; i++)
        {
            m_pszScrBuf[i] = rand() % 26 + 65;
        }
        m_pszScrBuf[127] = '\0';
    }
    if (strcmp(cmd, "Clear") == 0)
    {
        m_pszScrBuf[0] = '\0';
    }
    return true;
}