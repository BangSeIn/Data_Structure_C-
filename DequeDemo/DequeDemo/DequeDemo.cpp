#include <iostream>
#include "Deque.h"
using namespace std;

int main()
{
	Deque DQ;
	Init(&DQ); //***INITIATING IS NECESSARY!!!
	EnqHead(&DQ, 2);
	EnqHead(&DQ, 1);
	EnqTail(&DQ, 99);
	EnqTail(&DQ, 100);
	DeqHead(&DQ);
	DeqTail(&DQ);
	Print(&DQ);
}
