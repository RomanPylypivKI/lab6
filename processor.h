#include <stdlib.h>
#include <string.h>
#include "microcircuit.h"
#include <iostream>
using namespace std;

class Processor : public Micro
{
public:
    Processor(char* fName);
    virtual ~Processor();
    virtual bool On();
    virtual bool Off();
    virtual bool Execute(char* cmd, void* prm);
private:
    char* m_pszScrBuf;
};