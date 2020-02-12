#include <iostream>
#include "PQueue.h"
using namespace std;

int main()
{
	int size;
	Data input;
	PQueue pq;
	cout << "Set the Size of Priority Queue : ";
	cin >> size;

	for (int i = 0; i < size; i++) {
		cout << "Set the " << i + 1 << "th Data : ";
		cin >> input;
		Push(pq, input);
	}

	for (int i = 0; i < size; i++) {
		cout << Pop(pq) << "  ";
	}
	cout << endl;
	return 0;
}
