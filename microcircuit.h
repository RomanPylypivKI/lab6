#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

class Micro
{
public:
    Micro(char* fName);
    virtual ~Micro();
    virtual bool On() = 0;
    virtual bool Off() = 0;
    virtual bool Execute(char* cmd, void* prm) = 0;
    virtual bool Status(int ext = 0)
    {
        return m_bIsOned;
    }
protected:
    char* m_pszMicroName;
    char* m_pszFriendlyName;
    bool m_bIsOned;
};