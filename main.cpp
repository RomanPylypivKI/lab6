#include "processor.h"
#include <iostream>
using namespace std;

int main(void)
{
	char w[128] = { "processor" };
	char v[128] = { "read" };
	char b[128] = { "clear" };
	char s[128] = { "scan" };
	char* strinf = new char[128];
	Processor processor(w);
	cout << "Enter processor's model: ";
	processor.On();
	cout << processor.Status() << endl;
	processor.Execute(s, strinf);
	cout << strinf << endl;
	processor.Execute(v, strinf);
	cout << strinf << endl;
	processor.Execute(b, strinf);
	processor.Execute(v, strinf);
	cout << strinf << endl;
	processor.Off();
	cout << processor.Status() << endl;
}
