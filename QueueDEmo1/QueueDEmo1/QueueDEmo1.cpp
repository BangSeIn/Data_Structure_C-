#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue q;
	Init(&q);
	Enque(&q, 1);
	Enque(&q, 2);
	Enque(&q, 4);
	Deque(&q);
	Print(&q);
}
