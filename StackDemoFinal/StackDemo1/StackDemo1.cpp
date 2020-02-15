#include <iostream>
#include "Stack.h"
using namespace std;


int main()
{
	Stack s;
	Init(&s);
	Push(&s, 1);
	Push(&s, 2);
	Push(&s, 4);
	Pop(&s);
	Print(&s);
}

