#include "microcircuit.h"

Micro::Micro(char* fName)
{
    m_pszFriendlyName = new char[strlen(fName) + 1];
    m_pszMicroName = 0;
}
Micro::~Micro()
{
    if (m_pszMicroName != 0)
    {
        delete[] m_pszMicroName;
    }
    if (m_pszFriendlyName != 0)
    {
        delete[] m_pszFriendlyName;
    }
}
