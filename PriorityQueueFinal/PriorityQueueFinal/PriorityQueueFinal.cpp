#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "PriorityQueue.h"
using namespace std;

int Compare(const char* c1, const char* c2) {
	//Compare the lenght between both of strings
	return strlen(c2) - strlen(c1);
}

int main()
{
	PQueue pq;
	Qinit(&pq,Compare);

	Enque(&pq, "Ban");
	Enque(&pq, "Ba");
	Enque(&pq, "BangS");
	Enque(&pq, "BangSe");
	Enque(&pq, "Bang");
	Enque(&pq, "BangSeI");
	Enque(&pq, "B");
	Enque(&pq, "BangSeIn");

	while (!QIsEmpty(&pq))
	cout << Deque(&pq) << endl;




}
